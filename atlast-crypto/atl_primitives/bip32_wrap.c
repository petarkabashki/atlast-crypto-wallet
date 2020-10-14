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

#include "../../crypto/bip32.h"

#include "bip32_wrap.h"
 
void _wrap_hdnode_from_xpub() {
  Sl(6);
  uint32_t arg1 = (uint32_t) S0;
  uint32_t arg2 = (uint32_t) S1;
  Hpc(S2);
  uint8_t *arg3 = (uint8_t *) S2;
  Hpc(S3);
  uint8_t *arg4 = (uint8_t *) S3;
  char *arg5 = (char *) S4;
  Hpc(S5);
  HDNode *arg6 = (HDNode *) S5;
  int result = (int)hdnode_from_xpub(arg1,arg2,(uint8_t const *)arg3,(uint8_t const *)arg4,(char const *)arg5,arg6);
  Npop(6);
  Push = (stackitem)result;
}


void _wrap_hdnode_from_xprv() {
  Sl(6);
  uint32_t arg1 = (uint32_t) S0;
  uint32_t arg2 = (uint32_t) S1;
  Hpc(S2);
  uint8_t *arg3 = (uint8_t *) S2;
  Hpc(S3);
  uint8_t *arg4 = (uint8_t *) S3;
  char *arg5 = (char *) S4;
  Hpc(S5);
  HDNode *arg6 = (HDNode *) S5;
  int result = (int)hdnode_from_xprv(arg1,arg2,(uint8_t const *)arg3,(uint8_t const *)arg4,(char const *)arg5,arg6);
  Npop(6);
  Push = (stackitem)result;
}


void _wrap_hdnode_from_seed() {
  Sl(4);
  Hpc(S0);
  uint8_t *arg1 = (uint8_t *) S0;
  int arg2 = (int) S1;
  char *arg3 = (char *) S2;
  Hpc(S3);
  HDNode *arg4 = (HDNode *) S3;
  int result = (int)hdnode_from_seed((uint8_t const *)arg1,arg2,(char const *)arg3,arg4);
  Npop(4);
  Push = (stackitem)result;
}


void _wrap_hdnode_private_ckd() {
  Sl(2);
  Hpc(S0);
  HDNode *arg1 = (HDNode *) S0;
  uint32_t arg2 = (uint32_t) S1;
  int result = (int)hdnode_private_ckd(arg1,arg2);
  Npop(2);
  Push = (stackitem)result;
}


void _wrap_hdnode_public_ckd_cp() {
  Sl(6);
  Hpc(S0);
  ecdsa_curve *arg1 = (ecdsa_curve *) S0;
  Hpc(S1);
  curve_point *arg2 = (curve_point *) S1;
  Hpc(S2);
  uint8_t *arg3 = (uint8_t *) S2;
  uint32_t arg4 = (uint32_t) S3;
  Hpc(S4);
  curve_point *arg5 = (curve_point *) S4;
  Hpc(S5);
  uint8_t *arg6 = (uint8_t *) S5;
  int result = (int)hdnode_public_ckd_cp((ecdsa_curve const *)arg1,(curve_point const *)arg2,(uint8_t const *)arg3,arg4,arg5,arg6);
  Npop(6);
  Push = (stackitem)result;
}


void _wrap_hdnode_public_ckd() {
  Sl(2);
  Hpc(S0);
  HDNode *arg1 = (HDNode *) S0;
  uint32_t arg2 = (uint32_t) S1;
  int result = (int)hdnode_public_ckd(arg1,arg2);
  Npop(2);
  Push = (stackitem)result;
}


void _wrap_hdnode_public_ckd_address_optimized() {
  Sl(9);
  Hpc(S0);
  curve_point *arg1 = (curve_point *) S0;
  Hpc(S1);
  uint8_t *arg2 = (uint8_t *) S1;
  uint32_t arg3 = (uint32_t) S2;
  uint32_t arg4 = (uint32_t) S3;
  HasherType arg5 = (HasherType) S4;
  HasherType arg6 = (HasherType) S5;
  char *arg7 = (char *) S6;
  int arg8 = (int) S7;
  int arg9 = (int) S8;
  hdnode_public_ckd_address_optimized((curve_point const *)arg1,(uint8_t const *)arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
  Npop(9);
}


void _wrap_hdnode_fingerprint() {
  Sl(1);
  Hpc(S0);
  HDNode *arg1 = (HDNode *) S0;
  uint32_t result = hdnode_fingerprint(arg1);
  Npop(1);
  Push = (stackitem)result;
}


void _wrap_hdnode_fill_public_key() {
  Sl(1);
  Hpc(S0);
  HDNode *arg1 = (HDNode *) S0;
  hdnode_fill_public_key(arg1);
  Npop(1);
}


void _wrap_hdnode_sign() {
  Sl(7);
  Hpc(S0);
  HDNode *arg1 = (HDNode *) S0;
  Hpc(S1);
  uint8_t *arg2 = (uint8_t *) S1;
  uint32_t arg3 = (uint32_t) S2;
  HasherType arg4 = (HasherType) S3;
  Hpc(S4);
  uint8_t *arg5 = (uint8_t *) S4;
  Hpc(S5);
  uint8_t *arg6 = (uint8_t *) S5;
  Hpc(S6);
  int (*arg7)(uint8_t,uint8_t [64]) = (int (*)(uint8_t,uint8_t [64])) S6;
  int result = (int)hdnode_sign(arg1,(uint8_t const *)arg2,arg3,arg4,arg5,arg6,arg7);
  Npop(7);
  Push = (stackitem)result;
}


void _wrap_hdnode_sign_digest() {
  Sl(5);
  Hpc(S0);
  HDNode *arg1 = (HDNode *) S0;
  Hpc(S1);
  uint8_t *arg2 = (uint8_t *) S1;
  Hpc(S2);
  uint8_t *arg3 = (uint8_t *) S2;
  Hpc(S3);
  uint8_t *arg4 = (uint8_t *) S3;
  Hpc(S4);
  int (*arg5)(uint8_t,uint8_t [64]) = (int (*)(uint8_t,uint8_t [64])) S4;
  int result = (int)hdnode_sign_digest(arg1,(uint8_t const *)arg2,arg3,arg4,arg5);
  Npop(5);
  Push = (stackitem)result;
}


void _wrap_hdnode_get_shared_key() {
  Sl(4);
  Hpc(S0);
  HDNode *arg1 = (HDNode *) S0;
  Hpc(S1);
  uint8_t *arg2 = (uint8_t *) S1;
  Hpc(S2);
  uint8_t *arg3 = (uint8_t *) S2;
  Hpc(S3);
  int *arg4 = (int *) S3;
  int result = (int)hdnode_get_shared_key((HDNode const *)arg1,(uint8_t const *)arg2,arg3,arg4);
  Npop(4);
  Push = (stackitem)result;
}


void _wrap_hdnode_serialize_public() {
  Sl(5);
  Hpc(S0);
  HDNode *arg1 = (HDNode *) S0;
  uint32_t arg2 = (uint32_t) S1;
  uint32_t arg3 = (uint32_t) S2;
  char *arg4 = (char *) S3;
  int arg5 = (int) S4;
  int result = (int)hdnode_serialize_public((HDNode const *)arg1,arg2,arg3,arg4,arg5);
  Npop(5);
  Push = (stackitem)result;
}


void _wrap_hdnode_serialize_private() {
  Sl(5);
  Hpc(S0);
  HDNode *arg1 = (HDNode *) S0;
  uint32_t arg2 = (uint32_t) S1;
  uint32_t arg3 = (uint32_t) S2;
  char *arg4 = (char *) S3;
  int arg5 = (int) S4;
  int result = (int)hdnode_serialize_private((HDNode const *)arg1,arg2,arg3,arg4,arg5);
  Npop(5);
  Push = (stackitem)result;
}


void _wrap_hdnode_deserialize_public() {
  Sl(5);
  char *arg1 = (char *) S0;
  uint32_t arg2 = (uint32_t) S1;
  char *arg3 = (char *) S2;
  Hpc(S3);
  HDNode *arg4 = (HDNode *) S3;
  Hpc(S4);
  uint32_t *arg5 = (uint32_t *) S4;
  int result = (int)hdnode_deserialize_public((char const *)arg1,arg2,(char const *)arg3,arg4,arg5);
  Npop(5);
  Push = (stackitem)result;
}


void _wrap_hdnode_deserialize_private() {
  Sl(5);
  char *arg1 = (char *) S0;
  uint32_t arg2 = (uint32_t) S1;
  char *arg3 = (char *) S2;
  Hpc(S3);
  HDNode *arg4 = (HDNode *) S3;
  Hpc(S4);
  uint32_t *arg5 = (uint32_t *) S4;
  int result = (int)hdnode_deserialize_private((char const *)arg1,arg2,(char const *)arg3,arg4,arg5);
  Npop(5);
  Push = (stackitem)result;
}


void _wrap_hdnode_get_address_raw() {
  Sl(3);
  Hpc(S0);
  HDNode *arg1 = (HDNode *) S0;
  uint32_t arg2 = (uint32_t) S1;
  Hpc(S2);
  uint8_t *arg3 = (uint8_t *) S2;
  hdnode_get_address_raw(arg1,arg2,arg3);
  Npop(3);
}


void _wrap_hdnode_get_address() {
  Sl(4);
  Hpc(S0);
  HDNode *arg1 = (HDNode *) S0;
  uint32_t arg2 = (uint32_t) S1;
  char *arg3 = (char *) S2;
  int arg4 = (int) S3;
  hdnode_get_address(arg1,arg2,arg3,arg4);
  Npop(4);
}


void _wrap_get_curve_by_name() {
  Sl(1);
  char *arg1 = (char *) S0;
  curve_info * result = (curve_info *)get_curve_by_name((char const *)arg1);
  Npop(1);
  Push = (stackitem)result;
}


struct primfcn bip32_fcns[] = {
	{"0hdnode_from_xpub", _wrap_hdnode_from_xpub},
	{"0hdnode_from_xprv", _wrap_hdnode_from_xprv},
	{"0hdnode_from_seed", _wrap_hdnode_from_seed},
	{"0hdnode_private_ckd", _wrap_hdnode_private_ckd},
	{"0hdnode_public_ckd_cp", _wrap_hdnode_public_ckd_cp},
	{"0hdnode_public_ckd", _wrap_hdnode_public_ckd},
	{"0hdnode_public_ckd_address_optimized", _wrap_hdnode_public_ckd_address_optimized},
	{"0hdnode_fingerprint", _wrap_hdnode_fingerprint},
	{"0hdnode_fill_public_key", _wrap_hdnode_fill_public_key},
	{"0hdnode_sign", _wrap_hdnode_sign},
	{"0hdnode_sign_digest", _wrap_hdnode_sign_digest},
	{"0hdnode_get_shared_key", _wrap_hdnode_get_shared_key},
	{"0hdnode_serialize_public", _wrap_hdnode_serialize_public},
	{"0hdnode_serialize_private", _wrap_hdnode_serialize_private},
	{"0hdnode_deserialize_public", _wrap_hdnode_deserialize_public},
	{"0hdnode_deserialize_private", _wrap_hdnode_deserialize_private},
	{"0hdnode_get_address_raw", _wrap_hdnode_get_address_raw},
	{"0hdnode_get_address", _wrap_hdnode_get_address},
	{"0get_curve_by_name", _wrap_get_curve_by_name},
{NULL, (codeptr)0}};

