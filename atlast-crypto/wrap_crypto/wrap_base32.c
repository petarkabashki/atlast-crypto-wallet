
#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "common_wrapper.h"
#include "wrap_base32.h"
#include "../../crypto/base32.h"


void _wrap_base32_encode() {    
    Sl(5);
  
    Hpc(S4)
    uint8_t * in = (uint8_t *) S4;
  
    int inlen = (int) S3;
  
    Hpc(S2)
    char * out = (char *) S2;
  
    int outlen = (int) S1;
  
    Hpc(S0)
    char * alphabet = (char *) S0;
  
    char * result =  base32_encode((uint8_t *) in, (int) inlen, (char *) out, (int) outlen, (char *) alphabet);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_base32_encode_unsafe() {    
    Sl(3);
  
    Hpc(S2)
    uint8_t * in = (uint8_t *) S2;
  
    int inlen = (int) S1;
  
    Hpc(S0)
    uint8_t * out = (uint8_t *) S0;
  
     base32_encode_unsafe((uint8_t *) in, (int) inlen, (uint8_t *) out);
    Npop(3);
}

void _wrap_base32_decode() {    
    Sl(5);
  
    Hpc(S4)
    char * in = (char *) S4;
  
    int inlen = (int) S3;
  
    Hpc(S2)
    uint8_t * out = (uint8_t *) S2;
  
    int outlen = (int) S1;
  
    Hpc(S0)
    char * alphabet = (char *) S0;
  
    uint8_t * result =  base32_decode((char *) in, (int) inlen, (uint8_t *) out, (int) outlen, (char *) alphabet);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_base32_decode_unsafe() {    
    Sl(4);
  
    Hpc(S3)
    uint8_t * in = (uint8_t *) S3;
  
    int inlen = (int) S2;
  
    Hpc(S1)
    uint8_t * out = (uint8_t *) S1;
  
    Hpc(S0)
    char * alphabet = (char *) S0;
  
    int result =  base32_decode_unsafe((uint8_t *) in, (int) inlen, (uint8_t *) out, (char *) alphabet);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_base32_encoded_length() {    
    Sl(1);
  
    int inlen = (int) S0;
  
    int result =  base32_encoded_length((int) inlen);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_base32_decoded_length() {    
    Sl(1);
  
    int inlen = (int) S0;
  
    int result =  base32_decoded_length((int) inlen);
    Npop(1);
    Push = (stackitem)result;    
}



struct primfcn base32_fcns[] = {
    {"0BASE32_ENCODE", _wrap_base32_encode},
    {"0BASE32_ENCODE_UNSAFE", _wrap_base32_encode_unsafe},
    {"0BASE32_DECODE", _wrap_base32_decode},
    {"0BASE32_DECODE_UNSAFE", _wrap_base32_decode_unsafe},
    {"0BASE32_ENCODED_LENGTH", _wrap_base32_encoded_length},
    {"0BASE32_DECODED_LENGTH", _wrap_base32_decoded_length},
{NULL, (codeptr)0}};

