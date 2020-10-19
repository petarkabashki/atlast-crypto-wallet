#include "atldef.h"

#include <stddef.h>
#include <string.h>
// #include <stdio.h>
// #include <stdlib.h>

void _wrap_memcpy() { // dst src len --
  Sl(3);
  memcpy((void*)S2, (void*)S1, (size_t)S0);
  Npop(3);
}

void _wrap_lshift(){
  Sl(2);
  stackitem res = (stackitem) (S1 << S0);
  Pop;
  S0 = res;
}

void _wrap_rshift(){
  Sl(2);
  stackitem res = (stackitem) (S1 >> S0);
  Pop;
  S0 = res;
}

struct primfcn extensions_fcns[] = {
	{"0MEMCPY", _wrap_memcpy},
	{"0LSHIFT", _wrap_lshift},
	{"0RSHIFT", _wrap_rshift},
{NULL, (codeptr)0}};

