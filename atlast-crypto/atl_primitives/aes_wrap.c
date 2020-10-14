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

#include "../../crypto/aes/aes.h"

#include "aes_wrap.h"
 
void _wrap_aes_init() {
  Sl(0);
  AES_RETURN result = aes_init();
  Npop(0);
  Push = (stackitem)result;
}


void _wrap_aes_encrypt() {
  Sl(3);
  Hpc(S0);
  unsigned char *arg1 = (unsigned char *) S0;
  Hpc(S1);
  unsigned char *arg2 = (unsigned char *) S1;
  aes_encrypt_ctx *arg3 = (aes_encrypt_ctx *) (aes_encrypt_ctx *)S2;
  AES_RETURN result = aes_encrypt((unsigned char const *)arg1,arg2,(aes_encrypt_ctx const (*))arg3);
  Npop(3);
  Push = (stackitem)result;
}


void _wrap_aes_decrypt() {
  Sl(3);
  Hpc(S0);
  unsigned char *arg1 = (unsigned char *) S0;
  Hpc(S1);
  unsigned char *arg2 = (unsigned char *) S1;
  aes_decrypt_ctx *arg3 = (aes_decrypt_ctx *) (aes_decrypt_ctx *)S2;
  AES_RETURN result = aes_decrypt((unsigned char const *)arg1,arg2,(aes_decrypt_ctx const (*))arg3);
  Npop(3);
  Push = (stackitem)result;
}


void _wrap_aes_test_alignment_detection() {
  Sl(1);
  unsigned int arg1 = (unsigned int) S0;
  AES_RETURN result = aes_test_alignment_detection(arg1);
  Npop(1);
  Push = (stackitem)result;
}


void _wrap_aes_ecb_encrypt() {
  Sl(4);
  Hpc(S0);
  unsigned char *arg1 = (unsigned char *) S0;
  Hpc(S1);
  unsigned char *arg2 = (unsigned char *) S1;
  int arg3 = (int) S2;
  aes_encrypt_ctx *arg4 = (aes_encrypt_ctx *) (aes_encrypt_ctx *)S3;
  AES_RETURN result = aes_ecb_encrypt((unsigned char const *)arg1,arg2,arg3,(aes_encrypt_ctx const (*))arg4);
  Npop(4);
  Push = (stackitem)result;
}


void _wrap_aes_ecb_decrypt() {
  Sl(4);
  Hpc(S0);
  unsigned char *arg1 = (unsigned char *) S0;
  Hpc(S1);
  unsigned char *arg2 = (unsigned char *) S1;
  int arg3 = (int) S2;
  aes_decrypt_ctx *arg4 = (aes_decrypt_ctx *) (aes_decrypt_ctx *)S3;
  AES_RETURN result = aes_ecb_decrypt((unsigned char const *)arg1,arg2,arg3,(aes_decrypt_ctx const (*))arg4);
  Npop(4);
  Push = (stackitem)result;
}


void _wrap_aes_cbc_encrypt() {
  Sl(5);
  Hpc(S0);
  unsigned char *arg1 = (unsigned char *) S0;
  Hpc(S1);
  unsigned char *arg2 = (unsigned char *) S1;
  int arg3 = (int) S2;
  Hpc(S3);
  unsigned char *arg4 = (unsigned char *) S3;
  aes_encrypt_ctx *arg5 = (aes_encrypt_ctx *) (aes_encrypt_ctx *)S4;
  AES_RETURN result = aes_cbc_encrypt((unsigned char const *)arg1,arg2,arg3,arg4,(aes_encrypt_ctx const (*))arg5);
  Npop(5);
  Push = (stackitem)result;
}


void _wrap_aes_cbc_decrypt() {
  Sl(5);
  Hpc(S0);
  unsigned char *arg1 = (unsigned char *) S0;
  Hpc(S1);
  unsigned char *arg2 = (unsigned char *) S1;
  int arg3 = (int) S2;
  Hpc(S3);
  unsigned char *arg4 = (unsigned char *) S3;
  aes_decrypt_ctx *arg5 = (aes_decrypt_ctx *) (aes_decrypt_ctx *)S4;
  AES_RETURN result = aes_cbc_decrypt((unsigned char const *)arg1,arg2,arg3,arg4,(aes_decrypt_ctx const (*))arg5);
  Npop(5);
  Push = (stackitem)result;
}


void _wrap_aes_mode_reset() {
  Sl(1);
  aes_encrypt_ctx *arg1 = (aes_encrypt_ctx *) (aes_encrypt_ctx *)S0;
  AES_RETURN result = aes_mode_reset(arg1);
  Npop(1);
  Push = (stackitem)result;
}


void _wrap_aes_cfb_encrypt() {
  Sl(5);
  Hpc(S0);
  unsigned char *arg1 = (unsigned char *) S0;
  Hpc(S1);
  unsigned char *arg2 = (unsigned char *) S1;
  int arg3 = (int) S2;
  Hpc(S3);
  unsigned char *arg4 = (unsigned char *) S3;
  aes_encrypt_ctx *arg5 = (aes_encrypt_ctx *) (aes_encrypt_ctx *)S4;
  AES_RETURN result = aes_cfb_encrypt((unsigned char const *)arg1,arg2,arg3,arg4,arg5);
  Npop(5);
  Push = (stackitem)result;
}


void _wrap_aes_cfb_decrypt() {
  Sl(5);
  Hpc(S0);
  unsigned char *arg1 = (unsigned char *) S0;
  Hpc(S1);
  unsigned char *arg2 = (unsigned char *) S1;
  int arg3 = (int) S2;
  Hpc(S3);
  unsigned char *arg4 = (unsigned char *) S3;
  aes_encrypt_ctx *arg5 = (aes_encrypt_ctx *) (aes_encrypt_ctx *)S4;
  AES_RETURN result = aes_cfb_decrypt((unsigned char const *)arg1,arg2,arg3,arg4,arg5);
  Npop(5);
  Push = (stackitem)result;
}


void _wrap_aes_ofb_crypt() {
  Sl(5);
  Hpc(S0);
  unsigned char *arg1 = (unsigned char *) S0;
  Hpc(S1);
  unsigned char *arg2 = (unsigned char *) S1;
  int arg3 = (int) S2;
  Hpc(S3);
  unsigned char *arg4 = (unsigned char *) S3;
  aes_encrypt_ctx *arg5 = (aes_encrypt_ctx *) (aes_encrypt_ctx *)S4;
  AES_RETURN result = aes_ofb_crypt((unsigned char const *)arg1,arg2,arg3,arg4,arg5);
  Npop(5);
  Push = (stackitem)result;
}


void _wrap_aes_ctr_crypt() {
  Sl(6);
  Hpc(S0);
  unsigned char *arg1 = (unsigned char *) S0;
  Hpc(S1);
  unsigned char *arg2 = (unsigned char *) S1;
  int arg3 = (int) S2;
  Hpc(S3);
  unsigned char *arg4 = (unsigned char *) S3;
  Hpc(S4);
  cbuf_inc *arg5 = (cbuf_inc *) S4;
  aes_encrypt_ctx *arg6 = (aes_encrypt_ctx *) (aes_encrypt_ctx *)S5;
  AES_RETURN result = aes_ctr_crypt((unsigned char const *)arg1,arg2,arg3,arg4,arg5,arg6);
  Npop(6);
  Push = (stackitem)result;
}


void _wrap_aes_ctr_cbuf_inc() {
  Sl(1);
  Hpc(S0);
  unsigned char *arg1 = (unsigned char *) S0;
  aes_ctr_cbuf_inc(arg1);
  Npop(1);
}


struct primfcn aes_fcns[] = {
	{"0aes_init", _wrap_aes_init},
	{"0aes_encrypt", _wrap_aes_encrypt},
	{"0aes_decrypt", _wrap_aes_decrypt},
	{"0aes_test_alignment_detection", _wrap_aes_test_alignment_detection},
	{"0aes_ecb_encrypt", _wrap_aes_ecb_encrypt},
	{"0aes_ecb_decrypt", _wrap_aes_ecb_decrypt},
	{"0aes_cbc_encrypt", _wrap_aes_cbc_encrypt},
	{"0aes_cbc_decrypt", _wrap_aes_cbc_decrypt},
	{"0aes_mode_reset", _wrap_aes_mode_reset},
	{"0aes_cfb_encrypt", _wrap_aes_cfb_encrypt},
	{"0aes_cfb_decrypt", _wrap_aes_cfb_decrypt},
	{"0aes_ofb_crypt", _wrap_aes_ofb_crypt},
	{"0aes_ctr_crypt", _wrap_aes_ctr_crypt},
	{"0aes_ctr_cbuf_inc", _wrap_aes_ctr_cbuf_inc},
{NULL, (codeptr)0}};

