
#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "common_wrapper.h"
#include "wrap_hmac_drbg.h"
#include "../../crypto/hmac_drbg.h"


void _wrap_hmac_drbg_init() {    
    Sl(5);
  
    Hpc(S4)
    HMAC_DRBG_CTX * ctx = (HMAC_DRBG_CTX *) S4;
  
    Hpc(S3)
    uint8_t * buf = (uint8_t *) S3;
  
    int len = (int) S2;
  
    Hpc(S1)
    uint8_t * nonce = (uint8_t *) S1;
  
    int nonce_len = (int) S0;
  
     hmac_drbg_init((HMAC_DRBG_CTX *) ctx, (uint8_t *) buf, (int) len, (uint8_t *) nonce, (int) nonce_len);
    Npop(5);
}

void _wrap_hmac_drbg_reseed() {    
    Sl(5);
  
    Hpc(S4)
    HMAC_DRBG_CTX * ctx = (HMAC_DRBG_CTX *) S4;
  
    Hpc(S3)
    uint8_t * buf = (uint8_t *) S3;
  
    int len = (int) S2;
  
    Hpc(S1)
    uint8_t * addin = (uint8_t *) S1;
  
    int addin_len = (int) S0;
  
     hmac_drbg_reseed((HMAC_DRBG_CTX *) ctx, (uint8_t *) buf, (int) len, (uint8_t *) addin, (int) addin_len);
    Npop(5);
}

void _wrap_hmac_drbg_generate() {    
    Sl(3);
  
    Hpc(S2)
    HMAC_DRBG_CTX * ctx = (HMAC_DRBG_CTX *) S2;
  
    Hpc(S1)
    uint8_t * buf = (uint8_t *) S1;
  
    int len = (int) S0;
  
     hmac_drbg_generate((HMAC_DRBG_CTX *) ctx, (uint8_t *) buf, (int) len);
    Npop(3);
}



struct primfcn hmac_drbg_fcns[] = {
    {"0HMAC_DRBG_INIT", _wrap_hmac_drbg_init},
    {"0HMAC_DRBG_RESEED", _wrap_hmac_drbg_reseed},
    {"0HMAC_DRBG_GENERATE", _wrap_hmac_drbg_generate},
{NULL, (codeptr)0}};

