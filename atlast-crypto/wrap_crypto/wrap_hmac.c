
#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "common_wrapper.h"
#include "wrap_hmac.h"
#include "../../crypto/hmac.h"


void _wrap_hmac_sha256_Init() {    
    Sl(3);
  
    Hpc(S2)
    HMAC_SHA256_CTX * hctx = (HMAC_SHA256_CTX *) S2;
  
    Hpc(S1)
    uint8_t * key = (uint8_t *) S1;
  
    uint32_t keylen = (uint32_t) S0;
  
     hmac_sha256_Init((HMAC_SHA256_CTX *) hctx, (uint8_t *) key, (uint32_t) keylen);
    Npop(3);
}

void _wrap_hmac_sha256_Update() {    
    Sl(3);
  
    Hpc(S2)
    HMAC_SHA256_CTX * hctx = (HMAC_SHA256_CTX *) S2;
  
    Hpc(S1)
    uint8_t * msg = (uint8_t *) S1;
  
    uint32_t msglen = (uint32_t) S0;
  
     hmac_sha256_Update((HMAC_SHA256_CTX *) hctx, (uint8_t *) msg, (uint32_t) msglen);
    Npop(3);
}

void _wrap_hmac_sha256_Final() {    
    Sl(2);
  
    Hpc(S1)
    HMAC_SHA256_CTX * hctx = (HMAC_SHA256_CTX *) S1;
  
    Hpc(S0)
    uint8_t * hmac = (uint8_t *) S0;
  
     hmac_sha256_Final((HMAC_SHA256_CTX *) hctx, (uint8_t *) hmac);
    Npop(2);
}

void _wrap_hmac_sha256() {    
    Sl(5);
  
    Hpc(S4)
    uint8_t * key = (uint8_t *) S4;
  
    uint32_t keylen = (uint32_t) S3;
  
    Hpc(S2)
    uint8_t * msg = (uint8_t *) S2;
  
    uint32_t msglen = (uint32_t) S1;
  
    Hpc(S0)
    uint8_t * hmac = (uint8_t *) S0;
  
     hmac_sha256((uint8_t *) key, (uint32_t) keylen, (uint8_t *) msg, (uint32_t) msglen, (uint8_t *) hmac);
    Npop(5);
}

void _wrap_hmac_sha256_prepare() {    
    Sl(4);
  
    Hpc(S3)
    uint8_t * key = (uint8_t *) S3;
  
    uint32_t keylen = (uint32_t) S2;
  
    Hpc(S1)
    uint32_t * opad_digest = (uint32_t *) S1;
  
    Hpc(S0)
    uint32_t * ipad_digest = (uint32_t *) S0;
  
     hmac_sha256_prepare((uint8_t *) key, (uint32_t) keylen, (uint32_t *) opad_digest, (uint32_t *) ipad_digest);
    Npop(4);
}

void _wrap_hmac_sha512_Init() {    
    Sl(3);
  
    Hpc(S2)
    HMAC_SHA512_CTX * hctx = (HMAC_SHA512_CTX *) S2;
  
    Hpc(S1)
    uint8_t * key = (uint8_t *) S1;
  
    uint32_t keylen = (uint32_t) S0;
  
     hmac_sha512_Init((HMAC_SHA512_CTX *) hctx, (uint8_t *) key, (uint32_t) keylen);
    Npop(3);
}

void _wrap_hmac_sha512_Update() {    
    Sl(3);
  
    Hpc(S2)
    HMAC_SHA512_CTX * hctx = (HMAC_SHA512_CTX *) S2;
  
    Hpc(S1)
    uint8_t * msg = (uint8_t *) S1;
  
    uint32_t msglen = (uint32_t) S0;
  
     hmac_sha512_Update((HMAC_SHA512_CTX *) hctx, (uint8_t *) msg, (uint32_t) msglen);
    Npop(3);
}

void _wrap_hmac_sha512_Final() {    
    Sl(2);
  
    Hpc(S1)
    HMAC_SHA512_CTX * hctx = (HMAC_SHA512_CTX *) S1;
  
    Hpc(S0)
    uint8_t * hmac = (uint8_t *) S0;
  
     hmac_sha512_Final((HMAC_SHA512_CTX *) hctx, (uint8_t *) hmac);
    Npop(2);
}

void _wrap_hmac_sha512() {    
    Sl(5);
  
    Hpc(S4)
    uint8_t * key = (uint8_t *) S4;
  
    uint32_t keylen = (uint32_t) S3;
  
    Hpc(S2)
    uint8_t * msg = (uint8_t *) S2;
  
    uint32_t msglen = (uint32_t) S1;
  
    Hpc(S0)
    uint8_t * hmac = (uint8_t *) S0;
  
     hmac_sha512((uint8_t *) key, (uint32_t) keylen, (uint8_t *) msg, (uint32_t) msglen, (uint8_t *) hmac);
    Npop(5);
}

void _wrap_hmac_sha512_prepare() {    
    Sl(4);
  
    Hpc(S3)
    uint8_t * key = (uint8_t *) S3;
  
    uint32_t keylen = (uint32_t) S2;
  
    Hpc(S1)
    uint64_t * opad_digest = (uint64_t *) S1;
  
    Hpc(S0)
    uint64_t * ipad_digest = (uint64_t *) S0;
  
     hmac_sha512_prepare((uint8_t *) key, (uint32_t) keylen, (uint64_t *) opad_digest, (uint64_t *) ipad_digest);
    Npop(4);
}



struct primfcn hmac_fcns[] = {
    {"0HMAC_SHA256_INIT", _wrap_hmac_sha256_Init},
    {"0HMAC_SHA256_UPDATE", _wrap_hmac_sha256_Update},
    {"0HMAC_SHA256_FINAL", _wrap_hmac_sha256_Final},
    {"0HMAC_SHA256", _wrap_hmac_sha256},
    {"0HMAC_SHA256_PREPARE", _wrap_hmac_sha256_prepare},
    {"0HMAC_SHA512_INIT", _wrap_hmac_sha512_Init},
    {"0HMAC_SHA512_UPDATE", _wrap_hmac_sha512_Update},
    {"0HMAC_SHA512_FINAL", _wrap_hmac_sha512_Final},
    {"0HMAC_SHA512", _wrap_hmac_sha512},
    {"0HMAC_SHA512_PREPARE", _wrap_hmac_sha512_prepare},
{NULL, (codeptr)0}};

