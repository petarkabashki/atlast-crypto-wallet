
#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "common_wrapper.h"
#include "wrap_hasher.h"
#include "../../crypto/hasher.h"


void _wrap_hasher_InitParam() {    
    Sl(4);
  
    Hpc(S3)
    Hasher * hasher = (Hasher *) S3;
  
    HasherType type = (HasherType) S2;
  
    Hpc(S1)
    void * param = (void *) S1;
  
    uint32_t param_size = (uint32_t) S0;
  
     hasher_InitParam((Hasher *) hasher, (HasherType) type, (void *) param, (uint32_t) param_size);
    Npop(4);
}

void _wrap_hasher_Init() {    
    Sl(2);
  
    Hpc(S1)
    Hasher * hasher = (Hasher *) S1;
  
    HasherType type = (HasherType) S0;
  
     hasher_Init((Hasher *) hasher, (HasherType) type);
    Npop(2);
}

void _wrap_hasher_Reset() {    
    Sl(1);
  
    Hpc(S0)
    Hasher * hasher = (Hasher *) S0;
  
     hasher_Reset((Hasher *) hasher);
    Npop(1);
}

void _wrap_hasher_Update() {    
    Sl(3);
  
    Hpc(S2)
    Hasher * hasher = (Hasher *) S2;
  
    Hpc(S1)
    uint8_t * data = (uint8_t *) S1;
  
    int length = (int) S0;
  
     hasher_Update((Hasher *) hasher, (uint8_t *) data, (int) length);
    Npop(3);
}

void _wrap_hasher_Final() {    
    Sl(2);
  
    Hpc(S1)
    Hasher * hasher = (Hasher *) S1;
  
    uint8_t  * hash = (uint8_t  *) S0;
  
     hasher_Final((Hasher *) hasher, (uint8_t  *) hash);
    Npop(2);
}

void _wrap_hasher_Raw() {    
    Sl(4);
  
    HasherType type = (HasherType) S3;
  
    Hpc(S2)
    uint8_t * data = (uint8_t *) S2;
  
    int length = (int) S1;
  
    uint8_t  * hash = (uint8_t  *) S0;
  
     hasher_Raw((HasherType) type, (uint8_t *) data, (int) length, (uint8_t  *) hash);
    Npop(4);
}



struct primfcn hasher_fcns[] = {
    {"0HASHER_INITPARAM", _wrap_hasher_InitParam},
    {"0HASHER_INIT", _wrap_hasher_Init},
    {"0HASHER_RESET", _wrap_hasher_Reset},
    {"0HASHER_UPDATE", _wrap_hasher_Update},
    {"0HASHER_FINAL", _wrap_hasher_Final},
    {"0HASHER_RAW", _wrap_hasher_Raw},
{NULL, (codeptr)0}};

