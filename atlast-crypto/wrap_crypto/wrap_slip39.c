
#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "common_wrapper.h"
#include "wrap_slip39.h"
#include "../../crypto/slip39.h"


void _wrap_get_word() {    
    Sl(1);
  
    uint16_t index = (uint16_t) S0;
  
    const char * result =  get_word((uint16_t) index);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_word_index() {    
    Sl(3);
  
    Hpc(S2)
    uint16_t * index = (uint16_t *) S2;
  
    Hpc(S1)
    char * word = (char *) S1;
  
    uint8_t word_length = (uint8_t) S0;
  
    int result =  word_index((uint16_t *) index, (char *) word, (uint8_t) word_length);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_compute_mask() {    
    Sl(1);
  
    uint16_t prefix = (uint16_t) S0;
  
    uint16_t result =  compute_mask((uint16_t) prefix);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_button_sequence_to_word() {    
    Sl(1);
  
    uint16_t prefix = (uint16_t) S0;
  
    const char * result =  button_sequence_to_word((uint16_t) prefix);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_find() {    
    Sl(2);
  
    uint16_t prefix = (uint16_t) S1;
  
    int find_index = (int) S0;
  
    uint16_t result =  find((uint16_t) prefix, (int) find_index);
    Npop(2);
    Push = (stackitem)result;    
}



struct primfcn slip39_fcns[] = {
    {"0GET_WORD", _wrap_get_word},
    {"0WORD_INDEX", _wrap_word_index},
    {"0COMPUTE_MASK", _wrap_compute_mask},
    {"0BUTTON_SEQUENCE_TO_WORD", _wrap_button_sequence_to_word},
    {"0FIND", _wrap_find},
{NULL, (codeptr)0}};

