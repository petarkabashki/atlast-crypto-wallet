
#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "wrap_bip39.h"


void _wrap_mnemonic_generate() {    
    Sl(1);
  
    int strength = (int) S0;
  
    const char * result  mnemonic_generate(strength);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_mnemonic_from_data() {    
    Sl(2);
  
    Hpc(S1)
    uint8_t * data = (const uint8_t *) S1;
  
    int len = (int) S0;
  
    const char * result  mnemonic_from_data(data, len);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_mnemonic_clear() {    
    Sl(0);
  
     mnemonic_clear();
    Npop(0);
}

void _wrap_mnemonic_check() {    
    Sl(1);
  
    Hpc(S0)
    char * mnemonic = (const char *) S0;
  
    int result  mnemonic_check(mnemonic);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_mnemonic_to_entropy() {    
    Sl(2);
  
    Hpc(S1)
    char * mnemonic = (const char *) S1;
  
    Hpc(S0)
    uint8_t * entropy = (uint8_t *) S0;
  
    int result  mnemonic_to_entropy(mnemonic, entropy);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_mnemonic_to_seed() {    
    Sl(4);
  
    Hpc(S3)
    char * mnemonic = (const char *) S3;
  
    Hpc(S2)
    char * passphrase = (const char *) S2;
  
    uint8_t [64] seed = (uint8_t [64]) S1;
  
    Hpc(S0)
    void (*)(uint32_t, uint32_t) progress_callback = (void (*)(uint32_t, uint32_t)) S0;
  
     mnemonic_to_seed(mnemonic, passphrase, seed, progress_callback);
    Npop(4);
}

void _wrap_mnemonic_find_word() {    
    Sl(1);
  
    Hpc(S0)
    char * word = (const char *) S0;
  
    int result  mnemonic_find_word(word);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_mnemonic_complete_word() {    
    Sl(2);
  
    Hpc(S1)
    char * prefix = (const char *) S1;
  
    int len = (int) S0;
  
    const char * result  mnemonic_complete_word(prefix, len);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_mnemonic_get_word() {    
    Sl(1);
  
    int index = (int) S0;
  
    const char * result  mnemonic_get_word(index);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_mnemonic_word_completion_mask() {    
    Sl(2);
  
    Hpc(S1)
    char * prefix = (const char *) S1;
  
    int len = (int) S0;
  
    uint32_t result  mnemonic_word_completion_mask(prefix, len);
    Npop(2);
    Push = (stackitem)result;    
}



struct primfcn bip39_fcns[] = {
    {"0MNEMONIC_GENERATE", _wrap_mnemonic_generate},
    {"0MNEMONIC_FROM_DATA", _wrap_mnemonic_from_data},
    {"0MNEMONIC_CLEAR", _wrap_mnemonic_clear},
    {"0MNEMONIC_CHECK", _wrap_mnemonic_check},
    {"0MNEMONIC_TO_ENTROPY", _wrap_mnemonic_to_entropy},
    {"0MNEMONIC_TO_SEED", _wrap_mnemonic_to_seed},
    {"0MNEMONIC_FIND_WORD", _wrap_mnemonic_find_word},
    {"0MNEMONIC_COMPLETE_WORD", _wrap_mnemonic_complete_word},
    {"0MNEMONIC_GET_WORD", _wrap_mnemonic_get_word},
    {"0MNEMONIC_WORD_COMPLETION_MASK", _wrap_mnemonic_word_completion_mask},
}
{NULL, (codeptr)0}};
