
#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


#include "wrap_secp256k1.h"
#include "secp256k1/include/secp256k1.h"


void _wrap_secp256k1_context_create() {    
    Sl(1);
  
    stackitem flags = (stackitem) S0;
  
    secp256k1_context * result =  secp256k1_context_create((unsigned int) flags);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_secp256k1_context_clone() {    
    Sl(1);
  
    Hpc(S0)
    stackitem ctx = (stackitem) S0;
  
    secp256k1_context * result =  secp256k1_context_clone((struct secp256k1_context_struct *) ctx);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_secp256k1_context_destroy() {    
    Sl(1);
  
    Hpc(S0)
    stackitem ctx = (stackitem) S0;
  
     secp256k1_context_destroy((struct secp256k1_context_struct *) ctx);
    Npop(1);
}

void _wrap_secp256k1_context_set_illegal_callback() {    
    Sl(3);
  
    Hpc(S2)
    stackitem ctx = (stackitem) S2;
  
    Hpc(S1)
    stackitem fun = (stackitem) S1;
  
    Hpc(S0)
    stackitem data = (stackitem) S0;
  
     secp256k1_context_set_illegal_callback((struct secp256k1_context_struct *) ctx, (void (*)(char *, void *)) fun, (void *) data);
    Npop(3);
}

void _wrap_secp256k1_context_set_error_callback() {    
    Sl(3);
  
    Hpc(S2)
    stackitem ctx = (stackitem) S2;
  
    Hpc(S1)
    stackitem fun = (stackitem) S1;
  
    Hpc(S0)
    stackitem data = (stackitem) S0;
  
     secp256k1_context_set_error_callback((struct secp256k1_context_struct *) ctx, (void (*)(char *, void *)) fun, (void *) data);
    Npop(3);
}

void _wrap_secp256k1_scratch_space_create() {    
    Sl(2);
  
    Hpc(S1)
    stackitem ctx = (stackitem) S1;
  
    stackitem size = (stackitem) S0;
  
    secp256k1_scratch_space * result =  secp256k1_scratch_space_create((struct secp256k1_context_struct *) ctx, (int) size);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_secp256k1_scratch_space_destroy() {    
    Sl(2);
  
    Hpc(S1)
    stackitem ctx = (stackitem) S1;
  
    Hpc(S0)
    stackitem scratch = (stackitem) S0;
  
     secp256k1_scratch_space_destroy((struct secp256k1_context_struct *) ctx, (struct secp256k1_scratch_space_struct *) scratch);
    Npop(2);
}

void _wrap_secp256k1_ec_pubkey_parse() {    
    Sl(4);
  
    Hpc(S3)
    stackitem ctx = (stackitem) S3;
  
    Hpc(S2)
    stackitem pubkey = (stackitem) S2;
  
    Hpc(S1)
    stackitem input = (stackitem) S1;
  
    stackitem inputlen = (stackitem) S0;
  
    int result =  secp256k1_ec_pubkey_parse((struct secp256k1_context_struct *) ctx, (secp256k1_pubkey *) pubkey, (unsigned char *) input, (int) inputlen);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_secp256k1_ec_pubkey_serialize() {    
    Sl(5);
  
    Hpc(S4)
    stackitem ctx = (stackitem) S4;
  
    Hpc(S3)
    stackitem output = (stackitem) S3;
  
    Hpc(S2)
    stackitem outputlen = (stackitem) S2;
  
    Hpc(S1)
    stackitem pubkey = (stackitem) S1;
  
    stackitem flags = (stackitem) S0;
  
    int result =  secp256k1_ec_pubkey_serialize((struct secp256k1_context_struct *) ctx, (unsigned char *) output, (int *) outputlen, (secp256k1_pubkey *) pubkey, (unsigned int) flags);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_secp256k1_ecdsa_signature_parse_compact() {    
    Sl(3);
  
    Hpc(S2)
    stackitem ctx = (stackitem) S2;
  
    Hpc(S1)
    stackitem sig = (stackitem) S1;
  
    Hpc(S0)
    stackitem input64 = (stackitem) S0;
  
    int result =  secp256k1_ecdsa_signature_parse_compact((struct secp256k1_context_struct *) ctx, (secp256k1_ecdsa_signature *) sig, (unsigned char *) input64);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_secp256k1_ecdsa_signature_parse_der() {    
    Sl(4);
  
    Hpc(S3)
    stackitem ctx = (stackitem) S3;
  
    Hpc(S2)
    stackitem sig = (stackitem) S2;
  
    Hpc(S1)
    stackitem input = (stackitem) S1;
  
    stackitem inputlen = (stackitem) S0;
  
    int result =  secp256k1_ecdsa_signature_parse_der((struct secp256k1_context_struct *) ctx, (secp256k1_ecdsa_signature *) sig, (unsigned char *) input, (int) inputlen);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_secp256k1_ecdsa_signature_serialize_der() {    
    Sl(4);
  
    Hpc(S3)
    stackitem ctx = (stackitem) S3;
  
    Hpc(S2)
    stackitem output = (stackitem) S2;
  
    Hpc(S1)
    stackitem outputlen = (stackitem) S1;
  
    Hpc(S0)
    stackitem sig = (stackitem) S0;
  
    int result =  secp256k1_ecdsa_signature_serialize_der((struct secp256k1_context_struct *) ctx, (unsigned char *) output, (int *) outputlen, (secp256k1_ecdsa_signature *) sig);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_secp256k1_ecdsa_signature_serialize_compact() {    
    Sl(3);
  
    Hpc(S2)
    stackitem ctx = (stackitem) S2;
  
    Hpc(S1)
    stackitem output64 = (stackitem) S1;
  
    Hpc(S0)
    stackitem sig = (stackitem) S0;
  
    int result =  secp256k1_ecdsa_signature_serialize_compact((struct secp256k1_context_struct *) ctx, (unsigned char *) output64, (secp256k1_ecdsa_signature *) sig);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_secp256k1_ecdsa_verify() {    
    Sl(4);
  
    Hpc(S3)
    stackitem ctx = (stackitem) S3;
  
    Hpc(S2)
    stackitem sig = (stackitem) S2;
  
    Hpc(S1)
    stackitem msg32 = (stackitem) S1;
  
    Hpc(S0)
    stackitem pubkey = (stackitem) S0;
  
    int result =  secp256k1_ecdsa_verify((struct secp256k1_context_struct *) ctx, (secp256k1_ecdsa_signature *) sig, (unsigned char *) msg32, (secp256k1_pubkey *) pubkey);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_secp256k1_ecdsa_signature_normalize() {    
    Sl(3);
  
    Hpc(S2)
    stackitem ctx = (stackitem) S2;
  
    Hpc(S1)
    stackitem sigout = (stackitem) S1;
  
    Hpc(S0)
    stackitem sigin = (stackitem) S0;
  
    int result =  secp256k1_ecdsa_signature_normalize((struct secp256k1_context_struct *) ctx, (secp256k1_ecdsa_signature *) sigout, (secp256k1_ecdsa_signature *) sigin);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_secp256k1_ecdsa_sign() {    
    Sl(6);
  
    Hpc(S5)
    stackitem ctx = (stackitem) S5;
  
    Hpc(S4)
    stackitem sig = (stackitem) S4;
  
    Hpc(S3)
    stackitem msg32 = (stackitem) S3;
  
    Hpc(S2)
    stackitem seckey = (stackitem) S2;
  
    Hpc(S1)
    stackitem noncefp = (stackitem) S1;
  
    Hpc(S0)
    stackitem ndata = (stackitem) S0;
  
    int result =  secp256k1_ecdsa_sign((struct secp256k1_context_struct *) ctx, (secp256k1_ecdsa_signature *) sig, (unsigned char *) msg32, (unsigned char *) seckey, (int (*)(unsigned char *, unsigned char *, unsigned char *, unsigned char *, void *, unsigned int)) noncefp, (void *) ndata);
    Npop(6);
    Push = (stackitem)result;    
}

void _wrap_secp256k1_ec_seckey_verify() {    
    Sl(2);
  
    Hpc(S1)
    stackitem ctx = (stackitem) S1;
  
    Hpc(S0)
    stackitem seckey = (stackitem) S0;
  
    int result =  secp256k1_ec_seckey_verify((struct secp256k1_context_struct *) ctx, (unsigned char *) seckey);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_secp256k1_ec_pubkey_create() {    
    Sl(3);
  
    Hpc(S2)
    stackitem ctx = (stackitem) S2;
  
    Hpc(S1)
    stackitem pubkey = (stackitem) S1;
  
    Hpc(S0)
    stackitem seckey = (stackitem) S0;
  
    int result =  secp256k1_ec_pubkey_create((struct secp256k1_context_struct *) ctx, (secp256k1_pubkey *) pubkey, (unsigned char *) seckey);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_secp256k1_ec_seckey_negate() {    
    Sl(2);
  
    Hpc(S1)
    stackitem ctx = (stackitem) S1;
  
    Hpc(S0)
    stackitem seckey = (stackitem) S0;
  
    int result =  secp256k1_ec_seckey_negate((struct secp256k1_context_struct *) ctx, (unsigned char *) seckey);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_secp256k1_ec_privkey_negate() {    
    Sl(2);
  
    Hpc(S1)
    stackitem ctx = (stackitem) S1;
  
    Hpc(S0)
    stackitem seckey = (stackitem) S0;
  
    int result =  secp256k1_ec_privkey_negate((struct secp256k1_context_struct *) ctx, (unsigned char *) seckey);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_secp256k1_ec_pubkey_negate() {    
    Sl(2);
  
    Hpc(S1)
    stackitem ctx = (stackitem) S1;
  
    Hpc(S0)
    stackitem pubkey = (stackitem) S0;
  
    int result =  secp256k1_ec_pubkey_negate((struct secp256k1_context_struct *) ctx, (secp256k1_pubkey *) pubkey);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_secp256k1_ec_seckey_tweak_add() {    
    Sl(3);
  
    Hpc(S2)
    stackitem ctx = (stackitem) S2;
  
    Hpc(S1)
    stackitem seckey = (stackitem) S1;
  
    Hpc(S0)
    stackitem tweak = (stackitem) S0;
  
    int result =  secp256k1_ec_seckey_tweak_add((struct secp256k1_context_struct *) ctx, (unsigned char *) seckey, (unsigned char *) tweak);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_secp256k1_ec_privkey_tweak_add() {    
    Sl(3);
  
    Hpc(S2)
    stackitem ctx = (stackitem) S2;
  
    Hpc(S1)
    stackitem seckey = (stackitem) S1;
  
    Hpc(S0)
    stackitem tweak = (stackitem) S0;
  
    int result =  secp256k1_ec_privkey_tweak_add((struct secp256k1_context_struct *) ctx, (unsigned char *) seckey, (unsigned char *) tweak);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_secp256k1_ec_pubkey_tweak_add() {    
    Sl(3);
  
    Hpc(S2)
    stackitem ctx = (stackitem) S2;
  
    Hpc(S1)
    stackitem pubkey = (stackitem) S1;
  
    Hpc(S0)
    stackitem tweak = (stackitem) S0;
  
    int result =  secp256k1_ec_pubkey_tweak_add((struct secp256k1_context_struct *) ctx, (secp256k1_pubkey *) pubkey, (unsigned char *) tweak);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_secp256k1_ec_seckey_tweak_mul() {    
    Sl(3);
  
    Hpc(S2)
    stackitem ctx = (stackitem) S2;
  
    Hpc(S1)
    stackitem seckey = (stackitem) S1;
  
    Hpc(S0)
    stackitem tweak = (stackitem) S0;
  
    int result =  secp256k1_ec_seckey_tweak_mul((struct secp256k1_context_struct *) ctx, (unsigned char *) seckey, (unsigned char *) tweak);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_secp256k1_ec_privkey_tweak_mul() {    
    Sl(3);
  
    Hpc(S2)
    stackitem ctx = (stackitem) S2;
  
    Hpc(S1)
    stackitem seckey = (stackitem) S1;
  
    Hpc(S0)
    stackitem tweak = (stackitem) S0;
  
    int result =  secp256k1_ec_privkey_tweak_mul((struct secp256k1_context_struct *) ctx, (unsigned char *) seckey, (unsigned char *) tweak);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_secp256k1_ec_pubkey_tweak_mul() {    
    Sl(3);
  
    Hpc(S2)
    stackitem ctx = (stackitem) S2;
  
    Hpc(S1)
    stackitem pubkey = (stackitem) S1;
  
    Hpc(S0)
    stackitem tweak = (stackitem) S0;
  
    int result =  secp256k1_ec_pubkey_tweak_mul((struct secp256k1_context_struct *) ctx, (secp256k1_pubkey *) pubkey, (unsigned char *) tweak);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_secp256k1_context_randomize() {    
    Sl(2);
  
    Hpc(S1)
    stackitem ctx = (stackitem) S1;
  
    Hpc(S0)
    stackitem seed32 = (stackitem) S0;
  
    int result =  secp256k1_context_randomize((struct secp256k1_context_struct *) ctx, (unsigned char *) seed32);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_secp256k1_ec_pubkey_combine() {    
    Sl(4);
  
    Hpc(S3)
    stackitem ctx = (stackitem) S3;
  
    Hpc(S2)
    stackitem out = (stackitem) S2;
  
    Hpc(S1)
    stackitem ins = (stackitem) S1;
  
    stackitem n = (stackitem) S0;
  
    int result =  secp256k1_ec_pubkey_combine((struct secp256k1_context_struct *) ctx, (secp256k1_pubkey *) out, (secp256k1_pubkey **) ins, (int) n);
    Npop(4);
    Push = (stackitem)result;    
}



struct primfcn secp256k1_fcns[] = {
    {"0SECP256K1_CONTEXT_CREATE", _wrap_secp256k1_context_create},
    {"0SECP256K1_CONTEXT_CLONE", _wrap_secp256k1_context_clone},
    {"0SECP256K1_CONTEXT_DESTROY", _wrap_secp256k1_context_destroy},
    {"0SECP256K1_CONTEXT_SET_ILLEGAL_CALLBACK", _wrap_secp256k1_context_set_illegal_callback},
    {"0SECP256K1_CONTEXT_SET_ERROR_CALLBACK", _wrap_secp256k1_context_set_error_callback},
    {"0SECP256K1_SCRATCH_SPACE_CREATE", _wrap_secp256k1_scratch_space_create},
    {"0SECP256K1_SCRATCH_SPACE_DESTROY", _wrap_secp256k1_scratch_space_destroy},
    {"0SECP256K1_EC_PUBKEY_PARSE", _wrap_secp256k1_ec_pubkey_parse},
    {"0SECP256K1_EC_PUBKEY_SERIALIZE", _wrap_secp256k1_ec_pubkey_serialize},
    {"0SECP256K1_ECDSA_SIGNATURE_PARSE_COMPACT", _wrap_secp256k1_ecdsa_signature_parse_compact},
    {"0SECP256K1_ECDSA_SIGNATURE_PARSE_DER", _wrap_secp256k1_ecdsa_signature_parse_der},
    {"0SECP256K1_ECDSA_SIGNATURE_SERIALIZE_DER", _wrap_secp256k1_ecdsa_signature_serialize_der},
    {"0SECP256K1_ECDSA_SIGNATURE_SERIALIZE_COMPACT", _wrap_secp256k1_ecdsa_signature_serialize_compact},
    {"0SECP256K1_ECDSA_VERIFY", _wrap_secp256k1_ecdsa_verify},
    {"0SECP256K1_ECDSA_SIGNATURE_NORMALIZE", _wrap_secp256k1_ecdsa_signature_normalize},
    {"0SECP256K1_ECDSA_SIGN", _wrap_secp256k1_ecdsa_sign},
    {"0SECP256K1_EC_SECKEY_VERIFY", _wrap_secp256k1_ec_seckey_verify},
    {"0SECP256K1_EC_PUBKEY_CREATE", _wrap_secp256k1_ec_pubkey_create},
    {"0SECP256K1_EC_SECKEY_NEGATE", _wrap_secp256k1_ec_seckey_negate},
    {"0SECP256K1_EC_PRIVKEY_NEGATE", _wrap_secp256k1_ec_privkey_negate},
    {"0SECP256K1_EC_PUBKEY_NEGATE", _wrap_secp256k1_ec_pubkey_negate},
    {"0SECP256K1_EC_SECKEY_TWEAK_ADD", _wrap_secp256k1_ec_seckey_tweak_add},
    {"0SECP256K1_EC_PRIVKEY_TWEAK_ADD", _wrap_secp256k1_ec_privkey_tweak_add},
    {"0SECP256K1_EC_PUBKEY_TWEAK_ADD", _wrap_secp256k1_ec_pubkey_tweak_add},
    {"0SECP256K1_EC_SECKEY_TWEAK_MUL", _wrap_secp256k1_ec_seckey_tweak_mul},
    {"0SECP256K1_EC_PRIVKEY_TWEAK_MUL", _wrap_secp256k1_ec_privkey_tweak_mul},
    {"0SECP256K1_EC_PUBKEY_TWEAK_MUL", _wrap_secp256k1_ec_pubkey_tweak_mul},
    {"0SECP256K1_CONTEXT_RANDOMIZE", _wrap_secp256k1_context_randomize},
    {"0SECP256K1_EC_PUBKEY_COMBINE", _wrap_secp256k1_ec_pubkey_combine},
{NULL, (codeptr)0}};

