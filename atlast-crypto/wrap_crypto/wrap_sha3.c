
#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "common_wrapper.h"
#include "wrap_sha3.h"
#include "../../crypto/sha3.h"


void _wrap_sha3_224_Init() {    
    Sl(1);
  
    Hpc(S0)
    stackitem ctx = (SHA3_CTX *) S0;
  
     sha3_224_Init((SHA3_CTX *) ctx);
    Npop(1);
}

void _wrap_sha3_256_Init() {    
    Sl(1);
  
    Hpc(S0)
    stackitem ctx = (SHA3_CTX *) S0;
  
     sha3_256_Init((SHA3_CTX *) ctx);
    Npop(1);
}

void _wrap_sha3_384_Init() {    
    Sl(1);
  
    Hpc(S0)
    stackitem ctx = (SHA3_CTX *) S0;
  
     sha3_384_Init((SHA3_CTX *) ctx);
    Npop(1);
}

void _wrap_sha3_512_Init() {    
    Sl(1);
  
    Hpc(S0)
    stackitem ctx = (SHA3_CTX *) S0;
  
     sha3_512_Init((SHA3_CTX *) ctx);
    Npop(1);
}

void _wrap_sha3_Update() {    
    Sl(3);
  
    Hpc(S2)
    stackitem ctx = (SHA3_CTX *) S2;
  
    Hpc(S1)
    stackitem msg = (unsigned char *) S1;
  
    stackitem size = (int) S0;
  
     sha3_Update((SHA3_CTX *) ctx, (unsigned char *) msg, (int) size);
    Npop(3);
}

void _wrap_sha3_Final() {    
    Sl(2);
  
    Hpc(S1)
    stackitem ctx = (SHA3_CTX *) S1;
  
    Hpc(S0)
    stackitem result = (unsigned char *) S0;
  
     sha3_Final((SHA3_CTX *) ctx, (unsigned char *) result);
    Npop(2);
}

void _wrap_keccak_Final() {    
    Sl(2);
  
    Hpc(S1)
    stackitem ctx = (SHA3_CTX *) S1;
  
    Hpc(S0)
    stackitem result = (unsigned char *) S0;
  
     keccak_Final((SHA3_CTX *) ctx, (unsigned char *) result);
    Npop(2);
}

void _wrap_keccak_256() {    
    Sl(3);
  
    Hpc(S2)
    stackitem data = (unsigned char *) S2;
  
    stackitem len = (int) S1;
  
    Hpc(S0)
    stackitem digest = (unsigned char *) S0;
  
     keccak_256((unsigned char *) data, (int) len, (unsigned char *) digest);
    Npop(3);
}

void _wrap_keccak_512() {    
    Sl(3);
  
    Hpc(S2)
    stackitem data = (unsigned char *) S2;
  
    stackitem len = (int) S1;
  
    Hpc(S0)
    stackitem digest = (unsigned char *) S0;
  
     keccak_512((unsigned char *) data, (int) len, (unsigned char *) digest);
    Npop(3);
}

void _wrap_sha3_256() {    
    Sl(3);
  
    Hpc(S2)
    stackitem data = (unsigned char *) S2;
  
    stackitem len = (int) S1;
  
    Hpc(S0)
    stackitem digest = (unsigned char *) S0;
  
     sha3_256((unsigned char *) data, (int) len, (unsigned char *) digest);
    Npop(3);
}

void _wrap_sha3_512() {    
    Sl(3);
  
    Hpc(S2)
    stackitem data = (unsigned char *) S2;
  
    stackitem len = (int) S1;
  
    Hpc(S0)
    stackitem digest = (unsigned char *) S0;
  
     sha3_512((unsigned char *) data, (int) len, (unsigned char *) digest);
    Npop(3);
}



struct primfcn sha3_fcns[] = {
    {"0SHA3_224_INIT", _wrap_sha3_224_Init},
    {"0SHA3_256_INIT", _wrap_sha3_256_Init},
    {"0SHA3_384_INIT", _wrap_sha3_384_Init},
    {"0SHA3_512_INIT", _wrap_sha3_512_Init},
    {"0SHA3_UPDATE", _wrap_sha3_Update},
    {"0SHA3_FINAL", _wrap_sha3_Final},
    {"0KECCAK_FINAL", _wrap_keccak_Final},
    {"0KECCAK_256", _wrap_keccak_256},
    {"0KECCAK_512", _wrap_keccak_512},
    {"0SHA3_256", _wrap_sha3_256},
    {"0SHA3_512", _wrap_sha3_512},
{NULL, (codeptr)0}};

