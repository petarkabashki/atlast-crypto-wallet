
#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "common_wrapper.h"
#include "wrap_bignum.h"
#include "../../crypto/bignum.h"


void _wrap_read_be() {    
    Sl(1);
  
    Hpc(S0)
    stackitem data = (stackitem) S0;
  
    uint32_t result =  read_be((unsigned char *) data);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_write_be() {    
    Sl(2);
  
    Hpc(S1)
    stackitem data = (stackitem) S1;
  
    stackitem x = (stackitem) S0;
  
     write_be((unsigned char *) data, (unsigned int) x);
    Npop(2);
}

void _wrap_read_le() {    
    Sl(1);
  
    Hpc(S0)
    stackitem data = (stackitem) S0;
  
    uint32_t result =  read_le((unsigned char *) data);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_write_le() {    
    Sl(2);
  
    Hpc(S1)
    stackitem data = (stackitem) S1;
  
    stackitem x = (stackitem) S0;
  
     write_le((unsigned char *) data, (unsigned int) x);
    Npop(2);
}

void _wrap_bn_read_be() {    
    Sl(2);
  
    Hpc(S1)
    stackitem in_number = (stackitem) S1;
  
    Hpc(S0)
    stackitem out_number = (stackitem) S0;
  
     bn_read_be((unsigned char *) in_number, (bignum256 *) out_number);
    Npop(2);
}

void _wrap_bn_write_be() {    
    Sl(2);
  
    Hpc(S1)
    stackitem in_number = (stackitem) S1;
  
    Hpc(S0)
    stackitem out_number = (stackitem) S0;
  
     bn_write_be((bignum256 *) in_number, (unsigned char *) out_number);
    Npop(2);
}

void _wrap_bn_read_le() {    
    Sl(2);
  
    Hpc(S1)
    stackitem in_number = (stackitem) S1;
  
    Hpc(S0)
    stackitem out_number = (stackitem) S0;
  
     bn_read_le((unsigned char *) in_number, (bignum256 *) out_number);
    Npop(2);
}

void _wrap_bn_write_le() {    
    Sl(2);
  
    Hpc(S1)
    stackitem in_number = (stackitem) S1;
  
    Hpc(S0)
    stackitem out_number = (stackitem) S0;
  
     bn_write_le((bignum256 *) in_number, (unsigned char *) out_number);
    Npop(2);
}

void _wrap_bn_read_uint32() {    
    Sl(2);
  
    stackitem in_number = (stackitem) S1;
  
    Hpc(S0)
    stackitem out_number = (stackitem) S0;
  
     bn_read_uint32((unsigned int) in_number, (bignum256 *) out_number);
    Npop(2);
}

void _wrap_bn_read_uint64() {    
    Sl(2);
  
    stackitem in_number = (stackitem) S1;
  
    Hpc(S0)
    stackitem out_number = (stackitem) S0;
  
     bn_read_uint64((unsigned long) in_number, (bignum256 *) out_number);
    Npop(2);
}

void _wrap_bn_bitcount() {    
    Sl(1);
  
    Hpc(S0)
    stackitem x = (stackitem) S0;
  
    int result =  bn_bitcount((bignum256 *) x);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_bn_digitcount() {    
    Sl(1);
  
    Hpc(S0)
    stackitem x = (stackitem) S0;
  
    unsigned int result =  bn_digitcount((bignum256 *) x);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_bn_zero() {    
    Sl(1);
  
    Hpc(S0)
    stackitem x = (stackitem) S0;
  
     bn_zero((bignum256 *) x);
    Npop(1);
}

void _wrap_bn_one() {    
    Sl(1);
  
    Hpc(S0)
    stackitem x = (stackitem) S0;
  
     bn_one((bignum256 *) x);
    Npop(1);
}

void _wrap_bn_is_zero() {    
    Sl(1);
  
    Hpc(S0)
    stackitem x = (stackitem) S0;
  
    int result =  bn_is_zero((bignum256 *) x);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_bn_is_one() {    
    Sl(1);
  
    Hpc(S0)
    stackitem x = (stackitem) S0;
  
    int result =  bn_is_one((bignum256 *) x);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_bn_is_less() {    
    Sl(2);
  
    Hpc(S1)
    stackitem x = (stackitem) S1;
  
    Hpc(S0)
    stackitem y = (stackitem) S0;
  
    int result =  bn_is_less((bignum256 *) x, (bignum256 *) y);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_bn_is_equal() {    
    Sl(2);
  
    Hpc(S1)
    stackitem x = (stackitem) S1;
  
    Hpc(S0)
    stackitem y = (stackitem) S0;
  
    int result =  bn_is_equal((bignum256 *) x, (bignum256 *) y);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_bn_cmov() {    
    Sl(4);
  
    Hpc(S3)
    stackitem res = (stackitem) S3;
  
    stackitem cond = (stackitem) S2;
  
    Hpc(S1)
    stackitem truecase = (stackitem) S1;
  
    Hpc(S0)
    stackitem falsecase = (stackitem) S0;
  
     bn_cmov((bignum256 *) res, (volatile unsigned int) cond, (bignum256 *) truecase, (bignum256 *) falsecase);
    Npop(4);
}

void _wrap_bn_cnegate() {    
    Sl(3);
  
    stackitem cond = (stackitem) S2;
  
    Hpc(S1)
    stackitem x = (stackitem) S1;
  
    Hpc(S0)
    stackitem prime = (stackitem) S0;
  
     bn_cnegate((volatile unsigned int) cond, (bignum256 *) x, (bignum256 *) prime);
    Npop(3);
}

void _wrap_bn_lshift() {    
    Sl(1);
  
    Hpc(S0)
    stackitem x = (stackitem) S0;
  
     bn_lshift((bignum256 *) x);
    Npop(1);
}

void _wrap_bn_rshift() {    
    Sl(1);
  
    Hpc(S0)
    stackitem x = (stackitem) S0;
  
     bn_rshift((bignum256 *) x);
    Npop(1);
}

void _wrap_bn_setbit() {    
    Sl(2);
  
    Hpc(S1)
    stackitem x = (stackitem) S1;
  
    stackitem i = (stackitem) S0;
  
     bn_setbit((bignum256 *) x, (unsigned short) i);
    Npop(2);
}

void _wrap_bn_clearbit() {    
    Sl(2);
  
    Hpc(S1)
    stackitem x = (stackitem) S1;
  
    stackitem i = (stackitem) S0;
  
     bn_clearbit((bignum256 *) x, (unsigned short) i);
    Npop(2);
}

void _wrap_bn_testbit() {    
    Sl(2);
  
    Hpc(S1)
    stackitem x = (stackitem) S1;
  
    stackitem i = (stackitem) S0;
  
    uint32_t result =  bn_testbit((bignum256 *) x, (unsigned short) i);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_bn_xor() {    
    Sl(3);
  
    Hpc(S2)
    stackitem res = (stackitem) S2;
  
    Hpc(S1)
    stackitem x = (stackitem) S1;
  
    Hpc(S0)
    stackitem y = (stackitem) S0;
  
     bn_xor((bignum256 *) res, (bignum256 *) x, (bignum256 *) y);
    Npop(3);
}

void _wrap_bn_mult_half() {    
    Sl(2);
  
    Hpc(S1)
    stackitem x = (stackitem) S1;
  
    Hpc(S0)
    stackitem prime = (stackitem) S0;
  
     bn_mult_half((bignum256 *) x, (bignum256 *) prime);
    Npop(2);
}

void _wrap_bn_mult_k() {    
    Sl(3);
  
    Hpc(S2)
    stackitem x = (stackitem) S2;
  
    stackitem k = (stackitem) S1;
  
    Hpc(S0)
    stackitem prime = (stackitem) S0;
  
     bn_mult_k((bignum256 *) x, (unsigned char) k, (bignum256 *) prime);
    Npop(3);
}

void _wrap_bn_mod() {    
    Sl(2);
  
    Hpc(S1)
    stackitem x = (stackitem) S1;
  
    Hpc(S0)
    stackitem prime = (stackitem) S0;
  
     bn_mod((bignum256 *) x, (bignum256 *) prime);
    Npop(2);
}

void _wrap_bn_multiply() {    
    Sl(3);
  
    Hpc(S2)
    stackitem k = (stackitem) S2;
  
    Hpc(S1)
    stackitem x = (stackitem) S1;
  
    Hpc(S0)
    stackitem prime = (stackitem) S0;
  
     bn_multiply((bignum256 *) k, (bignum256 *) x, (bignum256 *) prime);
    Npop(3);
}

void _wrap_bn_fast_mod_old() {    
    Sl(2);
  
    Hpc(S1)
    stackitem x = (stackitem) S1;
  
    Hpc(S0)
    stackitem prime = (stackitem) S0;
  
     bn_fast_mod_old((bignum256 *) x, (bignum256 *) prime);
    Npop(2);
}

void _wrap_bn_fast_mod() {    
    Sl(2);
  
    Hpc(S1)
    stackitem x = (stackitem) S1;
  
    Hpc(S0)
    stackitem prime = (stackitem) S0;
  
     bn_fast_mod((bignum256 *) x, (bignum256 *) prime);
    Npop(2);
}

void _wrap_bn_power_mod() {    
    Sl(4);
  
    Hpc(S3)
    stackitem x = (stackitem) S3;
  
    Hpc(S2)
    stackitem e = (stackitem) S2;
  
    Hpc(S1)
    stackitem prime = (stackitem) S1;
  
    Hpc(S0)
    stackitem res = (stackitem) S0;
  
     bn_power_mod((bignum256 *) x, (bignum256 *) e, (bignum256 *) prime, (bignum256 *) res);
    Npop(4);
}

void _wrap_bn_sqrt() {    
    Sl(2);
  
    Hpc(S1)
    stackitem x = (stackitem) S1;
  
    Hpc(S0)
    stackitem prime = (stackitem) S0;
  
     bn_sqrt((bignum256 *) x, (bignum256 *) prime);
    Npop(2);
}

void _wrap_inverse_mod_power_two() {    
    Sl(2);
  
    stackitem a = (stackitem) S1;
  
    stackitem n = (stackitem) S0;
  
    uint32_t result =  inverse_mod_power_two((unsigned int) a, (unsigned int) n);
    Npop(2);
    Push = (stackitem)result;    
}

void _wrap_bn_divide_base() {    
    Sl(2);
  
    Hpc(S1)
    stackitem x = (stackitem) S1;
  
    Hpc(S0)
    stackitem prime = (stackitem) S0;
  
     bn_divide_base((bignum256 *) x, (bignum256 *) prime);
    Npop(2);
}

void _wrap_bn_inverse_slow() {    
    Sl(2);
  
    Hpc(S1)
    stackitem x = (stackitem) S1;
  
    Hpc(S0)
    stackitem prime = (stackitem) S0;
  
     bn_inverse_slow((bignum256 *) x, (bignum256 *) prime);
    Npop(2);
}

void _wrap_bn_inverse_fast_1() {    
    Sl(2);
  
    Hpc(S1)
    stackitem x = (stackitem) S1;
  
    Hpc(S0)
    stackitem prime = (stackitem) S0;
  
     bn_inverse_fast_1((bignum256 *) x, (bignum256 *) prime);
    Npop(2);
}

void _wrap_bn_inverse_fast_2() {    
    Sl(2);
  
    Hpc(S1)
    stackitem x = (stackitem) S1;
  
    Hpc(S0)
    stackitem prime = (stackitem) S0;
  
     bn_inverse_fast_2((bignum256 *) x, (bignum256 *) prime);
    Npop(2);
}

void _wrap_bn_inverse_fast_3() {    
    Sl(2);
  
    Hpc(S1)
    stackitem x = (stackitem) S1;
  
    Hpc(S0)
    stackitem prime = (stackitem) S0;
  
     bn_inverse_fast_3((bignum256 *) x, (bignum256 *) prime);
    Npop(2);
}

void _wrap_bn_inverse_old() {    
    Sl(2);
  
    Hpc(S1)
    stackitem x = (stackitem) S1;
  
    Hpc(S0)
    stackitem prime = (stackitem) S0;
  
     bn_inverse_old((bignum256 *) x, (bignum256 *) prime);
    Npop(2);
}

void _wrap_bn_normalize() {    
    Sl(1);
  
    Hpc(S0)
    stackitem x = (stackitem) S0;
  
     bn_normalize((bignum256 *) x);
    Npop(1);
}

void _wrap_bn_add() {    
    Sl(2);
  
    Hpc(S1)
    stackitem x = (stackitem) S1;
  
    Hpc(S0)
    stackitem y = (stackitem) S0;
  
     bn_add((bignum256 *) x, (bignum256 *) y);
    Npop(2);
}

void _wrap_bn_addmod() {    
    Sl(3);
  
    Hpc(S2)
    stackitem x = (stackitem) S2;
  
    Hpc(S1)
    stackitem y = (stackitem) S1;
  
    Hpc(S0)
    stackitem prime = (stackitem) S0;
  
     bn_addmod((bignum256 *) x, (bignum256 *) y, (bignum256 *) prime);
    Npop(3);
}

void _wrap_bn_addi() {    
    Sl(2);
  
    Hpc(S1)
    stackitem x = (stackitem) S1;
  
    stackitem y = (stackitem) S0;
  
     bn_addi((bignum256 *) x, (unsigned int) y);
    Npop(2);
}

void _wrap_bn_subi() {    
    Sl(3);
  
    Hpc(S2)
    stackitem x = (stackitem) S2;
  
    stackitem y = (stackitem) S1;
  
    Hpc(S0)
    stackitem prime = (stackitem) S0;
  
     bn_subi((bignum256 *) x, (unsigned int) y, (bignum256 *) prime);
    Npop(3);
}

void _wrap_bn_subtractmod() {    
    Sl(4);
  
    Hpc(S3)
    stackitem x = (stackitem) S3;
  
    Hpc(S2)
    stackitem y = (stackitem) S2;
  
    Hpc(S1)
    stackitem res = (stackitem) S1;
  
    Hpc(S0)
    stackitem prime = (stackitem) S0;
  
     bn_subtractmod((bignum256 *) x, (bignum256 *) y, (bignum256 *) res, (bignum256 *) prime);
    Npop(4);
}

void _wrap_bn_subtract() {    
    Sl(3);
  
    Hpc(S2)
    stackitem x = (stackitem) S2;
  
    Hpc(S1)
    stackitem y = (stackitem) S1;
  
    Hpc(S0)
    stackitem res = (stackitem) S0;
  
     bn_subtract((bignum256 *) x, (bignum256 *) y, (bignum256 *) res);
    Npop(3);
}

void _wrap_bn_long_division() {    
    Sl(4);
  
    Hpc(S3)
    stackitem x = (stackitem) S3;
  
    stackitem d = (stackitem) S2;
  
    Hpc(S1)
    stackitem q = (stackitem) S1;
  
    Hpc(S0)
    stackitem r = (stackitem) S0;
  
     bn_long_division((bignum256 *) x, (unsigned int) d, (bignum256 *) q, (unsigned int *) r);
    Npop(4);
}

void _wrap_bn_divmod58() {    
    Sl(2);
  
    Hpc(S1)
    stackitem x = (stackitem) S1;
  
    Hpc(S0)
    stackitem r = (stackitem) S0;
  
     bn_divmod58((bignum256 *) x, (unsigned int *) r);
    Npop(2);
}

void _wrap_bn_divmod1000() {    
    Sl(2);
  
    Hpc(S1)
    stackitem x = (stackitem) S1;
  
    Hpc(S0)
    stackitem r = (stackitem) S0;
  
     bn_divmod1000((bignum256 *) x, (unsigned int *) r);
    Npop(2);
}

void _wrap_bn_inverse() {    
    Sl(2);
  
    Hpc(S1)
    stackitem x = (stackitem) S1;
  
    Hpc(S0)
    stackitem prime = (stackitem) S0;
  
     bn_inverse((bignum256 *) x, (bignum256 *) prime);
    Npop(2);
}

void _wrap_bn_format() {    
    Sl(8);
  
    Hpc(S7)
    stackitem amount = (stackitem) S7;
  
    Hpc(S6)
    stackitem prefix = (stackitem) S6;
  
    Hpc(S5)
    stackitem suffix = (stackitem) S5;
  
    stackitem decimals = (stackitem) S4;
  
    stackitem exponent = (stackitem) S3;
  
    stackitem trailing = (stackitem) S2;
  
    Hpc(S1)
    stackitem output = (stackitem) S1;
  
    stackitem output_length = (stackitem) S0;
  
    int result =  bn_format((bignum256 *) amount, (char *) prefix, (char *) suffix, (unsigned int) decimals, (int) exponent, (int) trailing, (char *) output, (int) output_length);
    Npop(8);
    Push = (stackitem)result;    
}

void _wrap_bn_write_uint32() {    
    Sl(1);
  
    Hpc(S0)
    stackitem in_number = (stackitem) S0;
  
    uint32_t result =  bn_write_uint32((bignum256 *) in_number);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_bn_write_uint64() {    
    Sl(1);
  
    Hpc(S0)
    stackitem in_number = (stackitem) S0;
  
    uint64_t result =  bn_write_uint64((bignum256 *) in_number);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_bn_copy() {    
    Sl(2);
  
    Hpc(S1)
    stackitem x = (stackitem) S1;
  
    Hpc(S0)
    stackitem y = (stackitem) S0;
  
     bn_copy((bignum256 *) x, (bignum256 *) y);
    Npop(2);
}

void _wrap_bn_is_even() {    
    Sl(1);
  
    Hpc(S0)
    stackitem x = (stackitem) S0;
  
    int result =  bn_is_even((bignum256 *) x);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_bn_is_odd() {    
    Sl(1);
  
    Hpc(S0)
    stackitem x = (stackitem) S0;
  
    int result =  bn_is_odd((bignum256 *) x);
    Npop(1);
    Push = (stackitem)result;    
}

void _wrap_bn_format_uint64() {    
    Sl(8);
  
    stackitem amount = (stackitem) S7;
  
    Hpc(S6)
    stackitem prefix = (stackitem) S6;
  
    Hpc(S5)
    stackitem suffix = (stackitem) S5;
  
    stackitem decimals = (stackitem) S4;
  
    stackitem exponent = (stackitem) S3;
  
    stackitem trailing = (stackitem) S2;
  
    Hpc(S1)
    stackitem output = (stackitem) S1;
  
    stackitem output_length = (stackitem) S0;
  
    int result =  bn_format_uint64((unsigned long) amount, (char *) prefix, (char *) suffix, (unsigned int) decimals, (int) exponent, (int) trailing, (char *) output, (int) output_length);
    Npop(8);
    Push = (stackitem)result;    
}



struct primfcn bignum_fcns[] = {
    {"0READ_BE", _wrap_read_be},
    {"0WRITE_BE", _wrap_write_be},
    {"0READ_LE", _wrap_read_le},
    {"0WRITE_LE", _wrap_write_le},
    {"0BN_READ_BE", _wrap_bn_read_be},
    {"0BN_WRITE_BE", _wrap_bn_write_be},
    {"0BN_READ_LE", _wrap_bn_read_le},
    {"0BN_WRITE_LE", _wrap_bn_write_le},
    {"0BN_READ_UINT32", _wrap_bn_read_uint32},
    {"0BN_READ_UINT64", _wrap_bn_read_uint64},
    {"0BN_BITCOUNT", _wrap_bn_bitcount},
    {"0BN_DIGITCOUNT", _wrap_bn_digitcount},
    {"0BN_ZERO", _wrap_bn_zero},
    {"0BN_ONE", _wrap_bn_one},
    {"0BN_IS_ZERO", _wrap_bn_is_zero},
    {"0BN_IS_ONE", _wrap_bn_is_one},
    {"0BN_IS_LESS", _wrap_bn_is_less},
    {"0BN_IS_EQUAL", _wrap_bn_is_equal},
    {"0BN_CMOV", _wrap_bn_cmov},
    {"0BN_CNEGATE", _wrap_bn_cnegate},
    {"0BN_LSHIFT", _wrap_bn_lshift},
    {"0BN_RSHIFT", _wrap_bn_rshift},
    {"0BN_SETBIT", _wrap_bn_setbit},
    {"0BN_CLEARBIT", _wrap_bn_clearbit},
    {"0BN_TESTBIT", _wrap_bn_testbit},
    {"0BN_XOR", _wrap_bn_xor},
    {"0BN_MULT_HALF", _wrap_bn_mult_half},
    {"0BN_MULT_K", _wrap_bn_mult_k},
    {"0BN_MOD", _wrap_bn_mod},
    {"0BN_MULTIPLY", _wrap_bn_multiply},
    {"0BN_FAST_MOD_OLD", _wrap_bn_fast_mod_old},
    {"0BN_FAST_MOD", _wrap_bn_fast_mod},
    {"0BN_POWER_MOD", _wrap_bn_power_mod},
    {"0BN_SQRT", _wrap_bn_sqrt},
    {"0INVERSE_MOD_POWER_TWO", _wrap_inverse_mod_power_two},
    {"0BN_DIVIDE_BASE", _wrap_bn_divide_base},
    {"0BN_INVERSE_SLOW", _wrap_bn_inverse_slow},
    {"0BN_INVERSE_FAST_1", _wrap_bn_inverse_fast_1},
    {"0BN_INVERSE_FAST_2", _wrap_bn_inverse_fast_2},
    {"0BN_INVERSE_FAST_3", _wrap_bn_inverse_fast_3},
    {"0BN_INVERSE_OLD", _wrap_bn_inverse_old},
    {"0BN_NORMALIZE", _wrap_bn_normalize},
    {"0BN_ADD", _wrap_bn_add},
    {"0BN_ADDMOD", _wrap_bn_addmod},
    {"0BN_ADDI", _wrap_bn_addi},
    {"0BN_SUBI", _wrap_bn_subi},
    {"0BN_SUBTRACTMOD", _wrap_bn_subtractmod},
    {"0BN_SUBTRACT", _wrap_bn_subtract},
    {"0BN_LONG_DIVISION", _wrap_bn_long_division},
    {"0BN_DIVMOD58", _wrap_bn_divmod58},
    {"0BN_DIVMOD1000", _wrap_bn_divmod1000},
    {"0BN_INVERSE", _wrap_bn_inverse},
    {"0BN_FORMAT", _wrap_bn_format},
    {"0BN_WRITE_UINT32", _wrap_bn_write_uint32},
    {"0BN_WRITE_UINT64", _wrap_bn_write_uint64},
    {"0BN_COPY", _wrap_bn_copy},
    {"0BN_IS_EVEN", _wrap_bn_is_even},
    {"0BN_IS_ODD", _wrap_bn_is_odd},
    {"0BN_FORMAT_UINT64", _wrap_bn_format_uint64},
{NULL, (codeptr)0}};

