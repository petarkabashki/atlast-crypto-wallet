%module aes
 %{
 /* Put header files here or function declarations like below */

#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../crypto/aes/aes.h"

#include "aes_wrap.h"
 %}
 
AES_RETURN aes_init(void);
// #if defined( AES_ENCRYPT )

#if defined( AES_128 ) || defined( AES_VAR)
AES_RETURN aes_encrypt_key128(const unsigned char *key, aes_encrypt_ctx cx[1]);
#endif

#if defined( AES_192 ) || defined( AES_VAR)
AES_RETURN aes_encrypt_key192(const unsigned char *key, aes_encrypt_ctx cx[1]);
#endif

#if defined( AES_256 ) || defined( AES_VAR)
AES_RETURN aes_encrypt_key256(const unsigned char *key, aes_encrypt_ctx cx[1]);
#endif

#if defined( AES_VAR )
AES_RETURN aes_encrypt_key(const unsigned char *key, int key_len, aes_encrypt_ctx cx[1]);
#endif

AES_RETURN aes_encrypt(const unsigned char *in, unsigned char *out, const aes_encrypt_ctx cx[1]);


#if defined( AES_128 ) || defined( AES_VAR)
AES_RETURN aes_decrypt_key128(const unsigned char *key, aes_decrypt_ctx cx[1]);
#endif

#if defined( AES_192 ) || defined( AES_VAR)
AES_RETURN aes_decrypt_key192(const unsigned char *key, aes_decrypt_ctx cx[1]);
#endif

#if defined( AES_256 ) || defined( AES_VAR)
AES_RETURN aes_decrypt_key256(const unsigned char *key, aes_decrypt_ctx cx[1]);
#endif

#if defined( AES_VAR )
AES_RETURN aes_decrypt_key(const unsigned char *key, int key_len, aes_decrypt_ctx cx[1]);
#endif

AES_RETURN aes_decrypt(const unsigned char *in, unsigned char *out, const aes_decrypt_ctx cx[1]);

AES_RETURN aes_test_alignment_detection(unsigned int n);

AES_RETURN aes_ecb_encrypt(const unsigned char *ibuf, unsigned char *obuf,
                    int len, const aes_encrypt_ctx cx[1]);

AES_RETURN aes_ecb_decrypt(const unsigned char *ibuf, unsigned char *obuf,
                    int len, const aes_decrypt_ctx cx[1]);

AES_RETURN aes_cbc_encrypt(const unsigned char *ibuf, unsigned char *obuf,
                    int len, unsigned char *iv, const aes_encrypt_ctx cx[1]);

AES_RETURN aes_cbc_decrypt(const unsigned char *ibuf, unsigned char *obuf,
                    int len, unsigned char *iv, const aes_decrypt_ctx cx[1]);

AES_RETURN aes_mode_reset(aes_encrypt_ctx cx[1]);

AES_RETURN aes_cfb_encrypt(const unsigned char *ibuf, unsigned char *obuf,
                    int len, unsigned char *iv, aes_encrypt_ctx cx[1]);

AES_RETURN aes_cfb_decrypt(const unsigned char *ibuf, unsigned char *obuf,
                    int len, unsigned char *iv, aes_encrypt_ctx cx[1]);


AES_RETURN aes_ofb_crypt(const unsigned char *ibuf, unsigned char *obuf,
                    int len, unsigned char *iv, aes_encrypt_ctx cx[1]);

typedef void cbuf_inc(unsigned char *cbuf);


AES_RETURN aes_ctr_crypt(const unsigned char *ibuf, unsigned char *obuf,
            int len, unsigned char *cbuf, cbuf_inc ctr_inc, aes_encrypt_ctx cx[1]);

void aes_ctr_cbuf_inc(unsigned char *cbuf);
