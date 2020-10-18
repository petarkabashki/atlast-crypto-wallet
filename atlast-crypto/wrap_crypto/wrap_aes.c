
#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "common_wrapper.h"
#include "wrap_aes.h"
#include "../../crypto/aes/aes.h"


void _wrap_aes_init() {    
    Sl(0);
  
    int result =  aes_init();
    Npop(0);
    Push = (stackitem)result;    
}

void _wrap_aes_encrypt_key256() {    
    Sl(2);
  
    Hpc(S1)
    stackitem key = (stackitem) S1;
  
    stackitem cx = (stackitem) S0;
  
    int result =  aes_encrypt_key256((unsigned char *) key, (aes_encrypt_ctx  *) cx);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_aes_encrypt() {    
    Sl(3);
  
    Hpc(S2)
    stackitem in = (stackitem) S2;
  
    Hpc(S1)
    stackitem out = (stackitem) S1;
  
    stackitem cx = (stackitem) S0;
  
    int result =  aes_encrypt((unsigned char *) in, (unsigned char *) out, (aes_encrypt_ctx const *) cx);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_aes_decrypt_key256() {    
    Sl(2);
  
    Hpc(S1)
    stackitem key = (stackitem) S1;
  
    stackitem cx = (stackitem) S0;
  
    int result =  aes_decrypt_key256((unsigned char *) key, (aes_decrypt_ctx  *) cx);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_aes_decrypt() {    
    Sl(3);
  
    Hpc(S2)
    stackitem in = (stackitem) S2;
  
    Hpc(S1)
    stackitem out = (stackitem) S1;
  
    stackitem cx = (stackitem) S0;
  
    int result =  aes_decrypt((unsigned char *) in, (unsigned char *) out, (aes_decrypt_ctx const *) cx);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_aes_test_alignment_detection() {    
    Sl(1);
  
    stackitem n = (stackitem) S0;
  
    int result =  aes_test_alignment_detection((unsigned int) n);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_aes_ecb_encrypt() {    
    Sl(4);
  
    Hpc(S3)
    stackitem ibuf = (stackitem) S3;
  
    Hpc(S2)
    stackitem obuf = (stackitem) S2;
  
    stackitem len = (stackitem) S1;
  
    stackitem cx = (stackitem) S0;
  
    int result =  aes_ecb_encrypt((unsigned char *) ibuf, (unsigned char *) obuf, (int) len, (aes_encrypt_ctx const *) cx);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_aes_ecb_decrypt() {    
    Sl(4);
  
    Hpc(S3)
    stackitem ibuf = (stackitem) S3;
  
    Hpc(S2)
    stackitem obuf = (stackitem) S2;
  
    stackitem len = (stackitem) S1;
  
    stackitem cx = (stackitem) S0;
  
    int result =  aes_ecb_decrypt((unsigned char *) ibuf, (unsigned char *) obuf, (int) len, (aes_decrypt_ctx const *) cx);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_aes_cbc_encrypt() {    
    Sl(5);
  
    Hpc(S4)
    stackitem ibuf = (stackitem) S4;
  
    Hpc(S3)
    stackitem obuf = (stackitem) S3;
  
    stackitem len = (stackitem) S2;
  
    Hpc(S1)
    stackitem iv = (stackitem) S1;
  
    stackitem cx = (stackitem) S0;
  
    int result =  aes_cbc_encrypt((unsigned char *) ibuf, (unsigned char *) obuf, (int) len, (unsigned char *) iv, (aes_encrypt_ctx const *) cx);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_aes_cbc_decrypt() {    
    Sl(5);
  
    Hpc(S4)
    stackitem ibuf = (stackitem) S4;
  
    Hpc(S3)
    stackitem obuf = (stackitem) S3;
  
    stackitem len = (stackitem) S2;
  
    Hpc(S1)
    stackitem iv = (stackitem) S1;
  
    stackitem cx = (stackitem) S0;
  
    int result =  aes_cbc_decrypt((unsigned char *) ibuf, (unsigned char *) obuf, (int) len, (unsigned char *) iv, (aes_decrypt_ctx const *) cx);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_aes_mode_reset() {    
    Sl(1);
  
    stackitem cx = (stackitem) S0;
  
    int result =  aes_mode_reset((aes_encrypt_ctx  *) cx);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_aes_cfb_encrypt() {    
    Sl(5);
  
    Hpc(S4)
    stackitem ibuf = (stackitem) S4;
  
    Hpc(S3)
    stackitem obuf = (stackitem) S3;
  
    stackitem len = (stackitem) S2;
  
    Hpc(S1)
    stackitem iv = (stackitem) S1;
  
    stackitem cx = (stackitem) S0;
  
    int result =  aes_cfb_encrypt((unsigned char *) ibuf, (unsigned char *) obuf, (int) len, (unsigned char *) iv, (aes_encrypt_ctx  *) cx);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_aes_cfb_decrypt() {    
    Sl(5);
  
    Hpc(S4)
    stackitem ibuf = (stackitem) S4;
  
    Hpc(S3)
    stackitem obuf = (stackitem) S3;
  
    stackitem len = (stackitem) S2;
  
    Hpc(S1)
    stackitem iv = (stackitem) S1;
  
    stackitem cx = (stackitem) S0;
  
    int result =  aes_cfb_decrypt((unsigned char *) ibuf, (unsigned char *) obuf, (int) len, (unsigned char *) iv, (aes_encrypt_ctx  *) cx);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_aes_ofb_crypt() {    
    Sl(5);
  
    Hpc(S4)
    stackitem ibuf = (stackitem) S4;
  
    Hpc(S3)
    stackitem obuf = (stackitem) S3;
  
    stackitem len = (stackitem) S2;
  
    Hpc(S1)
    stackitem iv = (stackitem) S1;
  
    stackitem cx = (stackitem) S0;
  
    int result =  aes_ofb_crypt((unsigned char *) ibuf, (unsigned char *) obuf, (int) len, (unsigned char *) iv, (aes_encrypt_ctx  *) cx);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_aes_ctr_crypt() {    
    Sl(6);
  
    Hpc(S5)
    stackitem ibuf = (stackitem) S5;
  
    Hpc(S4)
    stackitem obuf = (stackitem) S4;
  
    stackitem len = (stackitem) S3;
  
    Hpc(S2)
    stackitem cbuf = (stackitem) S2;
  
    Hpc(S1)
    // stackitem ctr_inc = (stackitem) S1;
  
    stackitem cx = (stackitem) S0;
  
    int result =  aes_ctr_crypt((unsigned char *) ibuf, (unsigned char *) obuf, (int) len, (unsigned char *) cbuf, 0, (aes_encrypt_ctx  *) cx);
    Npop(6);
    Push = (stackitem)result;    
}

void _wrap_aes_ctr_cbuf_inc() {    
    Sl(1);
  
    Hpc(S0)
    stackitem cbuf = (stackitem) S0;
  
     aes_ctr_cbuf_inc((unsigned char *) cbuf);
    Npop(1);
}



struct primfcn aes_fcns[] = {
    {"0AES_INIT", _wrap_aes_init},
    {"0AES_ENCRYPT_KEY256", _wrap_aes_encrypt_key256},
    {"0AES_ENCRYPT", _wrap_aes_encrypt},
    {"0AES_DECRYPT_KEY256", _wrap_aes_decrypt_key256},
    {"0AES_DECRYPT", _wrap_aes_decrypt},
    {"0AES_TEST_ALIGNMENT_DETECTION", _wrap_aes_test_alignment_detection},
    {"0AES_ECB_ENCRYPT", _wrap_aes_ecb_encrypt},
    {"0AES_ECB_DECRYPT", _wrap_aes_ecb_decrypt},
    {"0AES_CBC_ENCRYPT", _wrap_aes_cbc_encrypt},
    {"0AES_CBC_DECRYPT", _wrap_aes_cbc_decrypt},
    {"0AES_MODE_RESET", _wrap_aes_mode_reset},
    {"0AES_CFB_ENCRYPT", _wrap_aes_cfb_encrypt},
    {"0AES_CFB_DECRYPT", _wrap_aes_cfb_decrypt},
    {"0AES_OFB_CRYPT", _wrap_aes_ofb_crypt},
    {"0AES_CTR_CRYPT", _wrap_aes_ctr_crypt},
    {"0AES_CTR_CBUF_INC", _wrap_aes_ctr_cbuf_inc},
{NULL, (codeptr)0}};

