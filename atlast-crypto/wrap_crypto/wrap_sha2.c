
#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "common_wrapper.h"
#include "wrap_sha2.h"
#include "../../crypto/sha2.h"


void _wrap_sha1_Transform() {    
    Sl(3);
  
    Hpc(S2)
    stackitem state_in = (stackitem) S2;
  
    Hpc(S1)
    stackitem data = (stackitem) S1;
  
    Hpc(S0)
    stackitem state_out = (stackitem) S0;
  
     sha1_Transform((uint32_t *) state_in, (uint32_t *) data, (uint32_t *) state_out);
    Npop(3);
}

void _wrap_sha1_Init() {    
    Sl(1);
  
    Hpc(S0)
    stackitem arg_0 = (stackitem) S0;
  
     sha1_Init((SHA1_CTX *) arg_0);
    Npop(1);
}

void _wrap_sha1_Update() {    
    Sl(3);
  
    Hpc(S2)
    stackitem arg_0 = (stackitem) S2;
  
    Hpc(S1)
    stackitem arg_1 = (stackitem) S1;
  
    stackitem size_t = (stackitem) S0;
  
     sha1_Update((SHA1_CTX *) arg_0, (uint8_t *) arg_1, (int) size_t);
    Npop(3);
}

void _wrap_sha1_Final() {    
    Sl(2);
  
    Hpc(S1)
    stackitem arg_0 = (stackitem) S1;
  
    stackitem arg_1 = (stackitem) S0;
  
     sha1_Final((SHA1_CTX *) arg_0, (uint8_t  *) arg_1);
    Npop(2);
}

void _wrap_sha1_End() {    
    Sl(2);
  
    Hpc(S1)
    stackitem arg_0 = (stackitem) S1;
  
    stackitem arg_1 = (stackitem) S0;
  
    char * result =  sha1_End((SHA1_CTX *) arg_0, (char  *) arg_1);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_sha1_Raw() {    
    Sl(3);
  
    Hpc(S2)
    stackitem arg_0 = (stackitem) S2;
  
    stackitem size_t = (stackitem) S1;
  
    stackitem arg_2 = (stackitem) S0;
  
     sha1_Raw((uint8_t *) arg_0, (int) size_t, (uint8_t  *) arg_2);
    Npop(3);
}

void _wrap_sha1_Data() {    
    Sl(3);
  
    Hpc(S2)
    stackitem arg_0 = (stackitem) S2;
  
    stackitem size_t = (stackitem) S1;
  
    stackitem arg_2 = (stackitem) S0;
  
    char * result =  sha1_Data((uint8_t *) arg_0, (int) size_t, (char  *) arg_2);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_sha256_Transform() {    
    Sl(3);
  
    Hpc(S2)
    stackitem state_in = (stackitem) S2;
  
    Hpc(S1)
    stackitem data = (stackitem) S1;
  
    Hpc(S0)
    stackitem state_out = (stackitem) S0;
  
     sha256_Transform((uint32_t *) state_in, (uint32_t *) data, (uint32_t *) state_out);
    Npop(3);
}

void _wrap_sha256_Init() {    
    Sl(1);
  
    Hpc(S0)
    stackitem arg_0 = (stackitem) S0;
  
     sha256_Init((SHA256_CTX *) arg_0);
    Npop(1);
}

void _wrap_sha256_Update() {    
    Sl(3);
  
    Hpc(S2)
    stackitem arg_0 = (stackitem) S2;
  
    Hpc(S1)
    stackitem arg_1 = (stackitem) S1;
  
    stackitem size_t = (stackitem) S0;
  
     sha256_Update((SHA256_CTX *) arg_0, (uint8_t *) arg_1, (int) size_t);
    Npop(3);
}

void _wrap_sha256_Final() {    
    Sl(2);
  
    Hpc(S1)
    stackitem arg_0 = (stackitem) S1;
  
    stackitem arg_1 = (stackitem) S0;
  
     sha256_Final((SHA256_CTX *) arg_0, (uint8_t  *) arg_1);
    Npop(2);
}

void _wrap_sha256_End() {    
    Sl(2);
  
    Hpc(S1)
    stackitem arg_0 = (stackitem) S1;
  
    stackitem arg_1 = (stackitem) S0;
  
    char * result =  sha256_End((SHA256_CTX *) arg_0, (char  *) arg_1);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_sha256_Raw() {    
    Sl(3);
  
    Hpc(S2)
    stackitem arg_0 = (stackitem) S2;
  
    stackitem size_t = (stackitem) S1;
  
    stackitem arg_2 = (stackitem) S0;
  
     sha256_Raw((uint8_t *) arg_0, (int) size_t, (uint8_t  *) arg_2);
    Npop(3);
}

void _wrap_sha256_Data() {    
    Sl(3);
  
    Hpc(S2)
    stackitem arg_0 = (stackitem) S2;
  
    stackitem size_t = (stackitem) S1;
  
    stackitem arg_2 = (stackitem) S0;
  
    char * result =  sha256_Data((uint8_t *) arg_0, (int) size_t, (char  *) arg_2);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_sha512_Transform() {    
    Sl(3);
  
    Hpc(S2)
    stackitem state_in = (stackitem) S2;
  
    Hpc(S1)
    stackitem data = (stackitem) S1;
  
    Hpc(S0)
    stackitem state_out = (stackitem) S0;
  
     sha512_Transform((uint64_t *) state_in, (uint64_t *) data, (uint64_t *) state_out);
    Npop(3);
}

void _wrap_sha512_Init() {    
    Sl(1);
  
    Hpc(S0)
    stackitem arg_0 = (stackitem) S0;
  
     sha512_Init((SHA512_CTX *) arg_0);
    Npop(1);
}

void _wrap_sha512_Update() {    
    Sl(3);
  
    Hpc(S2)
    stackitem arg_0 = (stackitem) S2;
  
    Hpc(S1)
    stackitem arg_1 = (stackitem) S1;
  
    stackitem size_t = (stackitem) S0;
  
     sha512_Update((SHA512_CTX *) arg_0, (uint8_t *) arg_1, (int) size_t);
    Npop(3);
}

void _wrap_sha512_Final() {    
    Sl(2);
  
    Hpc(S1)
    stackitem arg_0 = (stackitem) S1;
  
    stackitem arg_1 = (stackitem) S0;
  
     sha512_Final((SHA512_CTX *) arg_0, (uint8_t  *) arg_1);
    Npop(2);
}

void _wrap_sha512_End() {    
    Sl(2);
  
    Hpc(S1)
    stackitem arg_0 = (stackitem) S1;
  
    stackitem arg_1 = (stackitem) S0;
  
    char * result =  sha512_End((SHA512_CTX *) arg_0, (char  *) arg_1);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_sha512_Raw() {    
    Sl(3);
  
    Hpc(S2)
    stackitem arg_0 = (stackitem) S2;
  
    stackitem size_t = (stackitem) S1;
  
    stackitem arg_2 = (stackitem) S0;
  
     sha512_Raw((uint8_t *) arg_0, (int) size_t, (uint8_t  *) arg_2);
    Npop(3);
}

void _wrap_sha512_Data() {    
    Sl(3);
  
    Hpc(S2)
    stackitem arg_0 = (stackitem) S2;
  
    stackitem size_t = (stackitem) S1;
  
    stackitem arg_2 = (stackitem) S0;
  
    char * result =  sha512_Data((uint8_t *) arg_0, (int) size_t, (char  *) arg_2);
    Npop(3);
    Push = (stackitem)result;    
}



struct primfcn sha2_fcns[] = {
    {"0SHA1_TRANSFORM", _wrap_sha1_Transform},
    {"0SHA1_INIT", _wrap_sha1_Init},
    {"0SHA1_UPDATE", _wrap_sha1_Update},
    {"0SHA1_FINAL", _wrap_sha1_Final},
    {"0SHA1_END", _wrap_sha1_End},
    {"0SHA1_RAW", _wrap_sha1_Raw},
    {"0SHA1_DATA", _wrap_sha1_Data},
    {"0SHA256_TRANSFORM", _wrap_sha256_Transform},
    {"0SHA256_INIT", _wrap_sha256_Init},
    {"0SHA256_UPDATE", _wrap_sha256_Update},
    {"0SHA256_FINAL", _wrap_sha256_Final},
    {"0SHA256_END", _wrap_sha256_End},
    {"0SHA256_RAW", _wrap_sha256_Raw},
    {"0SHA256_DATA", _wrap_sha256_Data},
    {"0SHA512_TRANSFORM", _wrap_sha512_Transform},
    {"0SHA512_INIT", _wrap_sha512_Init},
    {"0SHA512_UPDATE", _wrap_sha512_Update},
    {"0SHA512_FINAL", _wrap_sha512_Final},
    {"0SHA512_END", _wrap_sha512_End},
    {"0SHA512_RAW", _wrap_sha512_Raw},
    {"0SHA512_DATA", _wrap_sha512_Data},
{NULL, (codeptr)0}};

