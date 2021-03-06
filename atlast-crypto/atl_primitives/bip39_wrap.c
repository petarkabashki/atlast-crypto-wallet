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


#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../crypto/bip39.h"

#include "bip39_wrap.h"
 
void _wrap_mnemonic_generate() {
  Sl(1);
  int arg1 = (int) stk[-1];
  char * result = (char *)mnemonic_generate(arg1);
  Npop(1);
  Push = (stackitem)result;
}


void _wrap_mnemonic_from_data() {
  Sl(2);
  Hpc(stk[-2]);
  uint8_t *arg1 = (uint8_t *) stk[-2];
  int arg2 = (int) stk[-1];
  char * result = (char *)mnemonic_from_data((uint8_t const *)arg1,arg2);
  Npop(2);
  Push = (stackitem)result;
}


void _wrap_mnemonic_clear() {
  Sl(0);
  mnemonic_clear();
  Npop(0);
}


void _wrap_mnemonic_check() {
  Sl(1);
  char *arg1 = (char *) stk[-1];
  int result = (int)mnemonic_check((char const *)arg1);
  Npop(1);
  Push = (stackitem)result;
}


void _wrap_mnemonic_to_entropy() {
  Sl(2);
  char *arg1 = (char *) stk[-2];
  Hpc(stk[-1]);
  uint8_t *arg2 = (uint8_t *) stk[-1];
  int result = (int)mnemonic_to_entropy((char const *)arg1,arg2);
  Npop(2);
  Push = (stackitem)result;
}


void _wrap_mnemonic_to_seed() {
  Sl(4);
  char *arg1 = (char *) stk[-4];
  char *arg2 = (char *) stk[-3];
  uint8_t *arg3 = (uint8_t *) (uint8_t *)stk[-2];
  Hpc(stk[-1]);
  void (*arg4)(uint32_t,uint32_t) = (void (*)(uint32_t,uint32_t)) stk[-1];
  mnemonic_to_seed((char const *)arg1,(char const *)arg2,arg3,arg4);
  Npop(4);
}


void _wrap_mnemonic_find_word() {
  Sl(1);
  char *arg1 = (char *) stk[-1];
  int result = (int)mnemonic_find_word((char const *)arg1);
  Npop(1);
  Push = (stackitem)result;
}


void _wrap_mnemonic_complete_word() {
  Sl(2);
  char *arg1 = (char *) stk[-2];
  int arg2 = (int) stk[-1];
  char * result = (char *)mnemonic_complete_word((char const *)arg1,arg2);
  Npop(2);
  Push = (stackitem)result;
}


void _wrap_mnemonic_get_word() {
  Sl(1);
  int arg1 = (int) stk[-1];
  char * result = (char *)mnemonic_get_word(arg1);
  Npop(1);
  Push = (stackitem)result;
}


void _wrap_mnemonic_word_completion_mask() {
  Sl(2);
  char *arg1 = (char *) stk[-2];
  int arg2 = (int) stk[-1];
  uint32_t result = mnemonic_word_completion_mask((char const *)arg1,arg2);
  Npop(2);
  Push = (stackitem)result;
}


struct primfcn bip39_fcns[] = {
	{"0MNEMONIC_GENERATE", _wrap_mnemonic_generate},
	{"0MNEMONIC_FROM_DATA", _wrap_mnemonic_from_data},
	{"0MNEMONIC_CLEAR", _wrap_mnemonic_clear},
	{"0MNEMONIC_CHECK", _wrap_mnemonic_check},
	{"0MNEMONIC_TO_ENTROPY", _wrap_mnemonic_to_entropy},
	{"0MNEMONIC_TO_SEED", _wrap_mnemonic_to_seed},
	{"0MNEMONIC_FIND_WORD", _wrap_mnemonic_find_word},
	{"0MNEMONIC_COMPLETE_WORD", _wrap_mnemonic_complete_word},
	{"0MNEMONIC_GET_WORD", _wrap_mnemonic_get_word},
	{"0MNEMONIC_WORD_COMPLETION_MASK", _wrap_mnemonic_word_completion_mask},
{NULL, (codeptr)0}};

