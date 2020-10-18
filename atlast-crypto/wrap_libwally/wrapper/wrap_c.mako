<% 
import re
%>
#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "common_wrapper.h"
#include "wrap_${module_name}.h"
#include "${include_file}"

## <% ifff = 0 %>
% for f in functions:    
<% 
    parlen = len(f['parms']) 
    not_void = not re.search('void', f['ret'])
%>
void ${f['wrapper_func']}() {    
    Sl(${parlen});
  % for i in range(parlen):
  <% 
    p = f['parms'][i]
    pname = p['pname']
    dtype = p['dtype']
    ptype = p['ptype']
    isref = re.search('\*', p['dtype'])

    ## ltype = '{} {}'.format(p['ptype'], p['name'])

    ## if re.match('\w+\s*\(', p['ptype']):
    ##   ltype = re.sub('([^ ]+)(\(.*\))', '(\\1 ' + p['name'] + ') \\2', p['ptype']) 
    ##   ltype = re.sub('\(\*\)', '*', ltype) 
    ## ltype = 'stackitem ' + p['name']

    regi = parlen - i - 1 %>
    % if (isref):
    Hpc(S${regi})
    % endif
    stackitem ${pname} = (stackitem) S${regi};
  % endfor
  
    ${("%s result = " % f['ret'] if not_void else "")} ${f['name']}(${ ', '.join(map(lambda p: '({}) {}'.format(p['ptype'], p['pname']), f['parms']))});
    Npop(${parlen});
  % if (not_void):
    Push = (stackitem)result;    
  % endif
}
## <% ifff += 1 %>
% endfor



struct primfcn ${module_name.lower()}_fcns[] = {
% for f in functions:    
    {"0${f['name'].upper()}", ${f['wrapper_func']}},
% endfor
{NULL, (codeptr)0}};

