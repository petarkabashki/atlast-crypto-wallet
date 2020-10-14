%module hmac_drbg
 %{
 /* Put header files here or function declarations like below */

#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../crypto/hmac_drbg.h"

#include "hmac_drbg_wrap.h"
 %}
 
void hmac_drbg_init(HMAC_DRBG_CTX *ctx, const uint8_t *buf, size_t len,
                    const uint8_t *nonce, size_t nonce_len);
void hmac_drbg_reseed(HMAC_DRBG_CTX *ctx, const uint8_t *buf, size_t len,
                      const uint8_t *addin, size_t addin_len);
void hmac_drbg_generate(HMAC_DRBG_CTX *ctx, uint8_t *buf, size_t len);
