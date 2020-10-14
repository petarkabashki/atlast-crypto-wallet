%module base58
 %{
 /* Put header files here or function declarations like below */

#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../crypto/base58.h"

#include "base58_wrap.h"
 %}
 

int base58_encode_check(const uint8_t *data, int len, HasherType hasher_type,
                        char *str, int strsize);
int base58_decode_check(const char *str, HasherType hasher_type, uint8_t *data,
                        int datalen);

// Private
bool b58tobin(void *bin, size_t *binszp, const char *b58);
int b58check(const void *bin, size_t binsz, HasherType hasher_type,
             const char *base58str);
bool b58enc(char *b58, size_t *b58sz, const void *data, size_t binsz);

#if USE_GRAPHENE
int base58gph_encode_check(const uint8_t *data, int datalen, char *str,
                           int strsize);
int base58gph_decode_check(const char *str, uint8_t *data, int datalen);
int b58gphcheck(const void *bin, size_t binsz, const char *base58str);
#endif
