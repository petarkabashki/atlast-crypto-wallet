<% 
diren = module_name.upper()
%>
#ifndef WRAP_${diren}_H
#define WRAP_${diren}_H

#include "atldef.h"

extern struct primfcn ${module_name}_fcns[];

#endif
