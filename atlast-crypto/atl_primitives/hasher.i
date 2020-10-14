%module hasher
 %{
 /* Put header files here or function declarations like below */
#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../crypto/hasher.h"

#include "hasher_wrap.h"
 %}
 
void hasher_InitParam(Hasher *hasher, HasherType type, const void *param,
                      uint32_t param_size);
void hasher_Init(Hasher *hasher, HasherType type);
void hasher_Reset(Hasher *hasher);
void hasher_Update(Hasher *hasher, const uint8_t *data, size_t length);
void hasher_Final(Hasher *hasher, uint8_t hash[HASHER_DIGEST_LENGTH]);

void hasher_Raw(HasherType type, const uint8_t *data, size_t length,
                uint8_t hash[HASHER_DIGEST_LENGTH]);

 
