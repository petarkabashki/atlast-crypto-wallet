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

#include "../../crypto/hasher.h"

#include "hasher_wrap.h"
 
void _wrap_hasher_InitParam() {
  Sl(4);
  Hpc(stk[-4]);
  Hasher *arg1 = (Hasher *) stk[-4];
  HasherType arg2 = (HasherType) stk[-3];
  Hpc(stk[-2]);
  void *arg3 = (void *) stk[-2];
  uint32_t arg4 = (uint32_t) stk[-1];
  hasher_InitParam(arg1,arg2,(void const *)arg3,arg4);
  Npop(4);
}


void _wrap_hasher_Init() {
  Sl(2);
  Hpc(stk[-2]);
  Hasher *arg1 = (Hasher *) stk[-2];
  HasherType arg2 = (HasherType) stk[-1];
  hasher_Init(arg1,arg2);
  Npop(2);
}


void _wrap_hasher_Reset() {
  Sl(1);
  Hpc(stk[-1]);
  Hasher *arg1 = (Hasher *) stk[-1];
  hasher_Reset(arg1);
  Npop(1);
}


void _wrap_hasher_Update() {
  Sl(3);
  Hpc(stk[-3]);
  Hasher *arg1 = (Hasher *) stk[-3];
  Hpc(stk[-2]);
  uint8_t *arg2 = (uint8_t *) stk[-2];
  size_t arg3 = (size_t) stk[-1];
  hasher_Update(arg1,(uint8_t const *)arg2,arg3);
  Npop(3);
}


void _wrap_hasher_Final() {
  Sl(2);
  Hpc(stk[-2]);
  Hasher *arg1 = (Hasher *) stk[-2];
  uint8_t *arg2 = (uint8_t *) (uint8_t *)stk[-1];
  hasher_Final(arg1,arg2);
  Npop(2);
}


void _wrap_hasher_Raw() {
  Sl(4);
  HasherType arg1 = (HasherType) stk[-4];
  Hpc(stk[-3]);
  uint8_t *arg2 = (uint8_t *) stk[-3];
  size_t arg3 = (size_t) stk[-2];
  uint8_t *arg4 = (uint8_t *) (uint8_t *)stk[-1];
  hasher_Raw(arg1,(uint8_t const *)arg2,arg3,arg4);
  Npop(4);
}


struct primfcn hasher_fcns[] = {
	{"0HASHER_INITPARAM", _wrap_hasher_InitParam},
	{"0HASHER_INIT", _wrap_hasher_Init},
	{"0HASHER_RESET", _wrap_hasher_Reset},
	{"0HASHER_UPDATE", _wrap_hasher_Update},
	{"0HASHER_FINAL", _wrap_hasher_Final},
	{"0HASHER_RAW", _wrap_hasher_Raw},
{NULL, (codeptr)0}};

