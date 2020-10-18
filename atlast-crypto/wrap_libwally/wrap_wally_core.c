
#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "common_wrapper.h"
#include "wrap_wally_core.h"
#include "../../libwally-core/include/wally_core.h"


void _wrap_wally_init() {    
    Sl(1);
  
    stackitem flags = (stackitem) S0;
  
    int result =  wally_init((unsigned int) flags);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_wally_cleanup() {    
    Sl(1);
  
    stackitem flags = (stackitem) S0;
  
    int result =  wally_cleanup((unsigned int) flags);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_wally_get_secp_context() {    
    Sl(0);
  
    struct secp256k1_context_struct * result =  wally_get_secp_context();
    Npop(0);
    Push = (stackitem)result;    
}

void _wrap_wally_bzero() {    
    Sl(2);
  
    Hpc(S1)
    stackitem bytes = (stackitem) S1;
  
    stackitem bytes_len = (stackitem) S0;
  
    int result =  wally_bzero((void *) bytes, (int) bytes_len);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_wally_free_string() {    
    Sl(1);
  
    Hpc(S0)
    stackitem str = (stackitem) S0;
  
    int result =  wally_free_string((char *) str);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_wally_secp_randomize() {    
    Sl(2);
  
    Hpc(S1)
    stackitem bytes = (stackitem) S1;
  
    stackitem bytes_len = (stackitem) S0;
  
    int result =  wally_secp_randomize((unsigned char *) bytes, (int) bytes_len);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_wally_hex_from_bytes() {    
    Sl(3);
  
    Hpc(S2)
    stackitem bytes = (stackitem) S2;
  
    stackitem bytes_len = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  wally_hex_from_bytes((unsigned char *) bytes, (int) bytes_len, (char **) output);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_wally_hex_to_bytes() {    
    Sl(4);
  
    Hpc(S3)
    stackitem hex = (stackitem) S3;
  
    Hpc(S2)
    stackitem bytes_out = (stackitem) S2;
  
    stackitem len = (stackitem) S1;
  
    Hpc(S0)
    stackitem written = (stackitem) S0;
  
    int result =  wally_hex_to_bytes((char *) hex, (unsigned char *) bytes_out, (int) len, (int *) written);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_wally_base58_from_bytes() {    
    Sl(4);
  
    Hpc(S3)
    stackitem bytes = (stackitem) S3;
  
    stackitem bytes_len = (stackitem) S2;
  
    stackitem flags = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  wally_base58_from_bytes((unsigned char *) bytes, (int) bytes_len, (unsigned int) flags, (char **) output);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_wally_base58_to_bytes() {    
    Sl(5);
  
    Hpc(S4)
    stackitem str_in = (stackitem) S4;
  
    stackitem flags = (stackitem) S3;
  
    Hpc(S2)
    stackitem bytes_out = (stackitem) S2;
  
    stackitem len = (stackitem) S1;
  
    Hpc(S0)
    stackitem written = (stackitem) S0;
  
    int result =  wally_base58_to_bytes((char *) str_in, (unsigned int) flags, (unsigned char *) bytes_out, (int) len, (int *) written);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_wally_base58_get_length() {    
    Sl(2);
  
    Hpc(S1)
    stackitem str_in = (stackitem) S1;
  
    Hpc(S0)
    stackitem written = (stackitem) S0;
  
    int result =  wally_base58_get_length((char *) str_in, (int *) written);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_wally_get_operations() {    
    Sl(1);
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  wally_get_operations((struct wally_operations *) output);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_wally_set_operations() {    
    Sl(1);
  
    Hpc(S0)
    stackitem ops = (stackitem) S0;
  
    int result =  wally_set_operations((struct wally_operations *) ops);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_wally_is_elements_build() {    
    Sl(1);
  
    Hpc(S0)
    stackitem value_out = (stackitem) S0;
  
    int result =  wally_is_elements_build((unsigned long *) value_out);
    Npop(1);
    Push = (stackitem)result;    
}



struct primfcn wally_core_fcns[] = {
    {"0WALLY_INIT", _wrap_wally_init},
    {"0WALLY_CLEANUP", _wrap_wally_cleanup},
    {"0WALLY_GET_SECP_CONTEXT", _wrap_wally_get_secp_context},
    {"0WALLY_BZERO", _wrap_wally_bzero},
    {"0WALLY_FREE_STRING", _wrap_wally_free_string},
    {"0WALLY_SECP_RANDOMIZE", _wrap_wally_secp_randomize},
    {"0WALLY_HEX_FROM_BYTES", _wrap_wally_hex_from_bytes},
    {"0WALLY_HEX_TO_BYTES", _wrap_wally_hex_to_bytes},
    {"0WALLY_BASE58_FROM_BYTES", _wrap_wally_base58_from_bytes},
    {"0WALLY_BASE58_TO_BYTES", _wrap_wally_base58_to_bytes},
    {"0WALLY_BASE58_GET_LENGTH", _wrap_wally_base58_get_length},
    {"0WALLY_GET_OPERATIONS", _wrap_wally_get_operations},
    {"0WALLY_SET_OPERATIONS", _wrap_wally_set_operations},
    {"0WALLY_IS_ELEMENTS_BUILD", _wrap_wally_is_elements_build},
{NULL, (codeptr)0}};

