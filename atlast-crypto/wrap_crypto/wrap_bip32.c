
#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "common_wrapper.h"
#include "wrap_bip32.h"
#include "../../crypto/bip32.h"


void _wrap_hdnode_from_xpub() {    
    Sl(6);
  
    uint32_t depth = (uint32_t) S5;
  
    uint32_t child_num = (uint32_t) S4;
  
    Hpc(S3)
    uint8_t * chain_code = (uint8_t *) S3;
  
    Hpc(S2)
    uint8_t * public_key = (uint8_t *) S2;
  
    Hpc(S1)
    char * curve = (char *) S1;
  
    Hpc(S0)
    HDNode * out = (HDNode *) S0;
  
    int result =  hdnode_from_xpub((uint32_t) depth, (uint32_t) child_num, (uint8_t *) chain_code, (uint8_t *) public_key, (char *) curve, (HDNode *) out);
    Npop(6);
    Push = (stackitem)result;    
}

void _wrap_hdnode_from_xprv() {    
    Sl(6);
  
    uint32_t depth = (uint32_t) S5;
  
    uint32_t child_num = (uint32_t) S4;
  
    Hpc(S3)
    uint8_t * chain_code = (uint8_t *) S3;
  
    Hpc(S2)
    uint8_t * private_key = (uint8_t *) S2;
  
    Hpc(S1)
    char * curve = (char *) S1;
  
    Hpc(S0)
    HDNode * out = (HDNode *) S0;
  
    int result =  hdnode_from_xprv((uint32_t) depth, (uint32_t) child_num, (uint8_t *) chain_code, (uint8_t *) private_key, (char *) curve, (HDNode *) out);
    Npop(6);
    Push = (stackitem)result;    
}

void _wrap_hdnode_from_seed() {    
    Sl(4);
  
    Hpc(S3)
    uint8_t * seed = (uint8_t *) S3;
  
    int seed_len = (int) S2;
  
    Hpc(S1)
    char * curve = (char *) S1;
  
    Hpc(S0)
    HDNode * out = (HDNode *) S0;
  
    int result =  hdnode_from_seed((uint8_t *) seed, (int) seed_len, (char *) curve, (HDNode *) out);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_hdnode_private_ckd() {    
    Sl(2);
  
    Hpc(S1)
    HDNode * inout = (HDNode *) S1;
  
    uint32_t i = (uint32_t) S0;
  
    int result =  hdnode_private_ckd((HDNode *) inout, (uint32_t) i);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_hdnode_public_ckd_cp() {    
    Sl(6);
  
    Hpc(S5)
    ecdsa_curve * curve = (ecdsa_curve *) S5;
  
    Hpc(S4)
    curve_point * parent = (curve_point *) S4;
  
    Hpc(S3)
    uint8_t * parent_chain_code = (uint8_t *) S3;
  
    uint32_t i = (uint32_t) S2;
  
    Hpc(S1)
    curve_point * child = (curve_point *) S1;
  
    Hpc(S0)
    uint8_t * child_chain_code = (uint8_t *) S0;
  
    int result =  hdnode_public_ckd_cp((ecdsa_curve *) curve, (curve_point *) parent, (uint8_t *) parent_chain_code, (uint32_t) i, (curve_point *) child, (uint8_t *) child_chain_code);
    Npop(6);
    Push = (stackitem)result;    
}

void _wrap_hdnode_public_ckd() {    
    Sl(2);
  
    Hpc(S1)
    HDNode * inout = (HDNode *) S1;
  
    uint32_t i = (uint32_t) S0;
  
    int result =  hdnode_public_ckd((HDNode *) inout, (uint32_t) i);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_hdnode_public_ckd_address_optimized() {    
    Sl(9);
  
    Hpc(S8)
    curve_point * pub = (curve_point *) S8;
  
    Hpc(S7)
    uint8_t * chain_code = (uint8_t *) S7;
  
    uint32_t i = (uint32_t) S6;
  
    uint32_t version = (uint32_t) S5;
  
    HasherType hasher_pubkey = (HasherType) S4;
  
    HasherType hasher_base58 = (HasherType) S3;
  
    Hpc(S2)
    char * addr = (char *) S2;
  
    int addrsize = (int) S1;
  
    int addrformat = (int) S0;
  
     hdnode_public_ckd_address_optimized((curve_point *) pub, (uint8_t *) chain_code, (uint32_t) i, (uint32_t) version, (HasherType) hasher_pubkey, (HasherType) hasher_base58, (char *) addr, (int) addrsize, (int) addrformat);
    Npop(9);
}

void _wrap_hdnode_private_ckd_cached() {    
    Sl(4);
  
    Hpc(S3)
    HDNode * inout = (HDNode *) S3;
  
    Hpc(S2)
    uint32_t * i = (uint32_t *) S2;
  
    int i_count = (int) S1;
  
    Hpc(S0)
    uint32_t * fingerprint = (uint32_t *) S0;
  
    int result =  hdnode_private_ckd_cached((HDNode *) inout, (uint32_t *) i, (int) i_count, (uint32_t *) fingerprint);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_hdnode_fingerprint() {    
    Sl(1);
  
    Hpc(S0)
    HDNode * node = (HDNode *) S0;
  
    uint32_t result =  hdnode_fingerprint((HDNode *) node);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_hdnode_fill_public_key() {    
    Sl(1);
  
    Hpc(S0)
    HDNode * node = (HDNode *) S0;
  
     hdnode_fill_public_key((HDNode *) node);
    Npop(1);
}

void _wrap_hdnode_sign() {    
    Sl(7);
  
    Hpc(S6)
    HDNode * node = (HDNode *) S6;
  
    Hpc(S5)
    uint8_t * msg = (uint8_t *) S5;
  
    uint32_t msg_len = (uint32_t) S4;
  
    HasherType hasher_sign = (HasherType) S3;
  
    Hpc(S2)
    uint8_t * sig = (uint8_t *) S2;
  
    Hpc(S1)
    uint8_t * pby = (uint8_t *) S1;
  
    Hpc(S0)
    int (* is_canonical) (uint8_t, uint8_t *) = (int (*)(uint8_t, uint8_t *)) S0;
  
    int result =  hdnode_sign((HDNode *) node, (uint8_t *) msg, (uint32_t) msg_len, (HasherType) hasher_sign, (uint8_t *) sig, (uint8_t *) pby, (int (*)(uint8_t, uint8_t *)) is_canonical);
    Npop(7);
    Push = (stackitem)result;    
}

void _wrap_hdnode_sign_digest() {    
    Sl(5);
  
    Hpc(S4)
    HDNode * node = (HDNode *) S4;
  
    Hpc(S3)
    uint8_t * digest = (uint8_t *) S3;
  
    Hpc(S2)
    uint8_t * sig = (uint8_t *) S2;
  
    Hpc(S1)
    uint8_t * pby = (uint8_t *) S1;
  
    Hpc(S0)
    int (* is_canonical) (uint8_t, uint8_t *) = (int (*)(uint8_t, uint8_t *)) S0;
  
    int result =  hdnode_sign_digest((HDNode *) node, (uint8_t *) digest, (uint8_t *) sig, (uint8_t *) pby, (int (*)(uint8_t, uint8_t *)) is_canonical);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_hdnode_get_shared_key() {    
    Sl(4);
  
    Hpc(S3)
    HDNode * node = (HDNode *) S3;
  
    Hpc(S2)
    uint8_t * peer_public_key = (uint8_t *) S2;
  
    Hpc(S1)
    uint8_t * session_key = (uint8_t *) S1;
  
    Hpc(S0)
    int * result_size = (int *) S0;
  
    int result =  hdnode_get_shared_key((HDNode *) node, (uint8_t *) peer_public_key, (uint8_t *) session_key, (int *) result_size);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_hdnode_serialize_public() {    
    Sl(5);
  
    Hpc(S4)
    HDNode * node = (HDNode *) S4;
  
    uint32_t fingerprint = (uint32_t) S3;
  
    uint32_t version = (uint32_t) S2;
  
    Hpc(S1)
    char * str = (char *) S1;
  
    int strsize = (int) S0;
  
    int result =  hdnode_serialize_public((HDNode *) node, (uint32_t) fingerprint, (uint32_t) version, (char *) str, (int) strsize);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_hdnode_serialize_private() {    
    Sl(5);
  
    Hpc(S4)
    HDNode * node = (HDNode *) S4;
  
    uint32_t fingerprint = (uint32_t) S3;
  
    uint32_t version = (uint32_t) S2;
  
    Hpc(S1)
    char * str = (char *) S1;
  
    int strsize = (int) S0;
  
    int result =  hdnode_serialize_private((HDNode *) node, (uint32_t) fingerprint, (uint32_t) version, (char *) str, (int) strsize);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_hdnode_deserialize_public() {    
    Sl(5);
  
    Hpc(S4)
    char * str = (char *) S4;
  
    uint32_t version = (uint32_t) S3;
  
    Hpc(S2)
    char * curve = (char *) S2;
  
    Hpc(S1)
    HDNode * node = (HDNode *) S1;
  
    Hpc(S0)
    uint32_t * fingerprint = (uint32_t *) S0;
  
    int result =  hdnode_deserialize_public((char *) str, (uint32_t) version, (char *) curve, (HDNode *) node, (uint32_t *) fingerprint);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_hdnode_deserialize_private() {    
    Sl(5);
  
    Hpc(S4)
    char * str = (char *) S4;
  
    uint32_t version = (uint32_t) S3;
  
    Hpc(S2)
    char * curve = (char *) S2;
  
    Hpc(S1)
    HDNode * node = (HDNode *) S1;
  
    Hpc(S0)
    uint32_t * fingerprint = (uint32_t *) S0;
  
    int result =  hdnode_deserialize_private((char *) str, (uint32_t) version, (char *) curve, (HDNode *) node, (uint32_t *) fingerprint);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_hdnode_get_address_raw() {    
    Sl(3);
  
    Hpc(S2)
    HDNode * node = (HDNode *) S2;
  
    uint32_t version = (uint32_t) S1;
  
    Hpc(S0)
    uint8_t * addr_raw = (uint8_t *) S0;
  
     hdnode_get_address_raw((HDNode *) node, (uint32_t) version, (uint8_t *) addr_raw);
    Npop(3);
}

void _wrap_hdnode_get_address() {    
    Sl(4);
  
    Hpc(S3)
    HDNode * node = (HDNode *) S3;
  
    uint32_t version = (uint32_t) S2;
  
    Hpc(S1)
    char * addr = (char *) S1;
  
    int addrsize = (int) S0;
  
     hdnode_get_address((HDNode *) node, (uint32_t) version, (char *) addr, (int) addrsize);
    Npop(4);
}

void _wrap_get_curve_by_name() {    
    Sl(1);
  
    Hpc(S0)
    char * curve_name = (char *) S0;
  
    const curve_info * result =  get_curve_by_name((char *) curve_name);
    Npop(1);
    Push = (stackitem)result;    
}



struct primfcn bip32_fcns[] = {
    {"0HDNODE_FROM_XPUB", _wrap_hdnode_from_xpub},
    {"0HDNODE_FROM_XPRV", _wrap_hdnode_from_xprv},
    {"0HDNODE_FROM_SEED", _wrap_hdnode_from_seed},
    {"0HDNODE_PRIVATE_CKD", _wrap_hdnode_private_ckd},
    {"0HDNODE_PUBLIC_CKD_CP", _wrap_hdnode_public_ckd_cp},
    {"0HDNODE_PUBLIC_CKD", _wrap_hdnode_public_ckd},
    {"0HDNODE_PUBLIC_CKD_ADDRESS_OPTIMIZED", _wrap_hdnode_public_ckd_address_optimized},
    {"0HDNODE_PRIVATE_CKD_CACHED", _wrap_hdnode_private_ckd_cached},
    {"0HDNODE_FINGERPRINT", _wrap_hdnode_fingerprint},
    {"0HDNODE_FILL_PUBLIC_KEY", _wrap_hdnode_fill_public_key},
    {"0HDNODE_SIGN", _wrap_hdnode_sign},
    {"0HDNODE_SIGN_DIGEST", _wrap_hdnode_sign_digest},
    {"0HDNODE_GET_SHARED_KEY", _wrap_hdnode_get_shared_key},
    {"0HDNODE_SERIALIZE_PUBLIC", _wrap_hdnode_serialize_public},
    {"0HDNODE_SERIALIZE_PRIVATE", _wrap_hdnode_serialize_private},
    {"0HDNODE_DESERIALIZE_PUBLIC", _wrap_hdnode_deserialize_public},
    {"0HDNODE_DESERIALIZE_PRIVATE", _wrap_hdnode_deserialize_private},
    {"0HDNODE_GET_ADDRESS_RAW", _wrap_hdnode_get_address_raw},
    {"0HDNODE_GET_ADDRESS", _wrap_hdnode_get_address},
    {"0GET_CURVE_BY_NAME", _wrap_get_curve_by_name},
{NULL, (codeptr)0}};

