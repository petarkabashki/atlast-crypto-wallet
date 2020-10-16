#!/usr/bin/python
# vim: set fileencoding=utf-8

import sys
import os
import itertools
from mako.template import Template
import inspect
import re
# import ntpath

# import clang.cindex
from clang.cindex import *

def get_annotations(node):
    return [c.displayname for c in node.get_children()
            if c.kind == clang.cindex.CursorKind.ANNOTATE_ATTR]

    return result

funcs = []

# def visit(cursor, sp):
#     for f in cursor.get_children():
#         print(sp, f.displayname, f.result_type.spelling, f.kind)
#         visit(f, "\t" + sp)

def getFuncs(cursor):
    for f in cursor.get_children():
        if (f.location.file.name == sys.argv[1] and f.kind == CursorKind.FUNCTION_DECL):
            func = dict(name= f.spelling, ret = f.type.get_result().spelling, wrapper_func = "_wrap_" + f.spelling, parms = [])
            funcs.append(func)
            # print(f.spelling)
            # print(" get_result: ", f.type.get_result().spelling)
            for p in f.get_arguments():
                if(p.kind == CursorKind.PARM_DECL):
                    parm = dict(name = p.displayname, dtype = p.type.spelling, is_const = p.type.get_pointee().is_const_qualified())

                    func["parms"].append(parm)
                    # print("\t", p.displayname)
                    # print("\t  is const: ", p.type.get_pointee().is_const_qualified())
                    # print("\t  spelling: ", p.spelling)
                    # print("\t  type.spelling: ", p.type.spelling)

if len(sys.argv) != 2:
    print("Usage: boost_python_gen.py [header file name]")
    sys.exit()

Config.set_library_file('/usr/local/lib/libclang.so')
index = Index.create()
translation_unit = index.parse(sys.argv[1], ['-D__CODE_GENERATOR__'])

getFuncs(translation_unit.cursor)

_, fname = os.path.split(sys.argv[1])

# module_name = re.sub(r'[^\w]',  "_", fname )
module_name = re.sub('\..*$', '', fname )

wrapper_tpl = Template(filename='wrap_c.mako')
rendered_wrapper = wrapper_tpl.render(
             functions=funcs,
             module_name=module_name,
             include_file=sys.argv[1])

with open("wrap_{}.c".format(module_name), "w") as f:
    f.write(rendered_wrapper)

wrapper_header_tpl = Template(filename='wrap_h.mako')
rendered_header_wrapper = wrapper_header_tpl.render(
             functions=funcs,
             module_name=module_name,
            #  include_file=sys.argv[1]
             )
# print(rendered_header_wrapper)

# hfname = re.sub('\.c', '.h', fname)
with open("wrap_{}.h".format(module_name), "w") as f:
    f.write(rendered_header_wrapper)

# if not os.path.isdir(OUTPUT_DIR): os.mkdir(OUTPUT_DIR)

