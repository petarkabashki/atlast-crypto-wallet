
#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "common_wrapper.h"
#include "wrap_wally_bip32.h"
#include "../../libwally-core/include/wally_bip32.h"


void _wrap_bip32_key_free() {    
    Sl(1);
  
    Hpc(S0)
    stackitem hdkey = (stackitem) S0;
  
    int result =  bip32_key_free((struct ext_key *) hdkey);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_bip32_key_init() {    
    Sl(14);
  
    stackitem version = (stackitem) S13;
  
    stackitem depth = (stackitem) S12;
  
    stackitem child_num = (stackitem) S11;
  
    Hpc(S10)
    stackitem chain_code = (stackitem) S10;
  
    stackitem chain_code_len = (stackitem) S9;
  
    Hpc(S8)
    stackitem pub_key = (stackitem) S8;
  
    stackitem pub_key_len = (stackitem) S7;
  
    Hpc(S6)
    stackitem priv_key = (stackitem) S6;
  
    stackitem priv_key_len = (stackitem) S5;
  
    Hpc(S4)
    stackitem hash160 = (stackitem) S4;
  
    stackitem hash160_len = (stackitem) S3;
  
    Hpc(S2)
    stackitem parent160 = (stackitem) S2;
  
    stackitem parent160_len = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  bip32_key_init((unsigned int) version, (unsigned int) depth, (unsigned int) child_num, (unsigned char *) chain_code, (int) chain_code_len, (unsigned char *) pub_key, (int) pub_key_len, (unsigned char *) priv_key, (int) priv_key_len, (unsigned char *) hash160, (int) hash160_len, (unsigned char *) parent160, (int) parent160_len, (struct ext_key *) output);
    Npop(14);
    Push = (stackitem)result;    
}

void _wrap_bip32_key_init_alloc() {    
    Sl(14);
  
    stackitem version = (stackitem) S13;
  
    stackitem depth = (stackitem) S12;
  
    stackitem child_num = (stackitem) S11;
  
    Hpc(S10)
    stackitem chain_code = (stackitem) S10;
  
    stackitem chain_code_len = (stackitem) S9;
  
    Hpc(S8)
    stackitem pub_key = (stackitem) S8;
  
    stackitem pub_key_len = (stackitem) S7;
  
    Hpc(S6)
    stackitem priv_key = (stackitem) S6;
  
    stackitem priv_key_len = (stackitem) S5;
  
    Hpc(S4)
    stackitem hash160 = (stackitem) S4;
  
    stackitem hash160_len = (stackitem) S3;
  
    Hpc(S2)
    stackitem parent160 = (stackitem) S2;
  
    stackitem parent160_len = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  bip32_key_init_alloc((unsigned int) version, (unsigned int) depth, (unsigned int) child_num, (unsigned char *) chain_code, (int) chain_code_len, (unsigned char *) pub_key, (int) pub_key_len, (unsigned char *) priv_key, (int) priv_key_len, (unsigned char *) hash160, (int) hash160_len, (unsigned char *) parent160, (int) parent160_len, (struct ext_key **) output);
    Npop(14);
    Push = (stackitem)result;    
}

void _wrap_bip32_key_from_seed() {    
    Sl(5);
  
    Hpc(S4)
    stackitem bytes = (stackitem) S4;
  
    stackitem bytes_len = (stackitem) S3;
  
    stackitem version = (stackitem) S2;
  
    stackitem flags = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  bip32_key_from_seed((unsigned char *) bytes, (int) bytes_len, (unsigned int) version, (unsigned int) flags, (struct ext_key *) output);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_bip32_key_from_seed_alloc() {    
    Sl(5);
  
    Hpc(S4)
    stackitem bytes = (stackitem) S4;
  
    stackitem bytes_len = (stackitem) S3;
  
    stackitem version = (stackitem) S2;
  
    stackitem flags = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  bip32_key_from_seed_alloc((unsigned char *) bytes, (int) bytes_len, (unsigned int) version, (unsigned int) flags, (struct ext_key **) output);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_bip32_key_serialize() {    
    Sl(4);
  
    Hpc(S3)
    stackitem hdkey = (stackitem) S3;
  
    stackitem flags = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  bip32_key_serialize((struct ext_key *) hdkey, (unsigned int) flags, (unsigned char *) bytes_out, (int) len);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_bip32_key_unserialize() {    
    Sl(3);
  
    Hpc(S2)
    stackitem bytes = (stackitem) S2;
  
    stackitem bytes_len = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  bip32_key_unserialize((unsigned char *) bytes, (int) bytes_len, (struct ext_key *) output);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_bip32_key_unserialize_alloc() {    
    Sl(3);
  
    Hpc(S2)
    stackitem bytes = (stackitem) S2;
  
    stackitem bytes_len = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  bip32_key_unserialize_alloc((unsigned char *) bytes, (int) bytes_len, (struct ext_key **) output);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_bip32_key_from_parent() {    
    Sl(4);
  
    Hpc(S3)
    stackitem hdkey = (stackitem) S3;
  
    stackitem child_num = (stackitem) S2;
  
    stackitem flags = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  bip32_key_from_parent((struct ext_key *) hdkey, (unsigned int) child_num, (unsigned int) flags, (struct ext_key *) output);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_bip32_key_from_parent_alloc() {    
    Sl(4);
  
    Hpc(S3)
    stackitem hdkey = (stackitem) S3;
  
    stackitem child_num = (stackitem) S2;
  
    stackitem flags = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  bip32_key_from_parent_alloc((struct ext_key *) hdkey, (unsigned int) child_num, (unsigned int) flags, (struct ext_key **) output);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_bip32_key_from_parent_path() {    
    Sl(5);
  
    Hpc(S4)
    stackitem hdkey = (stackitem) S4;
  
    Hpc(S3)
    stackitem child_path = (stackitem) S3;
  
    stackitem child_path_len = (stackitem) S2;
  
    stackitem flags = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  bip32_key_from_parent_path((struct ext_key *) hdkey, (unsigned int *) child_path, (int) child_path_len, (unsigned int) flags, (struct ext_key *) output);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_bip32_key_from_parent_path_alloc() {    
    Sl(5);
  
    Hpc(S4)
    stackitem hdkey = (stackitem) S4;
  
    Hpc(S3)
    stackitem child_path = (stackitem) S3;
  
    stackitem child_path_len = (stackitem) S2;
  
    stackitem flags = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  bip32_key_from_parent_path_alloc((struct ext_key *) hdkey, (unsigned int *) child_path, (int) child_path_len, (unsigned int) flags, (struct ext_key **) output);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_bip32_key_to_base58() {    
    Sl(3);
  
    Hpc(S2)
    stackitem hdkey = (stackitem) S2;
  
    stackitem flags = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  bip32_key_to_base58((struct ext_key *) hdkey, (unsigned int) flags, (char **) output);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_bip32_key_from_base58() {    
    Sl(2);
  
    Hpc(S1)
    stackitem base58 = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  bip32_key_from_base58((char *) base58, (struct ext_key *) output);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_bip32_key_from_base58_alloc() {    
    Sl(2);
  
    Hpc(S1)
    stackitem base58 = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  bip32_key_from_base58_alloc((char *) base58, (struct ext_key **) output);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_bip32_key_strip_private_key() {    
    Sl(1);
  
    Hpc(S0)
    stackitem hdkey = (stackitem) S0;
  
    int result =  bip32_key_strip_private_key((struct ext_key *) hdkey);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_bip32_key_get_fingerprint() {    
    Sl(3);
  
    Hpc(S2)
    stackitem hdkey = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  bip32_key_get_fingerprint((struct ext_key *) hdkey, (unsigned char *) bytes_out, (int) len);
    Npop(3);
    Push = (stackitem)result;    
}



struct primfcn wally_bip32_fcns[] = {
    {"0BIP32_KEY_FREE", _wrap_bip32_key_free},
    {"0BIP32_KEY_INIT", _wrap_bip32_key_init},
    {"0BIP32_KEY_INIT_ALLOC", _wrap_bip32_key_init_alloc},
    {"0BIP32_KEY_FROM_SEED", _wrap_bip32_key_from_seed},
    {"0BIP32_KEY_FROM_SEED_ALLOC", _wrap_bip32_key_from_seed_alloc},
    {"0BIP32_KEY_SERIALIZE", _wrap_bip32_key_serialize},
    {"0BIP32_KEY_UNSERIALIZE", _wrap_bip32_key_unserialize},
    {"0BIP32_KEY_UNSERIALIZE_ALLOC", _wrap_bip32_key_unserialize_alloc},
    {"0BIP32_KEY_FROM_PARENT", _wrap_bip32_key_from_parent},
    {"0BIP32_KEY_FROM_PARENT_ALLOC", _wrap_bip32_key_from_parent_alloc},
    {"0BIP32_KEY_FROM_PARENT_PATH", _wrap_bip32_key_from_parent_path},
    {"0BIP32_KEY_FROM_PARENT_PATH_ALLOC", _wrap_bip32_key_from_parent_path_alloc},
    {"0BIP32_KEY_TO_BASE58", _wrap_bip32_key_to_base58},
    {"0BIP32_KEY_FROM_BASE58", _wrap_bip32_key_from_base58},
    {"0BIP32_KEY_FROM_BASE58_ALLOC", _wrap_bip32_key_from_base58_alloc},
    {"0BIP32_KEY_STRIP_PRIVATE_KEY", _wrap_bip32_key_strip_private_key},
    {"0BIP32_KEY_GET_FINGERPRINT", _wrap_bip32_key_get_fingerprint},
{NULL, (codeptr)0}};

