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

#include "../../crypto/base58.h"

#include "base58_wrap.h"
 
void _wrap_base58_encode_check() {
  Sl(5);
  Hpc(S0);
  uint8_t *arg1 = (uint8_t *) S0;
  int arg2 = (int) S1;
  HasherType arg3 = (HasherType) S2;
  char *arg4 = (char *) S3;
  int arg5 = (int) S4;
  int result = (int)base58_encode_check((uint8_t const *)arg1,arg2,arg3,arg4,arg5);
  Npop(5);
  Push = (stackitem)result;
}


void _wrap_base58_decode_check() {
  Sl(4);
  char *arg1 = (char *) S0;
  HasherType arg2 = (HasherType) S1;
  Hpc(S2);
  uint8_t *arg3 = (uint8_t *) S2;
  int arg4 = (int) S3;
  int result = (int)base58_decode_check((char const *)arg1,arg2,arg3,arg4);
  Npop(4);
  Push = (stackitem)result;
}


void _wrap_b58tobin() {
  Sl(3);
  Hpc(S0);
  void *arg1 = (void *) S0;
  Hpc(S1);
  size_t *arg2 = (size_t *) S1;
  char *arg3 = (char *) S2;
  bool result = (bool)b58tobin(arg1,arg2,(char const *)arg3);
  Npop(3);
  Push = (stackitem)result;
}


void _wrap_b58check() {
  Sl(4);
  Hpc(S0);
  void *arg1 = (void *) S0;
  size_t arg2 = (size_t) S1;
  HasherType arg3 = (HasherType) S2;
  char *arg4 = (char *) S3;
  int result = (int)b58check((void const *)arg1,arg2,arg3,(char const *)arg4);
  Npop(4);
  Push = (stackitem)result;
}


void _wrap_b58enc() {
  Sl(4);
  char *arg1 = (char *) S0;
  Hpc(S1);
  size_t *arg2 = (size_t *) S1;
  Hpc(S2);
  void *arg3 = (void *) S2;
  size_t arg4 = (size_t) S3;
  bool result = (bool)b58enc(arg1,arg2,(void const *)arg3,arg4);
  Npop(4);
  Push = (stackitem)result;
}


struct primfcn base58_fcns[] = {
	{"0base58_encode_check", _wrap_base58_encode_check},
	{"0base58_decode_check", _wrap_base58_decode_check},
	{"0b58tobin", _wrap_b58tobin},
	{"0b58check", _wrap_b58check},
	{"0b58enc", _wrap_b58enc},
{NULL, (codeptr)0}};

