
#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// #include "common_wrapper.h"
#include "wrap_wally_address.h"
#include "wally_address.h"


void _wrap_wally_addr_segwit_from_bytes() {    
    Sl(5);
  
    Hpc(S4)
    stackitem bytes = (stackitem) S4;
  
    stackitem bytes_len = (stackitem) S3;
  
    Hpc(S2)
    stackitem addr_family = (stackitem) S2;
  
    stackitem flags = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  wally_addr_segwit_from_bytes((unsigned char *) bytes, (int) bytes_len, (char *) addr_family, (unsigned int) flags, (char **) output);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_wally_addr_segwit_to_bytes() {    
    Sl(6);
  
    Hpc(S5)
    stackitem addr = (stackitem) S5;
  
    Hpc(S4)
    stackitem addr_family = (stackitem) S4;
  
    stackitem flags = (stackitem) S3;
  
    Hpc(S2)
    stackitem bytes_out = (stackitem) S2;
  
    stackitem len = (stackitem) S1;
  
    Hpc(S0)
    stackitem written = (stackitem) S0;
  
    int result =  wally_addr_segwit_to_bytes((char *) addr, (char *) addr_family, (unsigned int) flags, (unsigned char *) bytes_out, (int) len, (int *) written);
    Npop(6);
    Push = (stackitem)result;    
}

void _wrap_wally_address_to_scriptpubkey() {    
    Sl(5);
  
    Hpc(S4)
    stackitem addr = (stackitem) S4;
  
    stackitem network = (stackitem) S3;
  
    Hpc(S2)
    stackitem bytes_out = (stackitem) S2;
  
    stackitem len = (stackitem) S1;
  
    Hpc(S0)
    stackitem written = (stackitem) S0;
  
    int result =  wally_address_to_scriptpubkey((char *) addr, (unsigned int) network, (unsigned char *) bytes_out, (int) len, (int *) written);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_wally_scriptpubkey_to_address() {    
    Sl(4);
  
    Hpc(S3)
    stackitem scriptpubkey = (stackitem) S3;
  
    stackitem scriptpubkey_len = (stackitem) S2;
  
    stackitem network = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  wally_scriptpubkey_to_address((unsigned char *) scriptpubkey, (int) scriptpubkey_len, (unsigned int) network, (char **) output);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_wally_wif_from_bytes() {    
    Sl(5);
  
    Hpc(S4)
    stackitem priv_key = (stackitem) S4;
  
    stackitem priv_key_len = (stackitem) S3;
  
    stackitem prefix = (stackitem) S2;
  
    stackitem flags = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  wally_wif_from_bytes((unsigned char *) priv_key, (int) priv_key_len, (unsigned int) prefix, (unsigned int) flags, (char **) output);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_wally_wif_to_bytes() {    
    Sl(5);
  
    Hpc(S4)
    stackitem wif = (stackitem) S4;
  
    stackitem prefix = (stackitem) S3;
  
    stackitem flags = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  wally_wif_to_bytes((char *) wif, (unsigned int) prefix, (unsigned int) flags, (unsigned char *) bytes_out, (int) len);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_wally_wif_is_uncompressed() {    
    Sl(2);
  
    Hpc(S1)
    stackitem wif = (stackitem) S1;
  
    Hpc(S0)
    stackitem written = (stackitem) S0;
  
    int result =  wally_wif_is_uncompressed((char *) wif, (int *) written);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_wally_wif_to_public_key() {    
    Sl(5);
  
    Hpc(S4)
    stackitem wif = (stackitem) S4;
  
    stackitem prefix = (stackitem) S3;
  
    Hpc(S2)
    stackitem bytes_out = (stackitem) S2;
  
    stackitem len = (stackitem) S1;
  
    Hpc(S0)
    stackitem written = (stackitem) S0;
  
    int result =  wally_wif_to_public_key((char *) wif, (unsigned int) prefix, (unsigned char *) bytes_out, (int) len, (int *) written);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_wally_bip32_key_to_address() {    
    Sl(4);
  
    Hpc(S3)
    stackitem hdkey = (stackitem) S3;
  
    stackitem flags = (stackitem) S2;
  
    stackitem version = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  wally_bip32_key_to_address((struct ext_key *) hdkey, (unsigned int) flags, (unsigned int) version, (char **) output);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_wally_bip32_key_to_addr_segwit() {    
    Sl(4);
  
    Hpc(S3)
    stackitem hdkey = (stackitem) S3;
  
    Hpc(S2)
    stackitem addr_family = (stackitem) S2;
  
    stackitem flags = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  wally_bip32_key_to_addr_segwit((struct ext_key *) hdkey, (char *) addr_family, (unsigned int) flags, (char **) output);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_wally_wif_to_address() {    
    Sl(4);
  
    Hpc(S3)
    stackitem wif = (stackitem) S3;
  
    stackitem prefix = (stackitem) S2;
  
    stackitem version = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  wally_wif_to_address((char *) wif, (unsigned int) prefix, (unsigned int) version, (char **) output);
    Npop(4);
    Push = (stackitem)result;    
}



struct primfcn wally_address_fcns[] = {
    {"0WALLY_ADDR_SEGWIT_FROM_BYTES", _wrap_wally_addr_segwit_from_bytes},
    {"0WALLY_ADDR_SEGWIT_TO_BYTES", _wrap_wally_addr_segwit_to_bytes},
    {"0WALLY_ADDRESS_TO_SCRIPTPUBKEY", _wrap_wally_address_to_scriptpubkey},
    {"0WALLY_SCRIPTPUBKEY_TO_ADDRESS", _wrap_wally_scriptpubkey_to_address},
    {"0WALLY_WIF_FROM_BYTES", _wrap_wally_wif_from_bytes},
    {"0WALLY_WIF_TO_BYTES", _wrap_wally_wif_to_bytes},
    {"0WALLY_WIF_IS_UNCOMPRESSED", _wrap_wally_wif_is_uncompressed},
    {"0WALLY_WIF_TO_PUBLIC_KEY", _wrap_wally_wif_to_public_key},
    {"0WALLY_BIP32_KEY_TO_ADDRESS", _wrap_wally_bip32_key_to_address},
    {"0WALLY_BIP32_KEY_TO_ADDR_SEGWIT", _wrap_wally_bip32_key_to_addr_segwit},
    {"0WALLY_WIF_TO_ADDRESS", _wrap_wally_wif_to_address},
{NULL, (codeptr)0}};

