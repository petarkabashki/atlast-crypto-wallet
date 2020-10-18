
#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "common_wrapper.h"
#include "wrap_ecdsa.h"
#include "../../crypto/ecdsa.h"


void _wrap_point_copy() {    
    Sl(2);
  
    Hpc(S1)
    stackitem cp1 = (stackitem) S1;
  
    Hpc(S0)
    stackitem cp2 = (stackitem) S0;
  
     point_copy((curve_point *) cp1, (curve_point *) cp2);
    Npop(2);
}

void _wrap_point_add() {    
    Sl(3);
  
    Hpc(S2)
    stackitem curve = (stackitem) S2;
  
    Hpc(S1)
    stackitem cp1 = (stackitem) S1;
  
    Hpc(S0)
    stackitem cp2 = (stackitem) S0;
  
     point_add((ecdsa_curve *) curve, (curve_point *) cp1, (curve_point *) cp2);
    Npop(3);
}

void _wrap_point_double() {    
    Sl(2);
  
    Hpc(S1)
    stackitem curve = (stackitem) S1;
  
    Hpc(S0)
    stackitem cp = (stackitem) S0;
  
     point_double((ecdsa_curve *) curve, (curve_point *) cp);
    Npop(2);
}

void _wrap_point_multiply() {    
    Sl(4);
  
    Hpc(S3)
    stackitem curve = (stackitem) S3;
  
    Hpc(S2)
    stackitem k = (stackitem) S2;
  
    Hpc(S1)
    stackitem p = (stackitem) S1;
  
    Hpc(S0)
    stackitem res = (stackitem) S0;
  
     point_multiply((ecdsa_curve *) curve, (bignum256 *) k, (curve_point *) p, (curve_point *) res);
    Npop(4);
}

void _wrap_point_set_infinity() {    
    Sl(1);
  
    Hpc(S0)
    stackitem p = (stackitem) S0;
  
     point_set_infinity((curve_point *) p);
    Npop(1);
}

void _wrap_point_is_infinity() {    
    Sl(1);
  
    Hpc(S0)
    stackitem p = (stackitem) S0;
  
    int result =  point_is_infinity((curve_point *) p);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_point_is_equal() {    
    Sl(2);
  
    Hpc(S1)
    stackitem p = (stackitem) S1;
  
    Hpc(S0)
    stackitem q = (stackitem) S0;
  
    int result =  point_is_equal((curve_point *) p, (curve_point *) q);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_point_is_negative_of() {    
    Sl(2);
  
    Hpc(S1)
    stackitem p = (stackitem) S1;
  
    Hpc(S0)
    stackitem q = (stackitem) S0;
  
    int result =  point_is_negative_of((curve_point *) p, (curve_point *) q);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_scalar_multiply() {    
    Sl(3);
  
    Hpc(S2)
    stackitem curve = (stackitem) S2;
  
    Hpc(S1)
    stackitem k = (stackitem) S1;
  
    Hpc(S0)
    stackitem res = (stackitem) S0;
  
     scalar_multiply((ecdsa_curve *) curve, (bignum256 *) k, (curve_point *) res);
    Npop(3);
}

void _wrap_ecdh_multiply() {    
    Sl(4);
  
    Hpc(S3)
    stackitem curve = (stackitem) S3;
  
    Hpc(S2)
    stackitem priv_key = (stackitem) S2;
  
    Hpc(S1)
    stackitem pub_key = (stackitem) S1;
  
    Hpc(S0)
    stackitem session_key = (stackitem) S0;
  
    int result =  ecdh_multiply((ecdsa_curve *) curve, (unsigned char *) priv_key, (unsigned char *) pub_key, (unsigned char *) session_key);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_compress_coords() {    
    Sl(2);
  
    Hpc(S1)
    stackitem cp = (stackitem) S1;
  
    Hpc(S0)
    stackitem compressed = (stackitem) S0;
  
     compress_coords((curve_point *) cp, (unsigned char *) compressed);
    Npop(2);
}

void _wrap_uncompress_coords() {    
    Sl(4);
  
    Hpc(S3)
    stackitem curve = (stackitem) S3;
  
    stackitem odd = (stackitem) S2;
  
    Hpc(S1)
    stackitem x = (stackitem) S1;
  
    Hpc(S0)
    stackitem y = (stackitem) S0;
  
     uncompress_coords((ecdsa_curve *) curve, (unsigned char) odd, (bignum256 *) x, (bignum256 *) y);
    Npop(4);
}

void _wrap_ecdsa_uncompress_pubkey() {    
    Sl(3);
  
    Hpc(S2)
    stackitem curve = (stackitem) S2;
  
    Hpc(S1)
    stackitem pub_key = (stackitem) S1;
  
    Hpc(S0)
    stackitem uncompressed = (stackitem) S0;
  
    int result =  ecdsa_uncompress_pubkey((ecdsa_curve *) curve, (unsigned char *) pub_key, (unsigned char *) uncompressed);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_ecdsa_sign() {    
    Sl(8);
  
    Hpc(S7)
    stackitem curve = (stackitem) S7;
  
    stackitem hasher_sign = (stackitem) S6;
  
    Hpc(S5)
    stackitem priv_key = (stackitem) S5;
  
    Hpc(S4)
    stackitem msg = (stackitem) S4;
  
    stackitem msg_len = (stackitem) S3;
  
    Hpc(S2)
    stackitem sig = (stackitem) S2;
  
    Hpc(S1)
    stackitem pby = (stackitem) S1;
  
    Hpc(S0)
    stackitem is_canonical = (stackitem) S0;
  
    int result =  ecdsa_sign((ecdsa_curve *) curve, (HasherType) hasher_sign, (unsigned char *) priv_key, (unsigned char *) msg, (unsigned int) msg_len, (unsigned char *) sig, (unsigned char *) pby, (int (*)(unsigned char, unsigned char *)) is_canonical);
    Npop(8);
    Push = (stackitem)result;    
}

void _wrap_ecdsa_sign_digest() {    
    Sl(6);
  
    Hpc(S5)
    stackitem curve = (stackitem) S5;
  
    Hpc(S4)
    stackitem priv_key = (stackitem) S4;
  
    Hpc(S3)
    stackitem digest = (stackitem) S3;
  
    Hpc(S2)
    stackitem sig = (stackitem) S2;
  
    Hpc(S1)
    stackitem pby = (stackitem) S1;
  
    Hpc(S0)
    stackitem is_canonical = (stackitem) S0;
  
    int result =  ecdsa_sign_digest((ecdsa_curve *) curve, (unsigned char *) priv_key, (unsigned char *) digest, (unsigned char *) sig, (unsigned char *) pby, (int (*)(unsigned char, unsigned char *)) is_canonical);
    Npop(6);
    Push = (stackitem)result;    
}

void _wrap_ecdsa_get_public_key33() {    
    Sl(3);
  
    Hpc(S2)
    stackitem curve = (stackitem) S2;
  
    Hpc(S1)
    stackitem priv_key = (stackitem) S1;
  
    Hpc(S0)
    stackitem pub_key = (stackitem) S0;
  
     ecdsa_get_public_key33((ecdsa_curve *) curve, (unsigned char *) priv_key, (unsigned char *) pub_key);
    Npop(3);
}

void _wrap_ecdsa_get_public_key65() {    
    Sl(3);
  
    Hpc(S2)
    stackitem curve = (stackitem) S2;
  
    Hpc(S1)
    stackitem priv_key = (stackitem) S1;
  
    Hpc(S0)
    stackitem pub_key = (stackitem) S0;
  
     ecdsa_get_public_key65((ecdsa_curve *) curve, (unsigned char *) priv_key, (unsigned char *) pub_key);
    Npop(3);
}

void _wrap_ecdsa_get_pubkeyhash() {    
    Sl(3);
  
    Hpc(S2)
    stackitem pub_key = (stackitem) S2;
  
    stackitem hasher_pubkey = (stackitem) S1;
  
    Hpc(S0)
    stackitem pubkeyhash = (stackitem) S0;
  
     ecdsa_get_pubkeyhash((unsigned char *) pub_key, (HasherType) hasher_pubkey, (unsigned char *) pubkeyhash);
    Npop(3);
}

void _wrap_ecdsa_get_address_raw() {    
    Sl(4);
  
    Hpc(S3)
    stackitem pub_key = (stackitem) S3;
  
    stackitem version = (stackitem) S2;
  
    stackitem hasher_pubkey = (stackitem) S1;
  
    Hpc(S0)
    stackitem addr_raw = (stackitem) S0;
  
     ecdsa_get_address_raw((unsigned char *) pub_key, (unsigned int) version, (HasherType) hasher_pubkey, (unsigned char *) addr_raw);
    Npop(4);
}

void _wrap_ecdsa_get_address() {    
    Sl(6);
  
    Hpc(S5)
    stackitem pub_key = (stackitem) S5;
  
    stackitem version = (stackitem) S4;
  
    stackitem hasher_pubkey = (stackitem) S3;
  
    stackitem hasher_base58 = (stackitem) S2;
  
    Hpc(S1)
    stackitem addr = (stackitem) S1;
  
    stackitem addrsize = (stackitem) S0;
  
     ecdsa_get_address((unsigned char *) pub_key, (unsigned int) version, (HasherType) hasher_pubkey, (HasherType) hasher_base58, (char *) addr, (int) addrsize);
    Npop(6);
}

void _wrap_ecdsa_get_address_segwit_p2sh_raw() {    
    Sl(4);
  
    Hpc(S3)
    stackitem pub_key = (stackitem) S3;
  
    stackitem version = (stackitem) S2;
  
    stackitem hasher_pubkey = (stackitem) S1;
  
    Hpc(S0)
    stackitem addr_raw = (stackitem) S0;
  
     ecdsa_get_address_segwit_p2sh_raw((unsigned char *) pub_key, (unsigned int) version, (HasherType) hasher_pubkey, (unsigned char *) addr_raw);
    Npop(4);
}

void _wrap_ecdsa_get_address_segwit_p2sh() {    
    Sl(6);
  
    Hpc(S5)
    stackitem pub_key = (stackitem) S5;
  
    stackitem version = (stackitem) S4;
  
    stackitem hasher_pubkey = (stackitem) S3;
  
    stackitem hasher_base58 = (stackitem) S2;
  
    Hpc(S1)
    stackitem addr = (stackitem) S1;
  
    stackitem addrsize = (stackitem) S0;
  
     ecdsa_get_address_segwit_p2sh((unsigned char *) pub_key, (unsigned int) version, (HasherType) hasher_pubkey, (HasherType) hasher_base58, (char *) addr, (int) addrsize);
    Npop(6);
}

void _wrap_ecdsa_get_wif() {    
    Sl(5);
  
    Hpc(S4)
    stackitem priv_key = (stackitem) S4;
  
    stackitem version = (stackitem) S3;
  
    stackitem hasher_base58 = (stackitem) S2;
  
    Hpc(S1)
    stackitem wif = (stackitem) S1;
  
    stackitem wifsize = (stackitem) S0;
  
     ecdsa_get_wif((unsigned char *) priv_key, (unsigned int) version, (HasherType) hasher_base58, (char *) wif, (int) wifsize);
    Npop(5);
}

void _wrap_ecdsa_address_decode() {    
    Sl(4);
  
    Hpc(S3)
    stackitem addr = (stackitem) S3;
  
    stackitem version = (stackitem) S2;
  
    stackitem hasher_base58 = (stackitem) S1;
  
    Hpc(S0)
    stackitem out = (stackitem) S0;
  
    int result =  ecdsa_address_decode((char *) addr, (unsigned int) version, (HasherType) hasher_base58, (unsigned char *) out);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_ecdsa_read_pubkey() {    
    Sl(3);
  
    Hpc(S2)
    stackitem curve = (stackitem) S2;
  
    Hpc(S1)
    stackitem pub_key = (stackitem) S1;
  
    Hpc(S0)
    stackitem pub = (stackitem) S0;
  
    int result =  ecdsa_read_pubkey((ecdsa_curve *) curve, (unsigned char *) pub_key, (curve_point *) pub);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_ecdsa_validate_pubkey() {    
    Sl(2);
  
    Hpc(S1)
    stackitem curve = (stackitem) S1;
  
    Hpc(S0)
    stackitem pub = (stackitem) S0;
  
    int result =  ecdsa_validate_pubkey((ecdsa_curve *) curve, (curve_point *) pub);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_ecdsa_verify() {    
    Sl(6);
  
    Hpc(S5)
    stackitem curve = (stackitem) S5;
  
    stackitem hasher_sign = (stackitem) S4;
  
    Hpc(S3)
    stackitem pub_key = (stackitem) S3;
  
    Hpc(S2)
    stackitem sig = (stackitem) S2;
  
    Hpc(S1)
    stackitem msg = (stackitem) S1;
  
    stackitem msg_len = (stackitem) S0;
  
    int result =  ecdsa_verify((ecdsa_curve *) curve, (HasherType) hasher_sign, (unsigned char *) pub_key, (unsigned char *) sig, (unsigned char *) msg, (unsigned int) msg_len);
    Npop(6);
    Push = (stackitem)result;    
}

void _wrap_ecdsa_verify_digest() {    
    Sl(4);
  
    Hpc(S3)
    stackitem curve = (stackitem) S3;
  
    Hpc(S2)
    stackitem pub_key = (stackitem) S2;
  
    Hpc(S1)
    stackitem sig = (stackitem) S1;
  
    Hpc(S0)
    stackitem digest = (stackitem) S0;
  
    int result =  ecdsa_verify_digest((ecdsa_curve *) curve, (unsigned char *) pub_key, (unsigned char *) sig, (unsigned char *) digest);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_ecdsa_recover_pub_from_sig() {    
    Sl(5);
  
    Hpc(S4)
    stackitem curve = (stackitem) S4;
  
    Hpc(S3)
    stackitem pub_key = (stackitem) S3;
  
    Hpc(S2)
    stackitem sig = (stackitem) S2;
  
    Hpc(S1)
    stackitem digest = (stackitem) S1;
  
    stackitem recid = (stackitem) S0;
  
    int result =  ecdsa_recover_pub_from_sig((ecdsa_curve *) curve, (unsigned char *) pub_key, (unsigned char *) sig, (unsigned char *) digest, (int) recid);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_ecdsa_sig_to_der() {    
    Sl(2);
  
    Hpc(S1)
    stackitem sig = (stackitem) S1;
  
    Hpc(S0)
    stackitem der = (stackitem) S0;
  
    int result =  ecdsa_sig_to_der((unsigned char *) sig, (unsigned char *) der);
    Npop(2);
    Push = (stackitem)result;    
}



struct primfcn ecdsa_fcns[] = {
    {"0POINT_COPY", _wrap_point_copy},
    {"0POINT_ADD", _wrap_point_add},
    {"0POINT_DOUBLE", _wrap_point_double},
    {"0POINT_MULTIPLY", _wrap_point_multiply},
    {"0POINT_SET_INFINITY", _wrap_point_set_infinity},
    {"0POINT_IS_INFINITY", _wrap_point_is_infinity},
    {"0POINT_IS_EQUAL", _wrap_point_is_equal},
    {"0POINT_IS_NEGATIVE_OF", _wrap_point_is_negative_of},
    {"0SCALAR_MULTIPLY", _wrap_scalar_multiply},
    {"0ECDH_MULTIPLY", _wrap_ecdh_multiply},
    {"0COMPRESS_COORDS", _wrap_compress_coords},
    {"0UNCOMPRESS_COORDS", _wrap_uncompress_coords},
    {"0ECDSA_UNCOMPRESS_PUBKEY", _wrap_ecdsa_uncompress_pubkey},
    {"0ECDSA_SIGN", _wrap_ecdsa_sign},
    {"0ECDSA_SIGN_DIGEST", _wrap_ecdsa_sign_digest},
    {"0ECDSA_GET_PUBLIC_KEY33", _wrap_ecdsa_get_public_key33},
    {"0ECDSA_GET_PUBLIC_KEY65", _wrap_ecdsa_get_public_key65},
    {"0ECDSA_GET_PUBKEYHASH", _wrap_ecdsa_get_pubkeyhash},
    {"0ECDSA_GET_ADDRESS_RAW", _wrap_ecdsa_get_address_raw},
    {"0ECDSA_GET_ADDRESS", _wrap_ecdsa_get_address},
    {"0ECDSA_GET_ADDRESS_SEGWIT_P2SH_RAW", _wrap_ecdsa_get_address_segwit_p2sh_raw},
    {"0ECDSA_GET_ADDRESS_SEGWIT_P2SH", _wrap_ecdsa_get_address_segwit_p2sh},
    {"0ECDSA_GET_WIF", _wrap_ecdsa_get_wif},
    {"0ECDSA_ADDRESS_DECODE", _wrap_ecdsa_address_decode},
    {"0ECDSA_READ_PUBKEY", _wrap_ecdsa_read_pubkey},
    {"0ECDSA_VALIDATE_PUBKEY", _wrap_ecdsa_validate_pubkey},
    {"0ECDSA_VERIFY", _wrap_ecdsa_verify},
    {"0ECDSA_VERIFY_DIGEST", _wrap_ecdsa_verify_digest},
    {"0ECDSA_RECOVER_PUB_FROM_SIG", _wrap_ecdsa_recover_pub_from_sig},
    {"0ECDSA_SIG_TO_DER", _wrap_ecdsa_sig_to_der},
{NULL, (codeptr)0}};

