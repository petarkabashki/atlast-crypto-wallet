%module hmac
 %{
 /* Put header files here or function declarations like below */

#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../crypto/hmac.h"

#include "hmac_wrap.h"
 %}
 

void hmac_sha256_Init(HMAC_SHA256_CTX *hctx, const uint8_t *key,
                      const uint32_t keylen);
void hmac_sha256_Update(HMAC_SHA256_CTX *hctx, const uint8_t *msg,
                        const uint32_t msglen);
void hmac_sha256_Final(HMAC_SHA256_CTX *hctx, uint8_t *hmac);
void hmac_sha256(const uint8_t *key, const uint32_t keylen, const uint8_t *msg,
                 const uint32_t msglen, uint8_t *hmac);
void hmac_sha256_prepare(const uint8_t *key, const uint32_t keylen,
                         uint32_t *opad_digest, uint32_t *ipad_digest);

void hmac_sha512_Init(HMAC_SHA512_CTX *hctx, const uint8_t *key,
                      const uint32_t keylen);
void hmac_sha512_Update(HMAC_SHA512_CTX *hctx, const uint8_t *msg,
                        const uint32_t msglen);
void hmac_sha512_Final(HMAC_SHA512_CTX *hctx, uint8_t *hmac);
void hmac_sha512(const uint8_t *key, const uint32_t keylen, const uint8_t *msg,
                 const uint32_t msglen, uint8_t *hmac);
void hmac_sha512_prepare(const uint8_t *key, const uint32_t keylen,
                         uint64_t *opad_digest, uint64_t *ipad_digest);
