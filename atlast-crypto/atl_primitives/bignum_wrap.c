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
  Hpc(S0);
  uint8_t *arg1 = (uint8_t *) S0;
  Hpc(S1);
  bignum256 *arg2 = (bignum256 *) S1;
  bn_read_be((uint8_t const *)arg1,arg2);
  Npop(2);
}


void _wrap_bn_write_be() {
  Sl(2);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  Hpc(S1);
  uint8_t *arg2 = (uint8_t *) S1;
  bn_write_be((bignum256 const *)arg1,arg2);
  Npop(2);
}


void _wrap_bn_read_le() {
  Sl(2);
  Hpc(S0);
  uint8_t *arg1 = (uint8_t *) S0;
  Hpc(S1);
  bignum256 *arg2 = (bignum256 *) S1;
  bn_read_le((uint8_t const *)arg1,arg2);
  Npop(2);
}


void _wrap_bn_write_le() {
  Sl(2);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  Hpc(S1);
  uint8_t *arg2 = (uint8_t *) S1;
  bn_write_le((bignum256 const *)arg1,arg2);
  Npop(2);
}


void _wrap_bn_read_uint32() {
  Sl(2);
  uint32_t arg1 = (uint32_t) S0;
  Hpc(S1);
  bignum256 *arg2 = (bignum256 *) S1;
  bn_read_uint32(arg1,arg2);
  Npop(2);
}


void _wrap_bn_read_uint64() {
  Sl(2);
  uint64_t arg1 = (uint64_t) S0;
  Hpc(S1);
  bignum256 *arg2 = (bignum256 *) S1;
  bn_read_uint64(arg1,arg2);
  Npop(2);
}


void _wrap_bn_bitcount() {
  Sl(1);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  int result = (int)bn_bitcount((bignum256 const *)arg1);
  Npop(1);
  Push = (stackitem)result;
}


void _wrap_bn_digitcount() {
  Sl(1);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  unsigned int result = (unsigned int)bn_digitcount((bignum256 const *)arg1);
  Npop(1);
  Push = (stackitem)result;
}


void _wrap_bn_zero() {
  Sl(1);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  bn_zero(arg1);
  Npop(1);
}


void _wrap_bn_one() {
  Sl(1);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  bn_one(arg1);
  Npop(1);
}


void _wrap_bn_is_zero() {
  Sl(1);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  int result = (int)bn_is_zero((bignum256 const *)arg1);
  Npop(1);
  Push = (stackitem)result;
}


void _wrap_bn_is_one() {
  Sl(1);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  int result = (int)bn_is_one((bignum256 const *)arg1);
  Npop(1);
  Push = (stackitem)result;
}


void _wrap_bn_is_less() {
  Sl(2);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  Hpc(S1);
  bignum256 *arg2 = (bignum256 *) S1;
  int result = (int)bn_is_less((bignum256 const *)arg1,(bignum256 const *)arg2);
  Npop(2);
  Push = (stackitem)result;
}


void _wrap_bn_is_equal() {
  Sl(2);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  Hpc(S1);
  bignum256 *arg2 = (bignum256 *) S1;
  int result = (int)bn_is_equal((bignum256 const *)arg1,(bignum256 const *)arg2);
  Npop(2);
  Push = (stackitem)result;
}


void _wrap_bn_cmov() {
  Sl(4);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  uint32_t arg2 = (uint32_t) (uint32_t)S1;
  Hpc(S2);
  bignum256 *arg3 = (bignum256 *) S2;
  Hpc(S3);
  bignum256 *arg4 = (bignum256 *) S3;
  bn_cmov(arg1,(uint32_t volatile )arg2,(bignum256 const *)arg3,(bignum256 const *)arg4);
  Npop(4);
}


void _wrap_bn_cnegate() {
  Sl(3);
  uint32_t arg1 = (uint32_t) (uint32_t)S0;
  Hpc(S1);
  bignum256 *arg2 = (bignum256 *) S1;
  Hpc(S2);
  bignum256 *arg3 = (bignum256 *) S2;
  bn_cnegate((uint32_t volatile )arg1,arg2,(bignum256 const *)arg3);
  Npop(3);
}


void _wrap_bn_lshift() {
  Sl(1);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  bn_lshift(arg1);
  Npop(1);
}


void _wrap_bn_rshift() {
  Sl(1);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  bn_rshift(arg1);
  Npop(1);
}


void _wrap_bn_setbit() {
  Sl(2);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  uint16_t arg2 = (uint16_t) S1;
  bn_setbit(arg1,arg2);
  Npop(2);
}


void _wrap_bn_clearbit() {
  Sl(2);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  uint16_t arg2 = (uint16_t) S1;
  bn_clearbit(arg1,arg2);
  Npop(2);
}


void _wrap_bn_testbit() {
  Sl(2);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  uint16_t arg2 = (uint16_t) S1;
  uint32_t result = bn_testbit((bignum256 const *)arg1,arg2);
  Npop(2);
  Push = (stackitem)result;
}


void _wrap_bn_xor() {
  Sl(3);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  Hpc(S1);
  bignum256 *arg2 = (bignum256 *) S1;
  Hpc(S2);
  bignum256 *arg3 = (bignum256 *) S2;
  bn_xor(arg1,(bignum256 const *)arg2,(bignum256 const *)arg3);
  Npop(3);
}


void _wrap_bn_mult_half() {
  Sl(2);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  Hpc(S1);
  bignum256 *arg2 = (bignum256 *) S1;
  bn_mult_half(arg1,(bignum256 const *)arg2);
  Npop(2);
}


void _wrap_bn_mult_k() {
  Sl(3);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  uint8_t arg2 = (uint8_t) S1;
  Hpc(S2);
  bignum256 *arg3 = (bignum256 *) S2;
  bn_mult_k(arg1,arg2,(bignum256 const *)arg3);
  Npop(3);
}


void _wrap_bn_mod() {
  Sl(2);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  Hpc(S1);
  bignum256 *arg2 = (bignum256 *) S1;
  bn_mod(arg1,(bignum256 const *)arg2);
  Npop(2);
}


void _wrap_bn_multiply() {
  Sl(3);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  Hpc(S1);
  bignum256 *arg2 = (bignum256 *) S1;
  Hpc(S2);
  bignum256 *arg3 = (bignum256 *) S2;
  bn_multiply((bignum256 const *)arg1,arg2,(bignum256 const *)arg3);
  Npop(3);
}


void _wrap_bn_fast_mod() {
  Sl(2);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  Hpc(S1);
  bignum256 *arg2 = (bignum256 *) S1;
  bn_fast_mod(arg1,(bignum256 const *)arg2);
  Npop(2);
}


void _wrap_bn_power_mod() {
  Sl(4);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  Hpc(S1);
  bignum256 *arg2 = (bignum256 *) S1;
  Hpc(S2);
  bignum256 *arg3 = (bignum256 *) S2;
  Hpc(S3);
  bignum256 *arg4 = (bignum256 *) S3;
  bn_power_mod((bignum256 const *)arg1,(bignum256 const *)arg2,(bignum256 const *)arg3,arg4);
  Npop(4);
}


void _wrap_bn_sqrt() {
  Sl(2);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  Hpc(S1);
  bignum256 *arg2 = (bignum256 *) S1;
  bn_sqrt(arg1,(bignum256 const *)arg2);
  Npop(2);
}


void _wrap_inverse_mod_power_two() {
  Sl(2);
  uint32_t arg1 = (uint32_t) S0;
  uint32_t arg2 = (uint32_t) S1;
  uint32_t result = inverse_mod_power_two(arg1,arg2);
  Npop(2);
  Push = (stackitem)result;
}


void _wrap_bn_divide_base() {
  Sl(2);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  Hpc(S1);
  bignum256 *arg2 = (bignum256 *) S1;
  bn_divide_base(arg1,(bignum256 const *)arg2);
  Npop(2);
}


void _wrap_bn_inverse_slow() {
  Sl(2);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  Hpc(S1);
  bignum256 *arg2 = (bignum256 *) S1;
  bn_inverse_slow(arg1,(bignum256 const *)arg2);
  Npop(2);
}


void _wrap_bn_normalize() {
  Sl(1);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  bn_normalize(arg1);
  Npop(1);
}


void _wrap_bn_add() {
  Sl(2);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  Hpc(S1);
  bignum256 *arg2 = (bignum256 *) S1;
  bn_add(arg1,(bignum256 const *)arg2);
  Npop(2);
}


void _wrap_bn_addmod() {
  Sl(3);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  Hpc(S1);
  bignum256 *arg2 = (bignum256 *) S1;
  Hpc(S2);
  bignum256 *arg3 = (bignum256 *) S2;
  bn_addmod(arg1,(bignum256 const *)arg2,(bignum256 const *)arg3);
  Npop(3);
}


void _wrap_bn_addi() {
  Sl(2);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  uint32_t arg2 = (uint32_t) S1;
  bn_addi(arg1,arg2);
  Npop(2);
}


void _wrap_bn_subi() {
  Sl(3);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  uint32_t arg2 = (uint32_t) S1;
  Hpc(S2);
  bignum256 *arg3 = (bignum256 *) S2;
  bn_subi(arg1,arg2,(bignum256 const *)arg3);
  Npop(3);
}


void _wrap_bn_subtractmod() {
  Sl(4);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  Hpc(S1);
  bignum256 *arg2 = (bignum256 *) S1;
  Hpc(S2);
  bignum256 *arg3 = (bignum256 *) S2;
  Hpc(S3);
  bignum256 *arg4 = (bignum256 *) S3;
  bn_subtractmod((bignum256 const *)arg1,(bignum256 const *)arg2,arg3,(bignum256 const *)arg4);
  Npop(4);
}


void _wrap_bn_subtract() {
  Sl(3);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  Hpc(S1);
  bignum256 *arg2 = (bignum256 *) S1;
  Hpc(S2);
  bignum256 *arg3 = (bignum256 *) S2;
  bn_subtract((bignum256 const *)arg1,(bignum256 const *)arg2,arg3);
  Npop(3);
}


void _wrap_bn_long_division() {
  Sl(4);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  uint32_t arg2 = (uint32_t) S1;
  Hpc(S2);
  bignum256 *arg3 = (bignum256 *) S2;
  Hpc(S3);
  uint32_t *arg4 = (uint32_t *) S3;
  bn_long_division(arg1,arg2,arg3,arg4);
  Npop(4);
}


void _wrap_bn_divmod58() {
  Sl(2);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  Hpc(S1);
  uint32_t *arg2 = (uint32_t *) S1;
  bn_divmod58(arg1,arg2);
  Npop(2);
}


void _wrap_bn_divmod1000() {
  Sl(2);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  Hpc(S1);
  uint32_t *arg2 = (uint32_t *) S1;
  bn_divmod1000(arg1,arg2);
  Npop(2);
}


void _wrap_bn_inverse() {
  Sl(2);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  Hpc(S1);
  bignum256 *arg2 = (bignum256 *) S1;
  bn_inverse(arg1,(bignum256 const *)arg2);
  Npop(2);
}


void _wrap_bn_format() {
  Sl(8);
  Hpc(S0);
  bignum256 *arg1 = (bignum256 *) S0;
  char *arg2 = (char *) S1;
  char *arg3 = (char *) S2;
  unsigned int arg4 = (unsigned int) S3;
  int arg5 = (int) S4;
  bool arg6 = (bool) S5;
  char *arg7 = (char *) S6;
  size_t arg8 = (size_t) S7;
  size_t result = bn_format((bignum256 const *)arg1,(char const *)arg2,(char const *)arg3,arg4,arg5,arg6,arg7,arg8);
  Npop(8);
  Push = (stackitem)result;
}


struct primfcn bignum_fcns[] = {
	{"0bn_read_be", _wrap_bn_read_be},
	{"0bn_write_be", _wrap_bn_write_be},
	{"0bn_read_le", _wrap_bn_read_le},
	{"0bn_write_le", _wrap_bn_write_le},
	{"0bn_read_uint32", _wrap_bn_read_uint32},
	{"0bn_read_uint64", _wrap_bn_read_uint64},
	{"0bn_bitcount", _wrap_bn_bitcount},
	{"0bn_digitcount", _wrap_bn_digitcount},
	{"0bn_zero", _wrap_bn_zero},
	{"0bn_one", _wrap_bn_one},
	{"0bn_is_zero", _wrap_bn_is_zero},
	{"0bn_is_one", _wrap_bn_is_one},
	{"0bn_is_less", _wrap_bn_is_less},
	{"0bn_is_equal", _wrap_bn_is_equal},
	{"0bn_cmov", _wrap_bn_cmov},
	{"0bn_cnegate", _wrap_bn_cnegate},
	{"0bn_lshift", _wrap_bn_lshift},
	{"0bn_rshift", _wrap_bn_rshift},
	{"0bn_setbit", _wrap_bn_setbit},
	{"0bn_clearbit", _wrap_bn_clearbit},
	{"0bn_testbit", _wrap_bn_testbit},
	{"0bn_xor", _wrap_bn_xor},
	{"0bn_mult_half", _wrap_bn_mult_half},
	{"0bn_mult_k", _wrap_bn_mult_k},
	{"0bn_mod", _wrap_bn_mod},
	{"0bn_multiply", _wrap_bn_multiply},
	{"0bn_fast_mod", _wrap_bn_fast_mod},
	{"0bn_power_mod", _wrap_bn_power_mod},
	{"0bn_sqrt", _wrap_bn_sqrt},
	{"0inverse_mod_power_two", _wrap_inverse_mod_power_two},
	{"0bn_divide_base", _wrap_bn_divide_base},
	{"0bn_inverse_slow", _wrap_bn_inverse_slow},
	{"0bn_normalize", _wrap_bn_normalize},
	{"0bn_add", _wrap_bn_add},
	{"0bn_addmod", _wrap_bn_addmod},
	{"0bn_addi", _wrap_bn_addi},
	{"0bn_subi", _wrap_bn_subi},
	{"0bn_subtractmod", _wrap_bn_subtractmod},
	{"0bn_subtract", _wrap_bn_subtract},
	{"0bn_long_division", _wrap_bn_long_division},
	{"0bn_divmod58", _wrap_bn_divmod58},
	{"0bn_divmod1000", _wrap_bn_divmod1000},
	{"0bn_inverse", _wrap_bn_inverse},
	{"0bn_format", _wrap_bn_format},
{NULL, (codeptr)0}};

