

#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../crypto/bip32.h"


void _wrap_memcpy() { // dst src len --
  Sl(3);
  memcpy((void*)S2, (void*)S1, (size_t)S0);
  Npop(3);
}

void _wrap_hdnode_public_key(){
  Sl(1);
  Hpc(S0);
  HDNode *node = (HDNode *)S0;
  S0 = node->public_key;
}

void _wrap_hdnode_private_key(){
  Sl(1);
  Hpc(S0);
  HDNode *node = (HDNode *)S0;
  S0 = node->private_key;
}

void _wrap_hdnode_private_key_extension(){
  Sl(1);
  Hpc(S0);
  HDNode *node = (HDNode *)S0;
  S0 = node->private_key_extension;
}

void _wrap_hdnode_chain_code(){
  Sl(1);
  Hpc(S0);
  HDNode *node = (HDNode *)S0;
  S0 = node->chain_code;
}

void _wrap_hdnode_curve(){
  Sl(1);
  Hpc(S0);
  HDNode *node = (HDNode *)S0;
  S0 = node->curve;
}
struct primfcn common_fcns[] = {
	{"0MEMCPY", _wrap_memcpy},
	{"0HDN>PUBKEY", _wrap_hdnode_public_key},
	{"0HDN>PRVKEY", _wrap_hdnode_private_key},
	{"0HDN>CURVE", _wrap_hdnode_curve},
	{"0HDN>PRVEXT", _wrap_hdnode_private_key_extension},
	{"0HDN>CHAIN", _wrap_hdnode_chain_code},
{NULL, (codeptr)0}};

