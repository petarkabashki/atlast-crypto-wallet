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

#include "../../crypto/base32.h"

#include "base32_wrap.h"
 
void _wrap_base32_encode() {
  Sl(5);
  Hpc(S0);
  uint8_t *arg1 = (uint8_t *) S0;
  size_t arg2 = (size_t) S1;
  char *arg3 = (char *) S2;
  size_t arg4 = (size_t) S3;
  char *arg5 = (char *) S4;
  char * result = (char *)base32_encode((uint8_t const *)arg1,arg2,arg3,arg4,(char const *)arg5);
  Npop(5);
  Push = (stackitem)result;
}


void _wrap_base32_encode_unsafe() {
  Sl(3);
  Hpc(S0);
  uint8_t *arg1 = (uint8_t *) S0;
  size_t arg2 = (size_t) S1;
  Hpc(S2);
  uint8_t *arg3 = (uint8_t *) S2;
  base32_encode_unsafe((uint8_t const *)arg1,arg2,arg3);
  Npop(3);
}


void _wrap_base32_decode() {
  Sl(5);
  char *arg1 = (char *) S0;
  size_t arg2 = (size_t) S1;
  Hpc(S2);
  uint8_t *arg3 = (uint8_t *) S2;
  size_t arg4 = (size_t) S3;
  char *arg5 = (char *) S4;
  uint8_t * result = (uint8_t *)base32_decode((char const *)arg1,arg2,arg3,arg4,(char const *)arg5);
  Npop(5);
  Push = (stackitem)result;
}


void _wrap_base32_decode_unsafe() {
  Sl(4);
  Hpc(S0);
  uint8_t *arg1 = (uint8_t *) S0;
  size_t arg2 = (size_t) S1;
  Hpc(S2);
  uint8_t *arg3 = (uint8_t *) S2;
  char *arg4 = (char *) S3;
  bool result = (bool)base32_decode_unsafe((uint8_t const *)arg1,arg2,arg3,(char const *)arg4);
  Npop(4);
  Push = (stackitem)result;
}


void _wrap_base32_encoded_length() {
  Sl(1);
  size_t arg1 = (size_t) S0;
  size_t result = base32_encoded_length(arg1);
  Npop(1);
  Push = (stackitem)result;
}


void _wrap_base32_decoded_length() {
  Sl(1);
  size_t arg1 = (size_t) S0;
  size_t result = base32_decoded_length(arg1);
  Npop(1);
  Push = (stackitem)result;
}


struct primfcn base32_fcns[] = {
	{"0base32_encode", _wrap_base32_encode},
	{"0base32_encode_unsafe", _wrap_base32_encode_unsafe},
	{"0base32_decode", _wrap_base32_decode},
	{"0base32_decode_unsafe", _wrap_base32_decode_unsafe},
	{"0base32_encoded_length", _wrap_base32_encoded_length},
	{"0base32_decoded_length", _wrap_base32_decoded_length},
{NULL, (codeptr)0}};

