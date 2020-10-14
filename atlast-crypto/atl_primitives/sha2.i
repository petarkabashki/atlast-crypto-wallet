%module sha2
 %{
 /* Put header files here or function declarations like below */

#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../crypto/sha2.h"

#include "sha2_wrap.h"
 %}
 

void sha1_Transform(const uint32_t* state_in, const uint32_t* data, uint32_t* state_out);
void sha1_Init(SHA1_CTX *);
void sha1_Update(SHA1_CTX*, const uint8_t*, size_t);
void sha1_Final(SHA1_CTX*, uint8_t[SHA1_DIGEST_LENGTH]);
char* sha1_End(SHA1_CTX*, char[SHA1_DIGEST_STRING_LENGTH]);
void sha1_Raw(const uint8_t*, size_t, uint8_t[SHA1_DIGEST_LENGTH]);
char* sha1_Data(const uint8_t*, size_t, char[SHA1_DIGEST_STRING_LENGTH]);

void sha256_Transform(const uint32_t* state_in, const uint32_t* data, uint32_t* state_out);
void sha256_Init(SHA256_CTX *);
void sha256_Update(SHA256_CTX*, const uint8_t*, size_t);
void sha256_Final(SHA256_CTX*, uint8_t[SHA256_DIGEST_LENGTH]);
char* sha256_End(SHA256_CTX*, char[SHA256_DIGEST_STRING_LENGTH]);
void sha256_Raw(const uint8_t*, size_t, uint8_t[SHA256_DIGEST_LENGTH]);
char* sha256_Data(const uint8_t*, size_t, char[SHA256_DIGEST_STRING_LENGTH]);

void sha512_Transform(const uint64_t* state_in, const uint64_t* data, uint64_t* state_out);
void sha512_Init(SHA512_CTX*);
void sha512_Update(SHA512_CTX*, const uint8_t*, size_t);
void sha512_Final(SHA512_CTX*, uint8_t[SHA512_DIGEST_LENGTH]);
char* sha512_End(SHA512_CTX*, char[SHA512_DIGEST_STRING_LENGTH]);
void sha512_Raw(const uint8_t*, size_t, uint8_t[SHA512_DIGEST_LENGTH]);
char* sha512_Data(const uint8_t*, size_t, char[SHA512_DIGEST_STRING_LENGTH]);
