%module sha3
 %{
 /* Put header files here or function declarations like below */

#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../crypto/sha3.h"

#include "sha3_wrap.h"
 %}
 
void sha3_224_Init(SHA3_CTX *ctx);
void sha3_256_Init(SHA3_CTX *ctx);
void sha3_384_Init(SHA3_CTX *ctx);
void sha3_512_Init(SHA3_CTX *ctx);
void sha3_Update(SHA3_CTX *ctx, const unsigned char* msg, size_t size);
void sha3_Final(SHA3_CTX *ctx, unsigned char* result);

#if USE_KECCAK
#define keccak_224_Init sha3_224_Init
#define keccak_256_Init sha3_256_Init
#define keccak_384_Init sha3_384_Init
#define keccak_512_Init sha3_512_Init
#define keccak_Update sha3_Update
void keccak_Final(SHA3_CTX *ctx, unsigned char* result);
void keccak_256(const unsigned char* data, size_t len, unsigned char* digest);
void keccak_512(const unsigned char* data, size_t len, unsigned char* digest);
#endif

void sha3_256(const unsigned char* data, size_t len, unsigned char* digest);
void sha3_512(const unsigned char* data, size_t len, unsigned char* digest);