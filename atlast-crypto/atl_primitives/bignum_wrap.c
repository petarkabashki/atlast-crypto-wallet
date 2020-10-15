/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if defined(__GNUC__)
#  if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#    ifndef GCC_HASCLASSVISIBILITY
#      define GCC_HASCLASSVISIBILITY
#    endif
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif


 /* Put header files here or function declarations like below */
#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../crypto/bignum.h"

#include "bignum_wrap.h"
 
void _wrap_bn_read_be() {
  Sl(2);
  Hpc(stk[-2]);
  uint8_t *arg1 = (uint8_t *) stk[-2];
  Hpc(stk[-1]);
  bignum256 *arg2 = (bignum256 *) stk[-1];
  bn_read_be((uint8_t const *)arg1,arg2);
  Npop(2);
}


void _wrap_bn_write_be() {
  Sl(2);
  Hpc(stk[-2]);
  bignum256 *arg1 = (bignum256 *) stk[-2];
  Hpc(stk[-1]);
  uint8_t *arg2 = (uint8_t *) stk[-1];
  bn_write_be((bignum256 const *)arg1,arg2);
  Npop(2);
}


void _wrap_bn_read_le() {
  Sl(2);
  Hpc(stk[-2]);
  uint8_t *arg1 = (uint8_t *) stk[-2];
  Hpc(stk[-1]);
  bignum256 *arg2 = (bignum256 *) stk[-1];
  bn_read_le((uint8_t const *)arg1,arg2);
  Npop(2);
}


void _wrap_bn_write_le() {
  Sl(2);
  Hpc(stk[-2]);
  bignum256 *arg1 = (bignum256 *) stk[-2];
  Hpc(stk[-1]);
  uint8_t *arg2 = (uint8_t *) stk[-1];
  bn_write_le((bignum256 const *)arg1,arg2);
  Npop(2);
}


void _wrap_bn_read_uint32() {
  Sl(2);
  uint32_t arg1 = (uint32_t) stk[-2];
  Hpc(stk[-1]);
  bignum256 *arg2 = (bignum256 *) stk[-1];
  bn_read_uint32(arg1,arg2);
  Npop(2);
}


void _wrap_bn_read_uint64() {
  Sl(2);
  uint64_t arg1 = (uint64_t) stk[-2];
  Hpc(stk[-1]);
  bignum256 *arg2 = (bignum256 *) stk[-1];
  bn_read_uint64(arg1,arg2);
  Npop(2);
}


void _wrap_bn_bitcount() {
  Sl(1);
  Hpc(stk[-1]);
  bignum256 *arg1 = (bignum256 *) stk[-1];
  int result = (int)bn_bitcount((bignum256 const *)arg1);
  Npop(1);
  Push = (stackitem)result;
}


void _wrap_bn_digitcount() {
  Sl(1);
  Hpc(stk[-1]);
  bignum256 *arg1 = (bignum256 *) stk[-1];
  unsigned int result = (unsigned int)bn_digitcount((bignum256 const *)arg1);
  Npop(1);
  Push = (stackitem)result;
}


void _wrap_bn_zero() {
  Sl(1);
  Hpc(stk[-1]);
  bignum256 *arg1 = (bignum256 *) stk[-1];
  bn_zero(arg1);
  Npop(1);
}


void _wrap_bn_one() {
  Sl(1);
  Hpc(stk[-1]);
  bignum256 *arg1 = (bignum256 *) stk[-1];
  bn_one(arg1);
  Npop(1);
}


void _wrap_bn_is_zero() {
  Sl(1);
  Hpc(stk[-1]);
  bignum256 *arg1 = (bignum256 *) stk[-1];
  int result = (int)bn_is_zero((bignum256 const *)arg1);
  Npop(1);
  Push = (stackitem)result;
}


void _wrap_bn_is_one() {
  Sl(1);
  Hpc(stk[-1]);
  bignum256 *arg1 = (bignum256 *) stk[-1];
  int result = (int)bn_is_one((bignum256 const *)arg1);
  Npop(1);
  Push = (stackitem)result;
}


void _wrap_bn_is_less() {
  Sl(2);
  Hpc(stk[-2]);
  bignum256 *arg1 = (bignum256 *) stk[-2];
  Hpc(stk[-1]);
  bignum256 *arg2 = (bignum256 *) stk[-1];
  int result = (int)bn_is_less((bignum256 const *)arg1,(bignum256 const *)arg2);
  Npop(2);
  Push = (stackitem)result;
}


void _wrap_bn_is_equal() {
  Sl(2);
  Hpc(stk[-2]);
  bignum256 *arg1 = (bignum256 *) stk[-2];
  Hpc(stk[-1]);
  bignum256 *arg2 = (bignum256 *) stk[-1];
  int result = (int)bn_is_equal((bignum256 const *)arg1,(bignum256 const *)arg2);
  Npop(2);
  Push = (stackitem)result;
}


void _wrap_bn_cmov() {
  Sl(4);
  Hpc(stk[-4]);
  bignum256 *arg1 = (bignum256 *) stk[-4];
  uint32_t arg2 = (uint32_t) (uint32_t)stk[-3];
  Hpc(stk[-2]);
  bignum256 *arg3 = (bignum256 *) stk[-2];
  Hpc(stk[-1]);
  bignum256 *arg4 = (bignum256 *) stk[-1];
  bn_cmov(arg1,(uint32_t volatile )arg2,(bignum256 const *)arg3,(bignum256 const *)arg4);
  Npop(4);
}


void _wrap_bn_cnegate() {
  Sl(3);
  uint32_t arg1 = (uint32_t) (uint32_t)stk[-3];
  Hpc(stk[-2]);
  bignum256 *arg2 = (bignum256 *) stk[-2];
  Hpc(stk[-1]);
  bignum256 *arg3 = (bignum256 *) stk[-1];
  bn_cnegate((uint32_t volatile )arg1,arg2,(bignum256 const *)arg3);
  Npop(3);
}


void _wrap_bn_lshift() {
  Sl(1);
  Hpc(stk[-1]);
  bignum256 *arg1 = (bignum256 *) stk[-1];
  bn_lshift(arg1);
  Npop(1);
}


void _wrap_bn_rshift() {
  Sl(1);
  Hpc(stk[-1]);
  bignum256 *arg1 = (bignum256 *) stk[-1];
  bn_rshift(arg1);
  Npop(1);
}


void _wrap_bn_setbit() {
  Sl(2);
  Hpc(stk[-2]);
  bignum256 *arg1 = (bignum256 *) stk[-2];
  uint16_t arg2 = (uint16_t) stk[-1];
  bn_setbit(arg1,arg2);
  Npop(2);
}


void _wrap_bn_clearbit() {
  Sl(2);
  Hpc(stk[-2]);
  bignum256 *arg1 = (bignum256 *) stk[-2];
  uint16_t arg2 = (uint16_t) stk[-1];
  bn_clearbit(arg1,arg2);
  Npop(2);
}


void _wrap_bn_testbit() {
  Sl(2);
  Hpc(stk[-2]);
  bignum256 *arg1 = (bignum256 *) stk[-2];
  uint16_t arg2 = (uint16_t) stk[-1];
  uint32_t result = bn_testbit((bignum256 const *)arg1,arg2);
  Npop(2);
  Push = (stackitem)result;
}


void _wrap_bn_xor() {
  Sl(3);
  Hpc(stk[-3]);
  bignum256 *arg1 = (bignum256 *) stk[-3];
  Hpc(stk[-2]);
  bignum256 *arg2 = (bignum256 *) stk[-2];
  Hpc(stk[-1]);
  bignum256 *arg3 = (bignum256 *) stk[-1];
  bn_xor(arg1,(bignum256 const *)arg2,(bignum256 const *)arg3);
  Npop(3);
}


void _wrap_bn_mult_half() {
  Sl(2);
  Hpc(stk[-2]);
  bignum256 *arg1 = (bignum256 *) stk[-2];
  Hpc(stk[-1]);
  bignum256 *arg2 = (bignum256 *) stk[-1];
  bn_mult_half(arg1,(bignum256 const *)arg2);
  Npop(2);
}


void _wrap_bn_mult_k() {
  Sl(3);
  Hpc(stk[-3]);
  bignum256 *arg1 = (bignum256 *) stk[-3];
  uint8_t arg2 = (uint8_t) stk[-2];
  Hpc(stk[-1]);
  bignum256 *arg3 = (bignum256 *) stk[-1];
  bn_mult_k(arg1,arg2,(bignum256 const *)arg3);
  Npop(3);
}


void _wrap_bn_mod() {
  Sl(2);
  Hpc(stk[-2]);
  bignum256 *arg1 = (bignum256 *) stk[-2];
  Hpc(stk[-1]);
  bignum256 *arg2 = (bignum256 *) stk[-1];
  bn_mod(arg1,(bignum256 const *)arg2);
  Npop(2);
}


void _wrap_bn_multiply() {
  Sl(3);
  Hpc(stk[-3]);
  bignum256 *arg1 = (bignum256 *) stk[-3];
  Hpc(stk[-2]);
  bignum256 *arg2 = (bignum256 *) stk[-2];
  Hpc(stk[-1]);
  bignum256 *arg3 = (bignum256 *) stk[-1];
  bn_multiply((bignum256 const *)arg1,arg2,(bignum256 const *)arg3);
  Npop(3);
}


void _wrap_bn_fast_mod() {
  Sl(2);
  Hpc(stk[-2]);
  bignum256 *arg1 = (bignum256 *) stk[-2];
  Hpc(stk[-1]);
  bignum256 *arg2 = (bignum256 *) stk[-1];
  bn_fast_mod(arg1,(bignum256 const *)arg2);
  Npop(2);
}


void _wrap_bn_power_mod() {
  Sl(4);
  Hpc(stk[-4]);
  bignum256 *arg1 = (bignum256 *) stk[-4];
  Hpc(stk[-3]);
  bignum256 *arg2 = (bignum256 *) stk[-3];
  Hpc(stk[-2]);
  bignum256 *arg3 = (bignum256 *) stk[-2];
  Hpc(stk[-1]);
  bignum256 *arg4 = (bignum256 *) stk[-1];
  bn_power_mod((bignum256 const *)arg1,(bignum256 const *)arg2,(bignum256 const *)arg3,arg4);
  Npop(4);
}


void _wrap_bn_sqrt() {
  Sl(2);
  Hpc(stk[-2]);
  bignum256 *arg1 = (bignum256 *) stk[-2];
  Hpc(stk[-1]);
  bignum256 *arg2 = (bignum256 *) stk[-1];
  bn_sqrt(arg1,(bignum256 const *)arg2);
  Npop(2);
}


void _wrap_inverse_mod_power_two() {
  Sl(2);
  uint32_t arg1 = (uint32_t) stk[-2];
  uint32_t arg2 = (uint32_t) stk[-1];
  uint32_t result = inverse_mod_power_two(arg1,arg2);
  Npop(2);
  Push = (stackitem)result;
}


void _wrap_bn_divide_base() {
  Sl(2);
  Hpc(stk[-2]);
  bignum256 *arg1 = (bignum256 *) stk[-2];
  Hpc(stk[-1]);
  bignum256 *arg2 = (bignum256 *) stk[-1];
  bn_divide_base(arg1,(bignum256 const *)arg2);
  Npop(2);
}


void _wrap_bn_inverse_slow() {
  Sl(2);
  Hpc(stk[-2]);
  bignum256 *arg1 = (bignum256 *) stk[-2];
  Hpc(stk[-1]);
  bignum256 *arg2 = (bignum256 *) stk[-1];
  bn_inverse_slow(arg1,(bignum256 const *)arg2);
  Npop(2);
}


void _wrap_bn_normalize() {
  Sl(1);
  Hpc(stk[-1]);
  bignum256 *arg1 = (bignum256 *) stk[-1];
  bn_normalize(arg1);
  Npop(1);
}


void _wrap_bn_add() {
  Sl(2);
  Hpc(stk[-2]);
  bignum256 *arg1 = (bignum256 *) stk[-2];
  Hpc(stk[-1]);
  bignum256 *arg2 = (bignum256 *) stk[-1];
  bn_add(arg1,(bignum256 const *)arg2);
  Npop(2);
}


void _wrap_bn_addmod() {
  Sl(3);
  Hpc(stk[-3]);
  bignum256 *arg1 = (bignum256 *) stk[-3];
  Hpc(stk[-2]);
  bignum256 *arg2 = (bignum256 *) stk[-2];
  Hpc(stk[-1]);
  bignum256 *arg3 = (bignum256 *) stk[-1];
  bn_addmod(arg1,(bignum256 const *)arg2,(bignum256 const *)arg3);
  Npop(3);
}


void _wrap_bn_addi() {
  Sl(2);
  Hpc(stk[-2]);
  bignum256 *arg1 = (bignum256 *) stk[-2];
  uint32_t arg2 = (uint32_t) stk[-1];
  bn_addi(arg1,arg2);
  Npop(2);
}


void _wrap_bn_subi() {
  Sl(3);
  Hpc(stk[-3]);
  bignum256 *arg1 = (bignum256 *) stk[-3];
  uint32_t arg2 = (uint32_t) stk[-2];
  Hpc(stk[-1]);
  bignum256 *arg3 = (bignum256 *) stk[-1];
  bn_subi(arg1,arg2,(bignum256 const *)arg3);
  Npop(3);
}


void _wrap_bn_subtractmod() {
  Sl(4);
  Hpc(stk[-4]);
  bignum256 *arg1 = (bignum256 *) stk[-4];
  Hpc(stk[-3]);
  bignum256 *arg2 = (bignum256 *) stk[-3];
  Hpc(stk[-2]);
  bignum256 *arg3 = (bignum256 *) stk[-2];
  Hpc(stk[-1]);
  bignum256 *arg4 = (bignum256 *) stk[-1];
  bn_subtractmod((bignum256 const *)arg1,(bignum256 const *)arg2,arg3,(bignum256 const *)arg4);
  Npop(4);
}


void _wrap_bn_subtract() {
  Sl(3);
  Hpc(stk[-3]);
  bignum256 *arg1 = (bignum256 *) stk[-3];
  Hpc(stk[-2]);
  bignum256 *arg2 = (bignum256 *) stk[-2];
  Hpc(stk[-1]);
  bignum256 *arg3 = (bignum256 *) stk[-1];
  bn_subtract((bignum256 const *)arg1,(bignum256 const *)arg2,arg3);
  Npop(3);
}


void _wrap_bn_long_division() {
  Sl(4);
  Hpc(stk[-4]);
  bignum256 *arg1 = (bignum256 *) stk[-4];
  uint32_t arg2 = (uint32_t) stk[-3];
  Hpc(stk[-2]);
  bignum256 *arg3 = (bignum256 *) stk[-2];
  Hpc(stk[-1]);
  uint32_t *arg4 = (uint32_t *) stk[-1];
  bn_long_division(arg1,arg2,arg3,arg4);
  Npop(4);
}


void _wrap_bn_divmod58() {
  Sl(2);
  Hpc(stk[-2]);
  bignum256 *arg1 = (bignum256 *) stk[-2];
  Hpc(stk[-1]);
  uint32_t *arg2 = (uint32_t *) stk[-1];
  bn_divmod58(arg1,arg2);
  Npop(2);
}


void _wrap_bn_divmod1000() {
  Sl(2);
  Hpc(stk[-2]);
  bignum256 *arg1 = (bignum256 *) stk[-2];
  Hpc(stk[-1]);
  uint32_t *arg2 = (uint32_t *) stk[-1];
  bn_divmod1000(arg1,arg2);
  Npop(2);
}


void _wrap_bn_inverse() {
  Sl(2);
  Hpc(stk[-2]);
  bignum256 *arg1 = (bignum256 *) stk[-2];
  Hpc(stk[-1]);
  bignum256 *arg2 = (bignum256 *) stk[-1];
  bn_inverse(arg1,(bignum256 const *)arg2);
  Npop(2);
}


void _wrap_bn_format() {
  Sl(8);
  Hpc(stk[-8]);
  bignum256 *arg1 = (bignum256 *) stk[-8];
  char *arg2 = (char *) stk[-7];
  char *arg3 = (char *) stk[-6];
  unsigned int arg4 = (unsigned int) stk[-5];
  int arg5 = (int) stk[-4];
  bool arg6 = (bool) stk[-3];
  char *arg7 = (char *) stk[-2];
  size_t arg8 = (size_t) stk[-1];
  size_t result = bn_format((bignum256 const *)arg1,(char const *)arg2,(char const *)arg3,arg4,arg5,arg6,arg7,arg8);
  Npop(8);
  Push = (stackitem)result;
}


struct primfcn bignum_fcns[] = {
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
	{"0BN_FAST_MOD", _wrap_bn_fast_mod},
	{"0BN_POWER_MOD", _wrap_bn_power_mod},
	{"0BN_SQRT", _wrap_bn_sqrt},
	{"0INVERSE_MOD_POWER_TWO", _wrap_inverse_mod_power_two},
	{"0BN_DIVIDE_BASE", _wrap_bn_divide_base},
	{"0BN_INVERSE_SLOW", _wrap_bn_inverse_slow},
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
{NULL, (codeptr)0}};

