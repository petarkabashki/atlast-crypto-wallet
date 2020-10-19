#!/usr/bin/python
# vim: set fileencoding=utf-8

import sys
import os
import itertools
from mako.template import Template
import inspect
import re
from clang.cindex import *

print(sys.argv[0]) 
print(sys.argv[1]) 
print(sys.argv[2]) 

wrapper_script_dir = os.path.dirname(os.path.abspath(__file__))

funcs = []

OUTPUT_DIR = re.sub('(\\\|\/)$', '', sys.argv[2]) if (len(sys.argv) > 2) else '.'

# print(OUTPUT_DIR)
# exit()

# def get_annotations(node):
#     return [c.displayname for c in node.get_children()
#             if c.kind == clang.cindex.CursorKind.ANNOTATE_ATTR]
#     return result
def walk(cusor, t):
    for f in cursor.get_children():
        print(t + "\t>", f.kind, f.spelling)
        walk(f, t + "\t")

def getFuncs(cursor):
    for f in cursor.get_children():
        if (f.location.file.name == sys.argv[1] and f.kind == CursorKind.FUNCTION_DECL):
            func = dict(name= f.spelling, ret = f.type.get_result().spelling, wrapper_func = "_wrap_" + f.spelling, parms = [])
            funcs.append(func)
            print(f.spelling)
            # print(" get_result: ", f.type.get_result().spelling)
            pii = -1
            for p in f.get_arguments():
                if(p.kind == CursorKind.PARM_DECL):
                    pii += 1
                    # ano = get_annotations(p)
                    # print(ano)
                    dtype = p.type.get_canonical().spelling
                    ptype = re.sub('const\s+', '', dtype)
                    ptype = re.sub('\[\d*\]', ' *', ptype)
                    pname = p.displayname if p.displayname else p.spelling
                    if (not pname):
                        pname = "arg_{}".format(pii)

                    print('****', pname)
                    # ltype = re.sub('([^ ]+)(\(.*\))', '(\\1 ' + p.spelling + ') \\2', p.type.spelling)
                    parm = {"pname": pname, "dtype": dtype, "ptype": ptype}
                    func["parms"].append(parm)
                    # print("  spelling: ", p.spelling)
                    # print("  displayname", p.displayname)
                    # print("  ltype:", ltype)
                    # print("  get_result().spelling ", p.get_result().spelling)
                    # print("    type.spelling: ", p.type.spelling)
                    # print("    type.get_declaration(): ", p.type.get_declaration().spelling)
                    # print("    type.get_pointee().spelling: ", p.type.get_pointee().spelling)
                    # print("    type.get_ref_qualifier(): ", p.type.get_ref_qualifier())
                    # walk(p.type.get_pointee(), "\t-->\t")

                    # print("\t  type.is_const: ", p.type.is_const_qualified())
                    # print("\t  spelling: ", p.spelling)
                    # print("\t  type.spelling: ", p.type.spelling)

if len(sys.argv) <= 2:
    print("Usage: wrap.py [header file name] [destination folder]")
    sys.exit()

Config.set_library_file('/usr/local/lib/libclang.so')
index = Index.create()
translation_unit = index.parse(sys.argv[1], ['-D__CODE_GENERATOR__'])

getFuncs(translation_unit.cursor)

_, fname = os.path.split(sys.argv[1])

module_name = re.sub('\..*$', '', fname )

if not os.path.isdir(OUTPUT_DIR): os.mkdir(OUTPUT_DIR)

wrapper_tpl = Template(filename='{}/wrap_c.mako'.format(wrapper_script_dir))
rendered_wrapper = wrapper_tpl.render(
             functions=funcs,
             module_name=module_name,
             include_file=sys.argv[1])

with open("{}/wrap_{}.c".format(OUTPUT_DIR, module_name), "w") as f:
    f.write(rendered_wrapper)

wrapper_header_tpl = Template(filename='{}/wrap_h.mako'.format(wrapper_script_dir))
rendered_header_wrapper = wrapper_header_tpl.render(
             functions=funcs,
             module_name=module_name,
             )

with open("{}/wrap_{}.h".format(OUTPUT_DIR, module_name), "w") as f:
    f.write(rendered_header_wrapper)


