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

#include "../../crypto/sha3.h"

#include "sha3_wrap.h"
 
void _wrap_sha3_224_Init() {
  Sl(1);
  Hpc(stk[-1]);
  SHA3_CTX *arg1 = (SHA3_CTX *) stk[-1];
  sha3_224_Init(arg1);
  Npop(1);
}


void _wrap_sha3_256_Init() {
  Sl(1);
  Hpc(stk[-1]);
  SHA3_CTX *arg1 = (SHA3_CTX *) stk[-1];
  sha3_256_Init(arg1);
  Npop(1);
}


void _wrap_sha3_384_Init() {
  Sl(1);
  Hpc(stk[-1]);
  SHA3_CTX *arg1 = (SHA3_CTX *) stk[-1];
  sha3_384_Init(arg1);
  Npop(1);
}


void _wrap_sha3_512_Init() {
  Sl(1);
  Hpc(stk[-1]);
  SHA3_CTX *arg1 = (SHA3_CTX *) stk[-1];
  sha3_512_Init(arg1);
  Npop(1);
}


void _wrap_sha3_Update() {
  Sl(3);
  Hpc(stk[-3]);
  SHA3_CTX *arg1 = (SHA3_CTX *) stk[-3];
  Hpc(stk[-2]);
  unsigned char *arg2 = (unsigned char *) stk[-2];
  size_t arg3 = (size_t) stk[-1];
  sha3_Update(arg1,(unsigned char const *)arg2,arg3);
  Npop(3);
}


void _wrap_sha3_Final() {
  Sl(2);
  Hpc(stk[-2]);
  SHA3_CTX *arg1 = (SHA3_CTX *) stk[-2];
  Hpc(stk[-1]);
  unsigned char *arg2 = (unsigned char *) stk[-1];
  sha3_Final(arg1,arg2);
  Npop(2);
}


void _wrap_sha3_256() {
  Sl(3);
  Hpc(stk[-3]);
  unsigned char *arg1 = (unsigned char *) stk[-3];
  size_t arg2 = (size_t) stk[-2];
  Hpc(stk[-1]);
  unsigned char *arg3 = (unsigned char *) stk[-1];
  sha3_256((unsigned char const *)arg1,arg2,arg3);
  Npop(3);
}


void _wrap_sha3_512() {
  Sl(3);
  Hpc(stk[-3]);
  unsigned char *arg1 = (unsigned char *) stk[-3];
  size_t arg2 = (size_t) stk[-2];
  Hpc(stk[-1]);
  unsigned char *arg3 = (unsigned char *) stk[-1];
  sha3_512((unsigned char const *)arg1,arg2,arg3);
  Npop(3);
}


struct primfcn sha3_fcns[] = {
	{"0SHA3_224_INIT", _wrap_sha3_224_Init},
	{"0SHA3_256_INIT", _wrap_sha3_256_Init},
	{"0SHA3_384_INIT", _wrap_sha3_384_Init},
	{"0SHA3_512_INIT", _wrap_sha3_512_Init},
	{"0SHA3_UPDATE", _wrap_sha3_Update},
	{"0SHA3_FINAL", _wrap_sha3_Final},
	{"0SHA3_256", _wrap_sha3_256},
	{"0SHA3_512", _wrap_sha3_512},
{NULL, (codeptr)0}};

