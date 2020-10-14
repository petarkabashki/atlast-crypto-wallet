%module base32
 %{
 /* Put header files here or function declarations like below */

#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../crypto/base32.h"

#include "base32_wrap.h"
 %}
 

char *base32_encode(const uint8_t *in, size_t inlen, char *out, size_t outlen,
                    const char *alphabet);
void base32_encode_unsafe(const uint8_t *in, size_t inlen, uint8_t *out);

uint8_t *base32_decode(const char *in, size_t inlen, uint8_t *out,
                       size_t outlen, const char *alphabet);
bool base32_decode_unsafe(const uint8_t *in, size_t inlen, uint8_t *out,
                          const char *alphabet);

size_t base32_encoded_length(size_t inlen);
size_t base32_decoded_length(size_t inlen);