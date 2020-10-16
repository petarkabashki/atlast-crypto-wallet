<% 
import re
%>
#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "wrap_${module_name}.h"

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
    dtype = p['dtype']
    ptype = re.sub('const\s+', '', dtype)
    isref = re.search('\*', p['dtype'])
    regi = parlen - i - 1 %>
    % if (isref):
    Hpc(S${regi})
    % endif
    ${ptype} ${p['name']} = (${dtype}) S${regi};
  % endfor
  
    ${("%s result " % f['ret'] if not_void else "")} ${f['name']}(${ ', '.join(map(lambda p: p['name'], f['parms']))});
    Npop(${parlen});
  % if (not_void):
    Push = (stackitem)result;    
  % endif
}
% endfor



struct primfcn ${module_name.lower()}_fcns[] = {
% for f in functions:    
    {"0${f['name'].upper()}", ${f['wrapper_func']}},
% endfor
}
{NULL, (codeptr)0}};

