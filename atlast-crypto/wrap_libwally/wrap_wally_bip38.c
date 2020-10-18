
#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "common_wrapper.h"
#include "wrap_wally_bip38.h"
#include "../../libwally-core/include/wally_bip38.h"


void _wrap_bip38_raw_from_private_key() {    
    Sl(7);
  
    Hpc(S6)
    stackitem bytes = (stackitem) S6;
  
    stackitem bytes_len = (stackitem) S5;
  
    Hpc(S4)
    stackitem pass = (stackitem) S4;
  
    stackitem pass_len = (stackitem) S3;
  
    stackitem flags = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  bip38_raw_from_private_key((unsigned char *) bytes, (int) bytes_len, (unsigned char *) pass, (int) pass_len, (unsigned int) flags, (unsigned char *) bytes_out, (int) len);
    Npop(7);
    Push = (stackitem)result;    
}

void _wrap_bip38_from_private_key() {    
    Sl(6);
  
    Hpc(S5)
    stackitem bytes = (stackitem) S5;
  
    stackitem bytes_len = (stackitem) S4;
  
    Hpc(S3)
    stackitem pass = (stackitem) S3;
  
    stackitem pass_len = (stackitem) S2;
  
    stackitem flags = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  bip38_from_private_key((unsigned char *) bytes, (int) bytes_len, (unsigned char *) pass, (int) pass_len, (unsigned int) flags, (char **) output);
    Npop(6);
    Push = (stackitem)result;    
}

void _wrap_bip38_raw_to_private_key() {    
    Sl(7);
  
    Hpc(S6)
    stackitem bytes = (stackitem) S6;
  
    stackitem bytes_len = (stackitem) S5;
  
    Hpc(S4)
    stackitem pass = (stackitem) S4;
  
    stackitem pass_len = (stackitem) S3;
  
    stackitem flags = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  bip38_raw_to_private_key((unsigned char *) bytes, (int) bytes_len, (unsigned char *) pass, (int) pass_len, (unsigned int) flags, (unsigned char *) bytes_out, (int) len);
    Npop(7);
    Push = (stackitem)result;    
}

void _wrap_bip38_to_private_key() {    
    Sl(6);
  
    Hpc(S5)
    stackitem bip38 = (stackitem) S5;
  
    Hpc(S4)
    stackitem pass = (stackitem) S4;
  
    stackitem pass_len = (stackitem) S3;
  
    stackitem flags = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  bip38_to_private_key((char *) bip38, (unsigned char *) pass, (int) pass_len, (unsigned int) flags, (unsigned char *) bytes_out, (int) len);
    Npop(6);
    Push = (stackitem)result;    
}

void _wrap_bip38_raw_get_flags() {    
    Sl(3);
  
    Hpc(S2)
    stackitem bytes = (stackitem) S2;
  
    stackitem bytes_len = (stackitem) S1;
  
    Hpc(S0)
    stackitem written = (stackitem) S0;
  
    int result =  bip38_raw_get_flags((unsigned char *) bytes, (int) bytes_len, (int *) written);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_bip38_get_flags() {    
    Sl(2);
  
    Hpc(S1)
    stackitem bip38 = (stackitem) S1;
  
    Hpc(S0)
    stackitem written = (stackitem) S0;
  
    int result =  bip38_get_flags((char *) bip38, (int *) written);
    Npop(2);
    Push = (stackitem)result;    
}



struct primfcn wally_bip38_fcns[] = {
    {"0BIP38_RAW_FROM_PRIVATE_KEY", _wrap_bip38_raw_from_private_key},
    {"0BIP38_FROM_PRIVATE_KEY", _wrap_bip38_from_private_key},
    {"0BIP38_RAW_TO_PRIVATE_KEY", _wrap_bip38_raw_to_private_key},
    {"0BIP38_TO_PRIVATE_KEY", _wrap_bip38_to_private_key},
    {"0BIP38_RAW_GET_FLAGS", _wrap_bip38_raw_get_flags},
    {"0BIP38_GET_FLAGS", _wrap_bip38_get_flags},
{NULL, (codeptr)0}};

