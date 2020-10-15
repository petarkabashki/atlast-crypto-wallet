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

#include "../../crypto/ecdsa.h"

#include "ecdsa_wrap.h"
 
void _wrap_point_copy() {
  Sl(2);
  Hpc(stk[-2]);
  curve_point *arg1 = (curve_point *) stk[-2];
  Hpc(stk[-1]);
  curve_point *arg2 = (curve_point *) stk[-1];
  point_copy((curve_point const *)arg1,arg2);
  Npop(2);
}


void _wrap_point_add() {
  Sl(3);
  Hpc(stk[-3]);
  ecdsa_curve *arg1 = (ecdsa_curve *) stk[-3];
  Hpc(stk[-2]);
  curve_point *arg2 = (curve_point *) stk[-2];
  Hpc(stk[-1]);
  curve_point *arg3 = (curve_point *) stk[-1];
  point_add((ecdsa_curve const *)arg1,(curve_point const *)arg2,arg3);
  Npop(3);
}


void _wrap_point_double() {
  Sl(2);
  Hpc(stk[-2]);
  ecdsa_curve *arg1 = (ecdsa_curve *) stk[-2];
  Hpc(stk[-1]);
  curve_point *arg2 = (curve_point *) stk[-1];
  point_double((ecdsa_curve const *)arg1,arg2);
  Npop(2);
}


void _wrap_point_multiply() {
  Sl(4);
  Hpc(stk[-4]);
  ecdsa_curve *arg1 = (ecdsa_curve *) stk[-4];
  Hpc(stk[-3]);
  bignum256 *arg2 = (bignum256 *) stk[-3];
  Hpc(stk[-2]);
  curve_point *arg3 = (curve_point *) stk[-2];
  Hpc(stk[-1]);
  curve_point *arg4 = (curve_point *) stk[-1];
  point_multiply((ecdsa_curve const *)arg1,(bignum256 const *)arg2,(curve_point const *)arg3,arg4);
  Npop(4);
}


void _wrap_point_set_infinity() {
  Sl(1);
  Hpc(stk[-1]);
  curve_point *arg1 = (curve_point *) stk[-1];
  point_set_infinity(arg1);
  Npop(1);
}


void _wrap_point_is_infinity() {
  Sl(1);
  Hpc(stk[-1]);
  curve_point *arg1 = (curve_point *) stk[-1];
  int result = (int)point_is_infinity((curve_point const *)arg1);
  Npop(1);
  Push = (stackitem)result;
}


void _wrap_point_is_equal() {
  Sl(2);
  Hpc(stk[-2]);
  curve_point *arg1 = (curve_point *) stk[-2];
  Hpc(stk[-1]);
  curve_point *arg2 = (curve_point *) stk[-1];
  int result = (int)point_is_equal((curve_point const *)arg1,(curve_point const *)arg2);
  Npop(2);
  Push = (stackitem)result;
}


void _wrap_point_is_negative_of() {
  Sl(2);
  Hpc(stk[-2]);
  curve_point *arg1 = (curve_point *) stk[-2];
  Hpc(stk[-1]);
  curve_point *arg2 = (curve_point *) stk[-1];
  int result = (int)point_is_negative_of((curve_point const *)arg1,(curve_point const *)arg2);
  Npop(2);
  Push = (stackitem)result;
}


void _wrap_scalar_multiply() {
  Sl(3);
  Hpc(stk[-3]);
  ecdsa_curve *arg1 = (ecdsa_curve *) stk[-3];
  Hpc(stk[-2]);
  bignum256 *arg2 = (bignum256 *) stk[-2];
  Hpc(stk[-1]);
  curve_point *arg3 = (curve_point *) stk[-1];
  scalar_multiply((ecdsa_curve const *)arg1,(bignum256 const *)arg2,arg3);
  Npop(3);
}


void _wrap_ecdh_multiply() {
  Sl(4);
  Hpc(stk[-4]);
  ecdsa_curve *arg1 = (ecdsa_curve *) stk[-4];
  Hpc(stk[-3]);
  uint8_t *arg2 = (uint8_t *) stk[-3];
  Hpc(stk[-2]);
  uint8_t *arg3 = (uint8_t *) stk[-2];
  Hpc(stk[-1]);
  uint8_t *arg4 = (uint8_t *) stk[-1];
  int result = (int)ecdh_multiply((ecdsa_curve const *)arg1,(uint8_t const *)arg2,(uint8_t const *)arg3,arg4);
  Npop(4);
  Push = (stackitem)result;
}


void _wrap_compress_coords() {
  Sl(2);
  Hpc(stk[-2]);
  curve_point *arg1 = (curve_point *) stk[-2];
  Hpc(stk[-1]);
  uint8_t *arg2 = (uint8_t *) stk[-1];
  compress_coords((curve_point const *)arg1,arg2);
  Npop(2);
}


void _wrap_uncompress_coords() {
  Sl(4);
  Hpc(stk[-4]);
  ecdsa_curve *arg1 = (ecdsa_curve *) stk[-4];
  uint8_t arg2 = (uint8_t) stk[-3];
  Hpc(stk[-2]);
  bignum256 *arg3 = (bignum256 *) stk[-2];
  Hpc(stk[-1]);
  bignum256 *arg4 = (bignum256 *) stk[-1];
  uncompress_coords((ecdsa_curve const *)arg1,arg2,(bignum256 const *)arg3,arg4);
  Npop(4);
}


void _wrap_ecdsa_uncompress_pubkey() {
  Sl(3);
  Hpc(stk[-3]);
  ecdsa_curve *arg1 = (ecdsa_curve *) stk[-3];
  Hpc(stk[-2]);
  uint8_t *arg2 = (uint8_t *) stk[-2];
  Hpc(stk[-1]);
  uint8_t *arg3 = (uint8_t *) stk[-1];
  int result = (int)ecdsa_uncompress_pubkey((ecdsa_curve const *)arg1,(uint8_t const *)arg2,arg3);
  Npop(3);
  Push = (stackitem)result;
}


void _wrap_ecdsa_sign() {
  Sl(8);
  Hpc(stk[-8]);
  ecdsa_curve *arg1 = (ecdsa_curve *) stk[-8];
  HasherType arg2 = (HasherType) stk[-7];
  Hpc(stk[-6]);
  uint8_t *arg3 = (uint8_t *) stk[-6];
  Hpc(stk[-5]);
  uint8_t *arg4 = (uint8_t *) stk[-5];
  uint32_t arg5 = (uint32_t) stk[-4];
  Hpc(stk[-3]);
  uint8_t *arg6 = (uint8_t *) stk[-3];
  Hpc(stk[-2]);
  uint8_t *arg7 = (uint8_t *) stk[-2];
  Hpc(stk[-1]);
  int (*arg8)(uint8_t,uint8_t [64]) = (int (*)(uint8_t,uint8_t [64])) stk[-1];
  int result = (int)ecdsa_sign((ecdsa_curve const *)arg1,arg2,(uint8_t const *)arg3,(uint8_t const *)arg4,arg5,arg6,arg7,arg8);
  Npop(8);
  Push = (stackitem)result;
}


void _wrap_ecdsa_sign_digest() {
  Sl(6);
  Hpc(stk[-6]);
  ecdsa_curve *arg1 = (ecdsa_curve *) stk[-6];
  Hpc(stk[-5]);
  uint8_t *arg2 = (uint8_t *) stk[-5];
  Hpc(stk[-4]);
  uint8_t *arg3 = (uint8_t *) stk[-4];
  Hpc(stk[-3]);
  uint8_t *arg4 = (uint8_t *) stk[-3];
  Hpc(stk[-2]);
  uint8_t *arg5 = (uint8_t *) stk[-2];
  Hpc(stk[-1]);
  int (*arg6)(uint8_t,uint8_t [64]) = (int (*)(uint8_t,uint8_t [64])) stk[-1];
  int result = (int)ecdsa_sign_digest((ecdsa_curve const *)arg1,(uint8_t const *)arg2,(uint8_t const *)arg3,arg4,arg5,arg6);
  Npop(6);
  Push = (stackitem)result;
}


void _wrap_ecdsa_get_public_key33() {
  Sl(3);
  Hpc(stk[-3]);
  ecdsa_curve *arg1 = (ecdsa_curve *) stk[-3];
  Hpc(stk[-2]);
  uint8_t *arg2 = (uint8_t *) stk[-2];
  Hpc(stk[-1]);
  uint8_t *arg3 = (uint8_t *) stk[-1];
  ecdsa_get_public_key33((ecdsa_curve const *)arg1,(uint8_t const *)arg2,arg3);
  Npop(3);
}


void _wrap_ecdsa_get_public_key65() {
  Sl(3);
  Hpc(stk[-3]);
  ecdsa_curve *arg1 = (ecdsa_curve *) stk[-3];
  Hpc(stk[-2]);
  uint8_t *arg2 = (uint8_t *) stk[-2];
  Hpc(stk[-1]);
  uint8_t *arg3 = (uint8_t *) stk[-1];
  ecdsa_get_public_key65((ecdsa_curve const *)arg1,(uint8_t const *)arg2,arg3);
  Npop(3);
}


void _wrap_ecdsa_get_pubkeyhash() {
  Sl(3);
  Hpc(stk[-3]);
  uint8_t *arg1 = (uint8_t *) stk[-3];
  HasherType arg2 = (HasherType) stk[-2];
  Hpc(stk[-1]);
  uint8_t *arg3 = (uint8_t *) stk[-1];
  ecdsa_get_pubkeyhash((uint8_t const *)arg1,arg2,arg3);
  Npop(3);
}


void _wrap_ecdsa_get_address_raw() {
  Sl(4);
  Hpc(stk[-4]);
  uint8_t *arg1 = (uint8_t *) stk[-4];
  uint32_t arg2 = (uint32_t) stk[-3];
  HasherType arg3 = (HasherType) stk[-2];
  Hpc(stk[-1]);
  uint8_t *arg4 = (uint8_t *) stk[-1];
  ecdsa_get_address_raw((uint8_t const *)arg1,arg2,arg3,arg4);
  Npop(4);
}


void _wrap_ecdsa_get_address() {
  Sl(6);
  Hpc(stk[-6]);
  uint8_t *arg1 = (uint8_t *) stk[-6];
  uint32_t arg2 = (uint32_t) stk[-5];
  HasherType arg3 = (HasherType) stk[-4];
  HasherType arg4 = (HasherType) stk[-3];
  char *arg5 = (char *) stk[-2];
  int arg6 = (int) stk[-1];
  ecdsa_get_address((uint8_t const *)arg1,arg2,arg3,arg4,arg5,arg6);
  Npop(6);
}


void _wrap_ecdsa_get_address_segwit_p2sh_raw() {
  Sl(4);
  Hpc(stk[-4]);
  uint8_t *arg1 = (uint8_t *) stk[-4];
  uint32_t arg2 = (uint32_t) stk[-3];
  HasherType arg3 = (HasherType) stk[-2];
  Hpc(stk[-1]);
  uint8_t *arg4 = (uint8_t *) stk[-1];
  ecdsa_get_address_segwit_p2sh_raw((uint8_t const *)arg1,arg2,arg3,arg4);
  Npop(4);
}


void _wrap_ecdsa_get_address_segwit_p2sh() {
  Sl(6);
  Hpc(stk[-6]);
  uint8_t *arg1 = (uint8_t *) stk[-6];
  uint32_t arg2 = (uint32_t) stk[-5];
  HasherType arg3 = (HasherType) stk[-4];
  HasherType arg4 = (HasherType) stk[-3];
  char *arg5 = (char *) stk[-2];
  int arg6 = (int) stk[-1];
  ecdsa_get_address_segwit_p2sh((uint8_t const *)arg1,arg2,arg3,arg4,arg5,arg6);
  Npop(6);
}


void _wrap_ecdsa_get_wif() {
  Sl(5);
  Hpc(stk[-5]);
  uint8_t *arg1 = (uint8_t *) stk[-5];
  uint32_t arg2 = (uint32_t) stk[-4];
  HasherType arg3 = (HasherType) stk[-3];
  char *arg4 = (char *) stk[-2];
  int arg5 = (int) stk[-1];
  ecdsa_get_wif((uint8_t const *)arg1,arg2,arg3,arg4,arg5);
  Npop(5);
}


void _wrap_ecdsa_address_decode() {
  Sl(4);
  char *arg1 = (char *) stk[-4];
  uint32_t arg2 = (uint32_t) stk[-3];
  HasherType arg3 = (HasherType) stk[-2];
  Hpc(stk[-1]);
  uint8_t *arg4 = (uint8_t *) stk[-1];
  int result = (int)ecdsa_address_decode((char const *)arg1,arg2,arg3,arg4);
  Npop(4);
  Push = (stackitem)result;
}


void _wrap_ecdsa_read_pubkey() {
  Sl(3);
  Hpc(stk[-3]);
  ecdsa_curve *arg1 = (ecdsa_curve *) stk[-3];
  Hpc(stk[-2]);
  uint8_t *arg2 = (uint8_t *) stk[-2];
  Hpc(stk[-1]);
  curve_point *arg3 = (curve_point *) stk[-1];
  int result = (int)ecdsa_read_pubkey((ecdsa_curve const *)arg1,(uint8_t const *)arg2,arg3);
  Npop(3);
  Push = (stackitem)result;
}


void _wrap_ecdsa_validate_pubkey() {
  Sl(2);
  Hpc(stk[-2]);
  ecdsa_curve *arg1 = (ecdsa_curve *) stk[-2];
  Hpc(stk[-1]);
  curve_point *arg2 = (curve_point *) stk[-1];
  int result = (int)ecdsa_validate_pubkey((ecdsa_curve const *)arg1,(curve_point const *)arg2);
  Npop(2);
  Push = (stackitem)result;
}


void _wrap_ecdsa_verify() {
  Sl(6);
  Hpc(stk[-6]);
  ecdsa_curve *arg1 = (ecdsa_curve *) stk[-6];
  HasherType arg2 = (HasherType) stk[-5];
  Hpc(stk[-4]);
  uint8_t *arg3 = (uint8_t *) stk[-4];
  Hpc(stk[-3]);
  uint8_t *arg4 = (uint8_t *) stk[-3];
  Hpc(stk[-2]);
  uint8_t *arg5 = (uint8_t *) stk[-2];
  uint32_t arg6 = (uint32_t) stk[-1];
  int result = (int)ecdsa_verify((ecdsa_curve const *)arg1,arg2,(uint8_t const *)arg3,(uint8_t const *)arg4,(uint8_t const *)arg5,arg6);
  Npop(6);
  Push = (stackitem)result;
}


void _wrap_ecdsa_verify_digest() {
  Sl(4);
  Hpc(stk[-4]);
  ecdsa_curve *arg1 = (ecdsa_curve *) stk[-4];
  Hpc(stk[-3]);
  uint8_t *arg2 = (uint8_t *) stk[-3];
  Hpc(stk[-2]);
  uint8_t *arg3 = (uint8_t *) stk[-2];
  Hpc(stk[-1]);
  uint8_t *arg4 = (uint8_t *) stk[-1];
  int result = (int)ecdsa_verify_digest((ecdsa_curve const *)arg1,(uint8_t const *)arg2,(uint8_t const *)arg3,(uint8_t const *)arg4);
  Npop(4);
  Push = (stackitem)result;
}


void _wrap_ecdsa_recover_pub_from_sig() {
  Sl(5);
  Hpc(stk[-5]);
  ecdsa_curve *arg1 = (ecdsa_curve *) stk[-5];
  Hpc(stk[-4]);
  uint8_t *arg2 = (uint8_t *) stk[-4];
  Hpc(stk[-3]);
  uint8_t *arg3 = (uint8_t *) stk[-3];
  Hpc(stk[-2]);
  uint8_t *arg4 = (uint8_t *) stk[-2];
  int arg5 = (int) stk[-1];
  int result = (int)ecdsa_recover_pub_from_sig((ecdsa_curve const *)arg1,arg2,(uint8_t const *)arg3,(uint8_t const *)arg4,arg5);
  Npop(5);
  Push = (stackitem)result;
}


void _wrap_ecdsa_sig_to_der() {
  Sl(2);
  Hpc(stk[-2]);
  uint8_t *arg1 = (uint8_t *) stk[-2];
  Hpc(stk[-1]);
  uint8_t *arg2 = (uint8_t *) stk[-1];
  int result = (int)ecdsa_sig_to_der((uint8_t const *)arg1,arg2);
  Npop(2);
  Push = (stackitem)result;
}


struct primfcn ecdsa_fcns[] = {
	{"0POINT_COPY", _wrap_point_copy},
	{"0POINT_ADD", _wrap_point_add},
	{"0POINT_DOUBLE", _wrap_point_double},
	{"0POINT_MULTIPLY", _wrap_point_multiply},
	{"0POINT_SET_INFINITY", _wrap_point_set_infinity},
	{"0POINT_IS_INFINITY", _wrap_point_is_infinity},
	{"0POINT_IS_EQUAL", _wrap_point_is_equal},
	{"0POINT_IS_NEGATIVE_OF", _wrap_point_is_negative_of},
	{"0SCALAR_MULTIPLY", _wrap_scalar_multiply},
	{"0ECDH_MULTIPLY", _wrap_ecdh_multiply},
	{"0COMPRESS_COORDS", _wrap_compress_coords},
	{"0UNCOMPRESS_COORDS", _wrap_uncompress_coords},
	{"0ECDSA_UNCOMPRESS_PUBKEY", _wrap_ecdsa_uncompress_pubkey},
	{"0ECDSA_SIGN", _wrap_ecdsa_sign},
	{"0ECDSA_SIGN_DIGEST", _wrap_ecdsa_sign_digest},
	{"0ECDSA_GET_PUBLIC_KEY33", _wrap_ecdsa_get_public_key33},
	{"0ECDSA_GET_PUBLIC_KEY65", _wrap_ecdsa_get_public_key65},
	{"0ECDSA_GET_PUBKEYHASH", _wrap_ecdsa_get_pubkeyhash},
	{"0ECDSA_GET_ADDRESS_RAW", _wrap_ecdsa_get_address_raw},
	{"0ECDSA_GET_ADDRESS", _wrap_ecdsa_get_address},
	{"0ECDSA_GET_ADDRESS_SEGWIT_P2SH_RAW", _wrap_ecdsa_get_address_segwit_p2sh_raw},
	{"0ECDSA_GET_ADDRESS_SEGWIT_P2SH", _wrap_ecdsa_get_address_segwit_p2sh},
	{"0ECDSA_GET_WIF", _wrap_ecdsa_get_wif},
	{"0ECDSA_ADDRESS_DECODE", _wrap_ecdsa_address_decode},
	{"0ECDSA_READ_PUBKEY", _wrap_ecdsa_read_pubkey},
	{"0ECDSA_VALIDATE_PUBKEY", _wrap_ecdsa_validate_pubkey},
	{"0ECDSA_VERIFY", _wrap_ecdsa_verify},
	{"0ECDSA_VERIFY_DIGEST", _wrap_ecdsa_verify_digest},
	{"0ECDSA_RECOVER_PUB_FROM_SIG", _wrap_ecdsa_recover_pub_from_sig},
	{"0ECDSA_SIG_TO_DER", _wrap_ecdsa_sig_to_der},
{NULL, (codeptr)0}};

