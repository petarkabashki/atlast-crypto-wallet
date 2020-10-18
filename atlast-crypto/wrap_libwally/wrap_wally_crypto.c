
#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "common_wrapper.h"
#include "wrap_wally_crypto.h"
#include "../../libwally-core/include/wally_crypto.h"


void _wrap_wally_scrypt() {    
    Sl(9);
  
    Hpc(S8)
    stackitem pass = (stackitem) S8;
  
    stackitem pass_len = (stackitem) S7;
  
    Hpc(S6)
    stackitem salt = (stackitem) S6;
  
    stackitem salt_len = (stackitem) S5;
  
    stackitem cost = (stackitem) S4;
  
    stackitem block_size = (stackitem) S3;
  
    stackitem parallelism = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  wally_scrypt((unsigned char *) pass, (int) pass_len, (unsigned char *) salt, (int) salt_len, (unsigned int) cost, (unsigned int) block_size, (unsigned int) parallelism, (unsigned char *) bytes_out, (int) len);
    Npop(9);
    Push = (stackitem)result;    
}

void _wrap_wally_aes() {    
    Sl(7);
  
    Hpc(S6)
    stackitem key = (stackitem) S6;
  
    stackitem key_len = (stackitem) S5;
  
    Hpc(S4)
    stackitem bytes = (stackitem) S4;
  
    stackitem bytes_len = (stackitem) S3;
  
    stackitem flags = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  wally_aes((unsigned char *) key, (int) key_len, (unsigned char *) bytes, (int) bytes_len, (unsigned int) flags, (unsigned char *) bytes_out, (int) len);
    Npop(7);
    Push = (stackitem)result;    
}

void _wrap_wally_aes_cbc() {    
    Sl(10);
  
    Hpc(S9)
    stackitem key = (stackitem) S9;
  
    stackitem key_len = (stackitem) S8;
  
    Hpc(S7)
    stackitem iv = (stackitem) S7;
  
    stackitem iv_len = (stackitem) S6;
  
    Hpc(S5)
    stackitem bytes = (stackitem) S5;
  
    stackitem bytes_len = (stackitem) S4;
  
    stackitem flags = (stackitem) S3;
  
    Hpc(S2)
    stackitem bytes_out = (stackitem) S2;
  
    stackitem len = (stackitem) S1;
  
    Hpc(S0)
    stackitem written = (stackitem) S0;
  
    int result =  wally_aes_cbc((unsigned char *) key, (int) key_len, (unsigned char *) iv, (int) iv_len, (unsigned char *) bytes, (int) bytes_len, (unsigned int) flags, (unsigned char *) bytes_out, (int) len, (int *) written);
    Npop(10);
    Push = (stackitem)result;    
}

void _wrap_wally_sha256() {    
    Sl(4);
  
    Hpc(S3)
    stackitem bytes = (stackitem) S3;
  
    stackitem bytes_len = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  wally_sha256((unsigned char *) bytes, (int) bytes_len, (unsigned char *) bytes_out, (int) len);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_wally_sha256_midstate() {    
    Sl(4);
  
    Hpc(S3)
    stackitem bytes = (stackitem) S3;
  
    stackitem bytes_len = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  wally_sha256_midstate((unsigned char *) bytes, (int) bytes_len, (unsigned char *) bytes_out, (int) len);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_wally_sha256d() {    
    Sl(4);
  
    Hpc(S3)
    stackitem bytes = (stackitem) S3;
  
    stackitem bytes_len = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  wally_sha256d((unsigned char *) bytes, (int) bytes_len, (unsigned char *) bytes_out, (int) len);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_wally_sha512() {    
    Sl(4);
  
    Hpc(S3)
    stackitem bytes = (stackitem) S3;
  
    stackitem bytes_len = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  wally_sha512((unsigned char *) bytes, (int) bytes_len, (unsigned char *) bytes_out, (int) len);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_wally_hash160() {    
    Sl(4);
  
    Hpc(S3)
    stackitem bytes = (stackitem) S3;
  
    stackitem bytes_len = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  wally_hash160((unsigned char *) bytes, (int) bytes_len, (unsigned char *) bytes_out, (int) len);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_wally_hmac_sha256() {    
    Sl(6);
  
    Hpc(S5)
    stackitem key = (stackitem) S5;
  
    stackitem key_len = (stackitem) S4;
  
    Hpc(S3)
    stackitem bytes = (stackitem) S3;
  
    stackitem bytes_len = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  wally_hmac_sha256((unsigned char *) key, (int) key_len, (unsigned char *) bytes, (int) bytes_len, (unsigned char *) bytes_out, (int) len);
    Npop(6);
    Push = (stackitem)result;    
}

void _wrap_wally_hmac_sha512() {    
    Sl(6);
  
    Hpc(S5)
    stackitem key = (stackitem) S5;
  
    stackitem key_len = (stackitem) S4;
  
    Hpc(S3)
    stackitem bytes = (stackitem) S3;
  
    stackitem bytes_len = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  wally_hmac_sha512((unsigned char *) key, (int) key_len, (unsigned char *) bytes, (int) bytes_len, (unsigned char *) bytes_out, (int) len);
    Npop(6);
    Push = (stackitem)result;    
}

void _wrap_wally_pbkdf2_hmac_sha256() {    
    Sl(8);
  
    Hpc(S7)
    stackitem pass = (stackitem) S7;
  
    stackitem pass_len = (stackitem) S6;
  
    Hpc(S5)
    stackitem salt = (stackitem) S5;
  
    stackitem salt_len = (stackitem) S4;
  
    stackitem flags = (stackitem) S3;
  
    stackitem cost = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  wally_pbkdf2_hmac_sha256((unsigned char *) pass, (int) pass_len, (unsigned char *) salt, (int) salt_len, (unsigned int) flags, (unsigned int) cost, (unsigned char *) bytes_out, (int) len);
    Npop(8);
    Push = (stackitem)result;    
}

void _wrap_wally_pbkdf2_hmac_sha512() {    
    Sl(8);
  
    Hpc(S7)
    stackitem pass = (stackitem) S7;
  
    stackitem pass_len = (stackitem) S6;
  
    Hpc(S5)
    stackitem salt = (stackitem) S5;
  
    stackitem salt_len = (stackitem) S4;
  
    stackitem flags = (stackitem) S3;
  
    stackitem cost = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  wally_pbkdf2_hmac_sha512((unsigned char *) pass, (int) pass_len, (unsigned char *) salt, (int) salt_len, (unsigned int) flags, (unsigned int) cost, (unsigned char *) bytes_out, (int) len);
    Npop(8);
    Push = (stackitem)result;    
}

void _wrap_wally_ec_private_key_verify() {    
    Sl(2);
  
    Hpc(S1)
    stackitem priv_key = (stackitem) S1;
  
    stackitem priv_key_len = (stackitem) S0;
  
    int result =  wally_ec_private_key_verify((unsigned char *) priv_key, (int) priv_key_len);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_wally_ec_public_key_verify() {    
    Sl(2);
  
    Hpc(S1)
    stackitem pub_key = (stackitem) S1;
  
    stackitem pub_key_len = (stackitem) S0;
  
    int result =  wally_ec_public_key_verify((unsigned char *) pub_key, (int) pub_key_len);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_wally_ec_public_key_from_private_key() {    
    Sl(4);
  
    Hpc(S3)
    stackitem priv_key = (stackitem) S3;
  
    stackitem priv_key_len = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  wally_ec_public_key_from_private_key((unsigned char *) priv_key, (int) priv_key_len, (unsigned char *) bytes_out, (int) len);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_wally_ec_public_key_decompress() {    
    Sl(4);
  
    Hpc(S3)
    stackitem pub_key = (stackitem) S3;
  
    stackitem pub_key_len = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  wally_ec_public_key_decompress((unsigned char *) pub_key, (int) pub_key_len, (unsigned char *) bytes_out, (int) len);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_wally_ec_public_key_negate() {    
    Sl(4);
  
    Hpc(S3)
    stackitem pub_key = (stackitem) S3;
  
    stackitem pub_key_len = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  wally_ec_public_key_negate((unsigned char *) pub_key, (int) pub_key_len, (unsigned char *) bytes_out, (int) len);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_wally_ec_sig_from_bytes() {    
    Sl(7);
  
    Hpc(S6)
    stackitem priv_key = (stackitem) S6;
  
    stackitem priv_key_len = (stackitem) S5;
  
    Hpc(S4)
    stackitem bytes = (stackitem) S4;
  
    stackitem bytes_len = (stackitem) S3;
  
    stackitem flags = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  wally_ec_sig_from_bytes((unsigned char *) priv_key, (int) priv_key_len, (unsigned char *) bytes, (int) bytes_len, (unsigned int) flags, (unsigned char *) bytes_out, (int) len);
    Npop(7);
    Push = (stackitem)result;    
}

void _wrap_wally_ec_sig_normalize() {    
    Sl(4);
  
    Hpc(S3)
    stackitem sig = (stackitem) S3;
  
    stackitem sig_len = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  wally_ec_sig_normalize((unsigned char *) sig, (int) sig_len, (unsigned char *) bytes_out, (int) len);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_wally_ec_sig_to_der() {    
    Sl(5);
  
    Hpc(S4)
    stackitem sig = (stackitem) S4;
  
    stackitem sig_len = (stackitem) S3;
  
    Hpc(S2)
    stackitem bytes_out = (stackitem) S2;
  
    stackitem len = (stackitem) S1;
  
    Hpc(S0)
    stackitem written = (stackitem) S0;
  
    int result =  wally_ec_sig_to_der((unsigned char *) sig, (int) sig_len, (unsigned char *) bytes_out, (int) len, (int *) written);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_wally_ec_sig_from_der() {    
    Sl(4);
  
    Hpc(S3)
    stackitem bytes = (stackitem) S3;
  
    stackitem bytes_len = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  wally_ec_sig_from_der((unsigned char *) bytes, (int) bytes_len, (unsigned char *) bytes_out, (int) len);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_wally_ec_sig_verify() {    
    Sl(7);
  
    Hpc(S6)
    stackitem pub_key = (stackitem) S6;
  
    stackitem pub_key_len = (stackitem) S5;
  
    Hpc(S4)
    stackitem bytes = (stackitem) S4;
  
    stackitem bytes_len = (stackitem) S3;
  
    stackitem flags = (stackitem) S2;
  
    Hpc(S1)
    stackitem sig = (stackitem) S1;
  
    stackitem sig_len = (stackitem) S0;
  
    int result =  wally_ec_sig_verify((unsigned char *) pub_key, (int) pub_key_len, (unsigned char *) bytes, (int) bytes_len, (unsigned int) flags, (unsigned char *) sig, (int) sig_len);
    Npop(7);
    Push = (stackitem)result;    
}

void _wrap_wally_ec_sig_to_public_key() {    
    Sl(6);
  
    Hpc(S5)
    stackitem bytes = (stackitem) S5;
  
    stackitem bytes_len = (stackitem) S4;
  
    Hpc(S3)
    stackitem sig = (stackitem) S3;
  
    stackitem sig_len = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  wally_ec_sig_to_public_key((unsigned char *) bytes, (int) bytes_len, (unsigned char *) sig, (int) sig_len, (unsigned char *) bytes_out, (int) len);
    Npop(6);
    Push = (stackitem)result;    
}

void _wrap_wally_format_bitcoin_message() {    
    Sl(6);
  
    Hpc(S5)
    stackitem bytes = (stackitem) S5;
  
    stackitem bytes_len = (stackitem) S4;
  
    stackitem flags = (stackitem) S3;
  
    Hpc(S2)
    stackitem bytes_out = (stackitem) S2;
  
    stackitem len = (stackitem) S1;
  
    Hpc(S0)
    stackitem written = (stackitem) S0;
  
    int result =  wally_format_bitcoin_message((unsigned char *) bytes, (int) bytes_len, (unsigned int) flags, (unsigned char *) bytes_out, (int) len, (int *) written);
    Npop(6);
    Push = (stackitem)result;    
}

void _wrap_wally_ecdh() {    
    Sl(6);
  
    Hpc(S5)
    stackitem pub_key = (stackitem) S5;
  
    stackitem pub_key_len = (stackitem) S4;
  
    Hpc(S3)
    stackitem bytes = (stackitem) S3;
  
    stackitem bytes_len = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  wally_ecdh((unsigned char *) pub_key, (int) pub_key_len, (unsigned char *) bytes, (int) bytes_len, (unsigned char *) bytes_out, (int) len);
    Npop(6);
    Push = (stackitem)result;    
}



struct primfcn wally_crypto_fcns[] = {
    {"0WALLY_SCRYPT", _wrap_wally_scrypt},
    {"0WALLY_AES", _wrap_wally_aes},
    {"0WALLY_AES_CBC", _wrap_wally_aes_cbc},
    {"0WALLY_SHA256", _wrap_wally_sha256},
    {"0WALLY_SHA256_MIDSTATE", _wrap_wally_sha256_midstate},
    {"0WALLY_SHA256D", _wrap_wally_sha256d},
    {"0WALLY_SHA512", _wrap_wally_sha512},
    {"0WALLY_HASH160", _wrap_wally_hash160},
    {"0WALLY_HMAC_SHA256", _wrap_wally_hmac_sha256},
    {"0WALLY_HMAC_SHA512", _wrap_wally_hmac_sha512},
    {"0WALLY_PBKDF2_HMAC_SHA256", _wrap_wally_pbkdf2_hmac_sha256},
    {"0WALLY_PBKDF2_HMAC_SHA512", _wrap_wally_pbkdf2_hmac_sha512},
    {"0WALLY_EC_PRIVATE_KEY_VERIFY", _wrap_wally_ec_private_key_verify},
    {"0WALLY_EC_PUBLIC_KEY_VERIFY", _wrap_wally_ec_public_key_verify},
    {"0WALLY_EC_PUBLIC_KEY_FROM_PRIVATE_KEY", _wrap_wally_ec_public_key_from_private_key},
    {"0WALLY_EC_PUBLIC_KEY_DECOMPRESS", _wrap_wally_ec_public_key_decompress},
    {"0WALLY_EC_PUBLIC_KEY_NEGATE", _wrap_wally_ec_public_key_negate},
    {"0WALLY_EC_SIG_FROM_BYTES", _wrap_wally_ec_sig_from_bytes},
    {"0WALLY_EC_SIG_NORMALIZE", _wrap_wally_ec_sig_normalize},
    {"0WALLY_EC_SIG_TO_DER", _wrap_wally_ec_sig_to_der},
    {"0WALLY_EC_SIG_FROM_DER", _wrap_wally_ec_sig_from_der},
    {"0WALLY_EC_SIG_VERIFY", _wrap_wally_ec_sig_verify},
    {"0WALLY_EC_SIG_TO_PUBLIC_KEY", _wrap_wally_ec_sig_to_public_key},
    {"0WALLY_FORMAT_BITCOIN_MESSAGE", _wrap_wally_format_bitcoin_message},
    {"0WALLY_ECDH", _wrap_wally_ecdh},
{NULL, (codeptr)0}};

