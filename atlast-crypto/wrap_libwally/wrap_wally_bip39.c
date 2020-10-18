
#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "common_wrapper.h"
#include "wrap_wally_bip39.h"
#include "../../libwally-core/include/wally_bip39.h"


void _wrap_bip39_get_languages() {    
    Sl(1);
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  bip39_get_languages((char **) output);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_bip39_get_wordlist() {    
    Sl(2);
  
    Hpc(S1)
    stackitem lang = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  bip39_get_wordlist((char *) lang, (struct words **) output);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_bip39_get_word() {    
    Sl(3);
  
    Hpc(S2)
    stackitem w = (stackitem) S2;
  
    stackitem index = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  bip39_get_word((struct words *) w, (int) index, (char **) output);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_bip39_mnemonic_from_bytes() {    
    Sl(4);
  
    Hpc(S3)
    stackitem w = (stackitem) S3;
  
    Hpc(S2)
    stackitem bytes = (stackitem) S2;
  
    stackitem bytes_len = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  bip39_mnemonic_from_bytes((struct words *) w, (unsigned char *) bytes, (int) bytes_len, (char **) output);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_bip39_mnemonic_to_bytes() {    
    Sl(5);
  
    Hpc(S4)
    stackitem w = (stackitem) S4;
  
    Hpc(S3)
    stackitem mnemonic = (stackitem) S3;
  
    Hpc(S2)
    stackitem bytes_out = (stackitem) S2;
  
    stackitem len = (stackitem) S1;
  
    Hpc(S0)
    stackitem written = (stackitem) S0;
  
    int result =  bip39_mnemonic_to_bytes((struct words *) w, (char *) mnemonic, (unsigned char *) bytes_out, (int) len, (int *) written);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_bip39_mnemonic_validate() {    
    Sl(2);
  
    Hpc(S1)
    stackitem w = (stackitem) S1;
  
    Hpc(S0)
    stackitem mnemonic = (stackitem) S0;
  
    int result =  bip39_mnemonic_validate((struct words *) w, (char *) mnemonic);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_bip39_mnemonic_to_seed() {    
    Sl(5);
  
    Hpc(S4)
    stackitem mnemonic = (stackitem) S4;
  
    Hpc(S3)
    stackitem passphrase = (stackitem) S3;
  
    Hpc(S2)
    stackitem bytes_out = (stackitem) S2;
  
    stackitem len = (stackitem) S1;
  
    Hpc(S0)
    stackitem written = (stackitem) S0;
  
    int result =  bip39_mnemonic_to_seed((char *) mnemonic, (char *) passphrase, (unsigned char *) bytes_out, (int) len, (int *) written);
    Npop(5);
    Push = (stackitem)result;    
}



struct primfcn wally_bip39_fcns[] = {
    {"0BIP39_GET_LANGUAGES", _wrap_bip39_get_languages},
    {"0BIP39_GET_WORDLIST", _wrap_bip39_get_wordlist},
    {"0BIP39_GET_WORD", _wrap_bip39_get_word},
    {"0BIP39_MNEMONIC_FROM_BYTES", _wrap_bip39_mnemonic_from_bytes},
    {"0BIP39_MNEMONIC_TO_BYTES", _wrap_bip39_mnemonic_to_bytes},
    {"0BIP39_MNEMONIC_VALIDATE", _wrap_bip39_mnemonic_validate},
    {"0BIP39_MNEMONIC_TO_SEED", _wrap_bip39_mnemonic_to_seed},
{NULL, (codeptr)0}};

