
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include <signal.h>
#include "atldef.h"


#include "atl_primitives/common_atl.h"

// generate with
// ls ./atl_primitives/*wrap.h | sort | uniq | sed -e 's_\./_#include "_' |  sed -e 's_$_"_'

#include "atl_primitives/aes_wrap.h"
#include "atl_primitives/base32_wrap.h"
#include "atl_primitives/base58_wrap.h"
#include "atl_primitives/bignum_wrap.h"
#include "atl_primitives/bip32_wrap.h"
#include "atl_primitives/bip39_wrap.h"
#include "atl_primitives/ecdsa_wrap.h"
#include "atl_primitives/hasher_wrap.h"
#include "atl_primitives/hmac_drbg_wrap.h"
#include "atl_primitives/hmac_wrap.h"
#include "atl_primitives/sha2_wrap.h"
#include "atl_primitives/sha3_wrap.h"
#include "atl_primitives/slip39_wrap.h"

// #include "bip32.h"

#define FALSE 0
#define TRUE 1

#define V (void)

/*  Globals imported  */

#ifndef HIGHC

/*  CTRLC  --  Catch a user console break signal.  If your C library
	       does not provide this Unix-compatibile facility
	       (registered with the call on signal() in main()),
	       just turn this code off or, better still, replace it
	       with the equivalent on your system.  */

static void ctrlc(sig) int sig;
{
	if (sig == SIGINT)
		atl_break();
}
#endif /* HIGHC */

/*  MAIN  --  Main program.  */

int main(argc, argv) int argc;
char *argv[];
{
	// printf("Size of HDNode: %li\n", sizeof(HDNode));
	atl_init();

// generated with
// rg -INoe '(\w+_fcns)\[' ./atl_primitives/ -r '$1' | sort | uniq | sed -e 's_.*_atl\_primdef(\0);_'

atl_primdef(common_fcns);

atl_primdef(aes_fcns);
atl_primdef(base32_fcns);
atl_primdef(base58_fcns);
atl_primdef(bignum_fcns);
atl_primdef(bip32_fcns);
atl_primdef(bip39_fcns);
atl_primdef(ecdsa_fcns);
atl_primdef(hasher_fcns);
atl_primdef(hmac_drbg_fcns);
atl_primdef(hmac_fcns);
atl_primdef(sha2_fcns);
atl_primdef(sha3_fcns);
atl_primdef(slip39_fcns);



	int i;
	int fname = FALSE, defmode = FALSE;
	FILE *ifp;
	char *include[20];
	int in = 0;
#define PR(x) (void)fprintf(stderr, x)

	PR("ATLAST 1.2 (2007-10-07) This program is in the public domain.\n");
	ifp = stdin;
	for (i = 1; i < argc; i++)
	{
		char *cp, opt;

		cp = argv[i];
		if (*cp == '-')
		{
			opt = *(++cp);
			if (islower(opt))
				opt = toupper(opt);
			switch (opt)
			{

			case 'D':
				defmode = TRUE;
				break;

			case 'H':
				atl_heaplen = atol(cp + 1);
				break;

			case 'I':
				include[in++] = cp + 1;
				break;

			case 'R':
				atl_rstklen = atol(cp + 1);
				break;

			case 'S':
				atl_stklen = atol(cp + 1);
				break;

			case 'T':
				atl_trace = TRUE;
				break;

			case '?':
			case 'U':
				PR("Usage:  ATLAST [options] [inputfile]\n");
				PR("        Options:\n");
				PR("           -D     Treat file as definitions\n");
				PR("           -Hn    Heap length n\n");
				PR("           -Ifile Include named definition file\n");
				PR("           -Rn    Return stack length n\n");
				PR("           -Sn    Stack length n\n");
				PR("           -T     Set TRACE mode\n");
				PR("           -U     Print this message\n");
				return 0;
			}
		}
		else
		{
			char fn[256];

			if (fname)
			{
				PR("Duplicate file name.\n");
				return 1;
			}
			fname = TRUE;
			V strcpy(fn, cp);
			if (strchr(fn, '.') == NULL)
				V strcat(fn, ".atl");
			ifp = fopen(fn, "r");
			if (ifp == NULL)
			{
				V fprintf(stderr, "Unable to open file %s\n", fn);
				return 1;
			}
		}
	}

	/* If any include files were named, load each in turn before
       we execute the program. */

	for (i = 0; i < in; i++)
	{
		int stat;
		char fn[132];
		FILE *fp;

		V strcpy(fn, include[i]);
		if (strchr(fn, '.') == NULL)
			V strcat(fn, ".atl");
		fp = fopen(fn,
#ifdef FBmode
				   "rb"
#else
				   "r"
#endif
		);
		if (fp == NULL)
		{
			V fprintf(stderr, "Unable to open include file %s\n",
					  include[i]);
			return 1;
		}
		stat = atl_load(fp);
		V fclose(fp);
		if (stat != ATL_SNORM)
		{
			V printf("\nError %d in include file %s\n", stat, include[i]);
		}
	}

	/* Now that all the preliminaries are out of the way, fall into
       the main ATLAST execution loop. */

#ifndef HIGHC
	V signal(SIGINT, ctrlc);
#endif /* HIGHC */
	while (TRUE)
	{
		char t[256];

		if (!fname)
			V printf(atl_comment ? "(  " : /* Show pending comment */
										   /* Show compiling state */
						 (((heap != NULL) && state) ? ":> " : "-> "));
		if (fgets(t, 256, ifp) == NULL)
		{
			if (fname && defmode)
			{
				fname = defmode = FALSE;
				ifp = stdin;
				continue;
			}
			break;
		}
		V atl_eval(t);
	}
	if (!fname)
		V printf("\n");
	return 0;
}
