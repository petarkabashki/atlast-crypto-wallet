
#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "common_wrapper.h"
#include "wrap_wally_transaction.h"
#include "../../libwally-core/include/wally_transaction.h"


void _wrap_wally_tx_witness_stack_init_alloc() {    
    Sl(2);
  
    stackitem allocation_len = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  wally_tx_witness_stack_init_alloc((int) allocation_len, (struct wally_tx_witness_stack **) output);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_witness_stack_add() {    
    Sl(3);
  
    Hpc(S2)
    stackitem stack = (stackitem) S2;
  
    Hpc(S1)
    stackitem witness = (stackitem) S1;
  
    stackitem witness_len = (stackitem) S0;
  
    int result =  wally_tx_witness_stack_add((struct wally_tx_witness_stack *) stack, (unsigned char *) witness, (int) witness_len);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_witness_stack_add_dummy() {    
    Sl(2);
  
    Hpc(S1)
    stackitem stack = (stackitem) S1;
  
    stackitem flags = (stackitem) S0;
  
    int result =  wally_tx_witness_stack_add_dummy((struct wally_tx_witness_stack *) stack, (unsigned int) flags);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_witness_stack_set() {    
    Sl(4);
  
    Hpc(S3)
    stackitem stack = (stackitem) S3;
  
    stackitem index = (stackitem) S2;
  
    Hpc(S1)
    stackitem witness = (stackitem) S1;
  
    stackitem witness_len = (stackitem) S0;
  
    int result =  wally_tx_witness_stack_set((struct wally_tx_witness_stack *) stack, (int) index, (unsigned char *) witness, (int) witness_len);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_witness_stack_set_dummy() {    
    Sl(3);
  
    Hpc(S2)
    stackitem stack = (stackitem) S2;
  
    stackitem index = (stackitem) S1;
  
    stackitem flags = (stackitem) S0;
  
    int result =  wally_tx_witness_stack_set_dummy((struct wally_tx_witness_stack *) stack, (int) index, (unsigned int) flags);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_witness_stack_free() {    
    Sl(1);
  
    Hpc(S0)
    stackitem stack = (stackitem) S0;
  
    int result =  wally_tx_witness_stack_free((struct wally_tx_witness_stack *) stack);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_input_init_alloc() {    
    Sl(8);
  
    Hpc(S7)
    stackitem txhash = (stackitem) S7;
  
    stackitem txhash_len = (stackitem) S6;
  
    stackitem index = (stackitem) S5;
  
    stackitem sequence = (stackitem) S4;
  
    Hpc(S3)
    stackitem script = (stackitem) S3;
  
    stackitem script_len = (stackitem) S2;
  
    Hpc(S1)
    stackitem witness = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  wally_tx_input_init_alloc((unsigned char *) txhash, (int) txhash_len, (unsigned int) index, (unsigned int) sequence, (unsigned char *) script, (int) script_len, (struct wally_tx_witness_stack *) witness, (struct wally_tx_input **) output);
    Npop(8);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_input_free() {    
    Sl(1);
  
    Hpc(S0)
    stackitem input = (stackitem) S0;
  
    int result =  wally_tx_input_free((struct wally_tx_input *) input);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_output_init_alloc() {    
    Sl(4);
  
    stackitem satoshi = (stackitem) S3;
  
    Hpc(S2)
    stackitem script = (stackitem) S2;
  
    stackitem script_len = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  wally_tx_output_init_alloc((unsigned long) satoshi, (unsigned char *) script, (int) script_len, (struct wally_tx_output **) output);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_output_free() {    
    Sl(1);
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  wally_tx_output_free((struct wally_tx_output *) output);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_init_alloc() {    
    Sl(5);
  
    stackitem version = (stackitem) S4;
  
    stackitem locktime = (stackitem) S3;
  
    stackitem inputs_allocation_len = (stackitem) S2;
  
    stackitem outputs_allocation_len = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  wally_tx_init_alloc((unsigned int) version, (unsigned int) locktime, (int) inputs_allocation_len, (int) outputs_allocation_len, (struct wally_tx **) output);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_add_input() {    
    Sl(2);
  
    Hpc(S1)
    stackitem tx = (stackitem) S1;
  
    Hpc(S0)
    stackitem input = (stackitem) S0;
  
    int result =  wally_tx_add_input((struct wally_tx *) tx, (struct wally_tx_input *) input);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_add_raw_input() {    
    Sl(9);
  
    Hpc(S8)
    stackitem tx = (stackitem) S8;
  
    Hpc(S7)
    stackitem txhash = (stackitem) S7;
  
    stackitem txhash_len = (stackitem) S6;
  
    stackitem index = (stackitem) S5;
  
    stackitem sequence = (stackitem) S4;
  
    Hpc(S3)
    stackitem script = (stackitem) S3;
  
    stackitem script_len = (stackitem) S2;
  
    Hpc(S1)
    stackitem witness = (stackitem) S1;
  
    stackitem flags = (stackitem) S0;
  
    int result =  wally_tx_add_raw_input((struct wally_tx *) tx, (unsigned char *) txhash, (int) txhash_len, (unsigned int) index, (unsigned int) sequence, (unsigned char *) script, (int) script_len, (struct wally_tx_witness_stack *) witness, (unsigned int) flags);
    Npop(9);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_remove_input() {    
    Sl(2);
  
    Hpc(S1)
    stackitem tx = (stackitem) S1;
  
    stackitem index = (stackitem) S0;
  
    int result =  wally_tx_remove_input((struct wally_tx *) tx, (int) index);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_set_input_script() {    
    Sl(4);
  
    Hpc(S3)
    stackitem tx = (stackitem) S3;
  
    stackitem index = (stackitem) S2;
  
    Hpc(S1)
    stackitem script = (stackitem) S1;
  
    stackitem script_len = (stackitem) S0;
  
    int result =  wally_tx_set_input_script((struct wally_tx *) tx, (int) index, (unsigned char *) script, (int) script_len);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_set_input_witness() {    
    Sl(3);
  
    Hpc(S2)
    stackitem tx = (stackitem) S2;
  
    stackitem index = (stackitem) S1;
  
    Hpc(S0)
    stackitem stack = (stackitem) S0;
  
    int result =  wally_tx_set_input_witness((struct wally_tx *) tx, (int) index, (struct wally_tx_witness_stack *) stack);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_add_output() {    
    Sl(2);
  
    Hpc(S1)
    stackitem tx = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  wally_tx_add_output((struct wally_tx *) tx, (struct wally_tx_output *) output);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_add_raw_output() {    
    Sl(5);
  
    Hpc(S4)
    stackitem tx = (stackitem) S4;
  
    stackitem satoshi = (stackitem) S3;
  
    Hpc(S2)
    stackitem script = (stackitem) S2;
  
    stackitem script_len = (stackitem) S1;
  
    stackitem flags = (stackitem) S0;
  
    int result =  wally_tx_add_raw_output((struct wally_tx *) tx, (unsigned long) satoshi, (unsigned char *) script, (int) script_len, (unsigned int) flags);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_remove_output() {    
    Sl(2);
  
    Hpc(S1)
    stackitem tx = (stackitem) S1;
  
    stackitem index = (stackitem) S0;
  
    int result =  wally_tx_remove_output((struct wally_tx *) tx, (int) index);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_get_witness_count() {    
    Sl(2);
  
    Hpc(S1)
    stackitem tx = (stackitem) S1;
  
    Hpc(S0)
    stackitem written = (stackitem) S0;
  
    int result =  wally_tx_get_witness_count((struct wally_tx *) tx, (int *) written);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_free() {    
    Sl(1);
  
    Hpc(S0)
    stackitem tx = (stackitem) S0;
  
    int result =  wally_tx_free((struct wally_tx *) tx);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_get_length() {    
    Sl(3);
  
    Hpc(S2)
    stackitem tx = (stackitem) S2;
  
    stackitem flags = (stackitem) S1;
  
    Hpc(S0)
    stackitem written = (stackitem) S0;
  
    int result =  wally_tx_get_length((struct wally_tx *) tx, (unsigned int) flags, (int *) written);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_from_bytes() {    
    Sl(4);
  
    Hpc(S3)
    stackitem bytes = (stackitem) S3;
  
    stackitem bytes_len = (stackitem) S2;
  
    stackitem flags = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  wally_tx_from_bytes((unsigned char *) bytes, (int) bytes_len, (unsigned int) flags, (struct wally_tx **) output);
    Npop(4);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_from_hex() {    
    Sl(3);
  
    Hpc(S2)
    stackitem hex = (stackitem) S2;
  
    stackitem flags = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  wally_tx_from_hex((char *) hex, (unsigned int) flags, (struct wally_tx **) output);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_to_bytes() {    
    Sl(5);
  
    Hpc(S4)
    stackitem tx = (stackitem) S4;
  
    stackitem flags = (stackitem) S3;
  
    Hpc(S2)
    stackitem bytes_out = (stackitem) S2;
  
    stackitem len = (stackitem) S1;
  
    Hpc(S0)
    stackitem written = (stackitem) S0;
  
    int result =  wally_tx_to_bytes((struct wally_tx *) tx, (unsigned int) flags, (unsigned char *) bytes_out, (int) len, (int *) written);
    Npop(5);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_to_hex() {    
    Sl(3);
  
    Hpc(S2)
    stackitem tx = (stackitem) S2;
  
    stackitem flags = (stackitem) S1;
  
    Hpc(S0)
    stackitem output = (stackitem) S0;
  
    int result =  wally_tx_to_hex((struct wally_tx *) tx, (unsigned int) flags, (char **) output);
    Npop(3);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_get_weight() {    
    Sl(2);
  
    Hpc(S1)
    stackitem tx = (stackitem) S1;
  
    Hpc(S0)
    stackitem written = (stackitem) S0;
  
    int result =  wally_tx_get_weight((struct wally_tx *) tx, (int *) written);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_get_vsize() {    
    Sl(2);
  
    Hpc(S1)
    stackitem tx = (stackitem) S1;
  
    Hpc(S0)
    stackitem written = (stackitem) S0;
  
    int result =  wally_tx_get_vsize((struct wally_tx *) tx, (int *) written);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_vsize_from_weight() {    
    Sl(2);
  
    stackitem weight = (stackitem) S1;
  
    Hpc(S0)
    stackitem written = (stackitem) S0;
  
    int result =  wally_tx_vsize_from_weight((int) weight, (int *) written);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_get_total_output_satoshi() {    
    Sl(2);
  
    Hpc(S1)
    stackitem tx = (stackitem) S1;
  
    Hpc(S0)
    stackitem value_out = (stackitem) S0;
  
    int result =  wally_tx_get_total_output_satoshi((struct wally_tx *) tx, (unsigned long *) value_out);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_get_btc_signature_hash() {    
    Sl(9);
  
    Hpc(S8)
    stackitem tx = (stackitem) S8;
  
    stackitem index = (stackitem) S7;
  
    Hpc(S6)
    stackitem script = (stackitem) S6;
  
    stackitem script_len = (stackitem) S5;
  
    stackitem satoshi = (stackitem) S4;
  
    stackitem sighash = (stackitem) S3;
  
    stackitem flags = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  wally_tx_get_btc_signature_hash((struct wally_tx *) tx, (int) index, (unsigned char *) script, (int) script_len, (unsigned long) satoshi, (unsigned int) sighash, (unsigned int) flags, (unsigned char *) bytes_out, (int) len);
    Npop(9);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_get_signature_hash() {    
    Sl(13);
  
    Hpc(S12)
    stackitem tx = (stackitem) S12;
  
    stackitem index = (stackitem) S11;
  
    Hpc(S10)
    stackitem script = (stackitem) S10;
  
    stackitem script_len = (stackitem) S9;
  
    Hpc(S8)
    stackitem extra = (stackitem) S8;
  
    stackitem extra_len = (stackitem) S7;
  
    stackitem extra_offset = (stackitem) S6;
  
    stackitem satoshi = (stackitem) S5;
  
    stackitem sighash = (stackitem) S4;
  
    stackitem tx_sighash = (stackitem) S3;
  
    stackitem flags = (stackitem) S2;
  
    Hpc(S1)
    stackitem bytes_out = (stackitem) S1;
  
    stackitem len = (stackitem) S0;
  
    int result =  wally_tx_get_signature_hash((struct wally_tx *) tx, (int) index, (unsigned char *) script, (int) script_len, (unsigned char *) extra, (int) extra_len, (unsigned int) extra_offset, (unsigned long) satoshi, (unsigned int) sighash, (unsigned int) tx_sighash, (unsigned int) flags, (unsigned char *) bytes_out, (int) len);
    Npop(13);
    Push = (stackitem)result;    
}

void _wrap_wally_tx_is_coinbase() {    
    Sl(2);
  
    Hpc(S1)
    stackitem tx = (stackitem) S1;
  
    Hpc(S0)
    stackitem written = (stackitem) S0;
  
    int result =  wally_tx_is_coinbase((struct wally_tx *) tx, (int *) written);
    Npop(2);
    Push = (stackitem)result;    
}



struct primfcn wally_transaction_fcns[] = {
    {"0WALLY_TX_WITNESS_STACK_INIT_ALLOC", _wrap_wally_tx_witness_stack_init_alloc},
    {"0WALLY_TX_WITNESS_STACK_ADD", _wrap_wally_tx_witness_stack_add},
    {"0WALLY_TX_WITNESS_STACK_ADD_DUMMY", _wrap_wally_tx_witness_stack_add_dummy},
    {"0WALLY_TX_WITNESS_STACK_SET", _wrap_wally_tx_witness_stack_set},
    {"0WALLY_TX_WITNESS_STACK_SET_DUMMY", _wrap_wally_tx_witness_stack_set_dummy},
    {"0WALLY_TX_WITNESS_STACK_FREE", _wrap_wally_tx_witness_stack_free},
    {"0WALLY_TX_INPUT_INIT_ALLOC", _wrap_wally_tx_input_init_alloc},
    {"0WALLY_TX_INPUT_FREE", _wrap_wally_tx_input_free},
    {"0WALLY_TX_OUTPUT_INIT_ALLOC", _wrap_wally_tx_output_init_alloc},
    {"0WALLY_TX_OUTPUT_FREE", _wrap_wally_tx_output_free},
    {"0WALLY_TX_INIT_ALLOC", _wrap_wally_tx_init_alloc},
    {"0WALLY_TX_ADD_INPUT", _wrap_wally_tx_add_input},
    {"0WALLY_TX_ADD_RAW_INPUT", _wrap_wally_tx_add_raw_input},
    {"0WALLY_TX_REMOVE_INPUT", _wrap_wally_tx_remove_input},
    {"0WALLY_TX_SET_INPUT_SCRIPT", _wrap_wally_tx_set_input_script},
    {"0WALLY_TX_SET_INPUT_WITNESS", _wrap_wally_tx_set_input_witness},
    {"0WALLY_TX_ADD_OUTPUT", _wrap_wally_tx_add_output},
    {"0WALLY_TX_ADD_RAW_OUTPUT", _wrap_wally_tx_add_raw_output},
    {"0WALLY_TX_REMOVE_OUTPUT", _wrap_wally_tx_remove_output},
    {"0WALLY_TX_GET_WITNESS_COUNT", _wrap_wally_tx_get_witness_count},
    {"0WALLY_TX_FREE", _wrap_wally_tx_free},
    {"0WALLY_TX_GET_LENGTH", _wrap_wally_tx_get_length},
    {"0WALLY_TX_FROM_BYTES", _wrap_wally_tx_from_bytes},
    {"0WALLY_TX_FROM_HEX", _wrap_wally_tx_from_hex},
    {"0WALLY_TX_TO_BYTES", _wrap_wally_tx_to_bytes},
    {"0WALLY_TX_TO_HEX", _wrap_wally_tx_to_hex},
    {"0WALLY_TX_GET_WEIGHT", _wrap_wally_tx_get_weight},
    {"0WALLY_TX_GET_VSIZE", _wrap_wally_tx_get_vsize},
    {"0WALLY_TX_VSIZE_FROM_WEIGHT", _wrap_wally_tx_vsize_from_weight},
    {"0WALLY_TX_GET_TOTAL_OUTPUT_SATOSHI", _wrap_wally_tx_get_total_output_satoshi},
    {"0WALLY_TX_GET_BTC_SIGNATURE_HASH", _wrap_wally_tx_get_btc_signature_hash},
    {"0WALLY_TX_GET_SIGNATURE_HASH", _wrap_wally_tx_get_signature_hash},
    {"0WALLY_TX_IS_COINBASE", _wrap_wally_tx_is_coinbase},
{NULL, (codeptr)0}};

