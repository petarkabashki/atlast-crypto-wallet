
#include "atldef.h"

#include <string.h>
#include "ecdsa_atl.h"
#include <stdio.h>
#include <stdlib.h>
#include "ecdsa.h"

prim P_point_copy()
{ /* in inlen out outlen alphabet -- res*/
	Sl(2);
	Hpc(S0);
	Hpc(S1);
	V point_copy((curve_point *)S1, (curve_point *)S0);
	Pop2;
}

prim P_point_add()
{ /* in inlen out outlen alphabet -- res*/
	Sl(3);
	Hpc(S0);
	Hpc(S1);
	Hpc(S2);
	V point_add((ecdsa_curve *)S2, (curve_point *)S1,
				(curve_point *)S0);
	Npop(3);
}

prim P_point_double()
{ /* in inlen out outlen alphabet -- res*/
	Sl(2);
	Hpc(S0);
	Hpc(S1);
	V point_double((ecdsa_curve *)S1, (curve_point *)S0);
	Pop2;
}

prim P_point_multiply()
{ /* in inlen out outlen alphabet -- res*/
	Sl(4);
	Hpc(S0);
	Hpc(S1);
	Hpc(S2);
	Hpc(S3);
	V point_multiply((ecdsa_curve *)S3, (bignum256 *)S2,
					 (curve_point *)S1, (curve_point *)S0);
	Npop(4);
}

prim P_point_is_infinity()
{ /* in inlen out outlen alphabet -- res*/
	Sl(1);
	Hpc(S0);
	V point_is_infinity((curve_point *)S0);
	Npop(1);
}

prim P_point_set_infinity()
{ /* in inlen out outlen alphabet -- res*/
	Sl(2);
	Hpc(S0);
	Hpc(S1);
	V point_set_infinity((curve_point *)S0);
	Npop(2);
}

prim P_point_is_negative_of()
{ /* in inlen out outlen alphabet -- res*/
	Sl(2);
	Hpc(S0);
	Hpc(S1);
	V point_is_negative_of((curve_point *)S1, (curve_point *)S0);
	Npop(2);
}

prim P_point_is_equal()
{ /* in inlen out outlen alphabet -- res*/
	Sl(2);
	Hpc(S0);
	Hpc(S1);
	V point_is_equal((curve_point *)S1, (curve_point *)S0);
	Npop(2);
}

prim P_scalar_multiply()
{
	Sl(3);
	Hpc(S0);
	Hpc(S1);
	Hpc(S2);
	V scalar_multiply((ecdsa_curve *)S2, (bignum256 *)S1, (curve_point *)S0);
	Npop(2);
}

prim P_ecdh_multiply()
{
	Sl(3);
	Hpc(S0);
	Hpc(S1);
	Hpc(S2);
	Hpc(S3);
	V ecdh_multiply((ecdsa_curve *)S3, (uint8_t *)S2, (uint8_t *)S1, (uint8_t *)S0);
	Npop(3);
}

prim P_ecdsa_uncompress_pubkey()
{
	Sl(3);
	Hpc(S0);
	Hpc(S1);
	Hpc(S2);
	V ecdsa_uncompress_pubkey((ecdsa_curve *)S2, (uint8_t *)S1, (uint8_t *)S0);
	Npop(3);
}

prim P_ecdsa_sign()
{
	Sl(7);
	Hpc(S0);Hpc(S1);Hpc(S2);Hpc(S3);Hpc(S4);Hpc(S5);Hpc(S6);
	V ecdsa_sign(
		(ecdsa_curve*)S6, (HasherType)S5,
		(uint8_t *)S4, (uint8_t *)S3,
		(uint32_t)S2, (uint8_t *)S1, (uint8_t *)S0, 0);
	Npop(7);
}

prim P_ecdsa_sign_digest()
{
	Sl(5);
	Hpc(S0);Hpc(S1);Hpc(S2);Hpc(S3);Hpc(S4);
	V ecdsa_sign_digest(
		(ecdsa_curve*)S4, (uint8_t *)S3,
		(uint32_t *)S2, (uint8_t *)S1, (uint8_t *)S0, 0);
	Npop(5);
}


prim P_ecdsa_get_public_key33()
{
	Sl(3);
	Hpc(S0);Hpc(S1);Hpc(S2);
	V ecdsa_get_public_key33(
		(ecdsa_curve*)S2,
		(uint32_t *)S1, (uint8_t *)S0);
	Npop(7);
}

prim P_ecdsa_get_public_key65()
{
	Sl(3);
	Hpc(S0);Hpc(S1);Hpc(S2);
	V ecdsa_get_public_key65(
		(ecdsa_curve*)S2,
		(uint32_t *)S1, (uint8_t *)S0);
	Npop(3);
}

prim P_ecdsa_get_pubkeyhash()
{
	Sl(3);
	Hpc(S0);Hpc(S2);
	V ecdsa_get_pubkeyhash(
		(uint8_t*)S2,
		(HasherType)S1, (uint8_t *)S0);
	Npop(3);
}

prim P_ecdsa_get_address_raw()
{
	Sl(4);
	Hpc(S0);Hpc(S2);Hpc(S3);
	V ecdsa_get_address_raw(
		(uint8_t*)S3, (uint8_t)S2,
		(HasherType)S1, (uint8_t *)S0);
	Npop(4);
}

// prim P_ecdsa_get_address()
// {
// 	Sl(6);
// 	Hpc(S0);Hpc(S1);Hpc(S2);Hpc(S3);Hpc(S4);Hpc(S5);
// 	V ecdsa_get_address(
// 		(uint8_t*)S5, (uint8_t)S4,
// 		(HasherType)S3, (HasherType)S2, (uint8_t *)S1, (uint8_t)S0);
// 	Npop(6);
// }

prim P_ecdsa_get_address()
{
	Sl(6);
	Hpc(S0);Hpc(S1);Hpc(S2);Hpc(S3);Hpc(S4);Hpc(S5);
	V ecdsa_get_address(
		(uint8_t*)S5, (uint8_t)S4,
		(HasherType)S3, (HasherType)S2, (uint8_t *)S1, (uint8_t)S0);
	Npop(6);
}


prim P_ecdsa_get_address_segwit_p2sh_raw()
{
	Sl(4);
	Hpc(S0);Hpc(S2);Hpc(S3);
	V ecdsa_get_address_segwit_p2sh_raw(
		(uint8_t*)S3, (uint8_t)S2,
		(HasherType)S1, (uint8_t *)S0);
	Npop(4);
}

prim P_ecdsa_get_address_segwit_p2sh()
{
	Sl(6);
	Hpc(S0);Hpc(S1);Hpc(S2);Hpc(S3);Hpc(S4);Hpc(S5);
	V ecdsa_get_address_segwit_p2sh(
		(uint8_t*)S5, (uint8_t)S4,
		(HasherType)S3, (HasherType)S2, (uint8_t *)S1, (uint8_t)S0);
	Npop(6);
}

prim P_ecdsa_get_wif()
{
	Sl(5);
	Hpc(S0);Hpc(S1);Hpc(S2);Hpc(S3);Hpc(S4);
	V ecdsa_get_wif(
		(uint8_t*)S4, (uint8_t)S3,
		(HasherType)S2, (uint8_t *)S1, (uint8_t)S0);
	Npop(5);
}

prim P_ecdsa_address_decode()
{
	Sl(3);
	Hpc(S0);Hpc(S1);Hpc(S2);Hpc(S3);
	V ecdsa_address_decode(
		(uint8_t*)S3, (uint8_t)S2,
		(HasherType)S1, (uint8_t*)S0);
	Npop(3);
}

prim P_ecdsa_read_pubkey()
{
	Sl(3);
	Hpc(S0);Hpc(S1);Hpc(S2);
	V ecdsa_read_pubkey(
		 (ecdsa_curve*)S2,
		(uint8_t)S1, (uint8_t*)S0);
	Npop(3);
}

prim P_ecdsa_validate_pubkey()
{
	Sl(2);
	Hpc(S0);Hpc(S1);
	V ecdsa_validate_pubkey(
		 (ecdsa_curve*)S1, (curve_point*)S0);
	Npop(2);
}

prim P_ecdsa_verify()
{
	Sl(6);
	Hpc(S0);Hpc(S1);Hpc(S2);Hpc(S3);Hpc(S4);Hpc(S5);
	V ecdsa_verify(
		(ecdsa_curve*)S5,
		(HasherType)S4, (uint8_t *)S3, (uint8_t *)S2, (uint8_t *)S1, (uint8_t)S0);
	Npop(6);
}

prim P_ecdsa_verify_digest()
{
	Sl(4);
	Hpc(S0);Hpc(S1);Hpc(S2);Hpc(S3);
	V ecdsa_verify_digest(
		(ecdsa_curve*)S3, (uint8_t *)S2, (uint8_t *)S1, (uint8_t*)S0);
	Npop(4);
}


prim P_ecdsa_recover_pub_from_sig()
{
	Sl(5);
	Hpc(S0);Hpc(S1);Hpc(S2);Hpc(S3);Hpc(S4);
	V ecdsa_recover_pub_from_sig(
		(ecdsa_curve*)S4, (uint8_t *)S3, (uint8_t *)S2, (uint8_t *)S1, (uint8_t)S0);
	Npop(5);
}

prim P_ecdsa_sig_to_der()
{
	Sl(2);
	Hpc(S0);Hpc(S1);
	V ecdsa_sig_to_der( (uint8_t *)S1, (uint8_t*)S0);
	Npop(2);
}

prim P_compress_coords()
{
	Sl(2);
	Hpc(S0);Hpc(S1);
	V compress_coords( (curve_point *)S1, (uint8_t*)S0);
	Npop(2);
}

prim P_uncompress_coords()
{
	Sl(4);
	Hpc(S0);Hpc(S2);Hpc(S3);
	V uncompress_coords( (ecdsa_curve *)S3, (uint8_t)S2, (bignum256 *)S1, (bignum256*)S0);
	Npop(2);
}

struct primfcn ecdsa_fcns[] = {
	{"0ECD.PCPY", P_point_copy},
	{"0ECD.P+", P_point_add},
	{"0ECD.Px2", P_point_double},
	{"0ECD.PMLT", P_point_multiply},
	{"0ECD.P!INF", P_point_set_infinity},
	{"0ECD.P?INF", P_point_is_infinity},
	{"0ECD.P?EQ", P_point_is_equal},
	{"0ECD.P?NEG", P_point_is_negative_of},
	{"0ECD.SCx", P_scalar_multiply},
	{"0ECD.ECx", P_ecdh_multiply},
	{"0ECD.UNPB", P_ecdsa_uncompress_pubkey},
	{"0ECD.SIGN", P_ecdsa_sign},

	{"0ECD.SIGD", P_ecdsa_sign_digest},
	{"0ECD.PB33", P_ecdsa_get_public_key33},
	{"0ECD.PB65", P_ecdsa_get_public_key65},
	{"0ECD.PUB#", P_ecdsa_get_pubkeyhash},
	{"0ECD.ADRW", P_ecdsa_get_address_raw},
	{"0ECD.ADDR", P_ecdsa_get_address},
	
	{"0ECD.SGW.ADRW", P_ecdsa_get_address_segwit_p2sh_raw},
	{"0ECD.SGW.ADDR", P_ecdsa_get_address_segwit_p2sh},
	{"0ECD.WIF", P_ecdsa_get_wif},
	{"0ECD.ADDC", P_ecdsa_address_decode},
	{"0ECD.RPB", P_ecdsa_read_pubkey},
	{"0ECD.VPB", P_ecdsa_validate_pubkey},
	{"0ECD.VRF", P_ecdsa_verify},
	{"0ECD.VRD", P_ecdsa_verify_digest},

	{"0ECD.SIG>PUB", P_ecdsa_recover_pub_from_sig},
	{"0ECD.SIG>DER", P_ecdsa_sig_to_der},
	{"0ECD.CCD", P_compress_coords},
	{"0ECD.UCD", P_uncompress_coords},
	{"0ECD.VPB", P_ecdsa_validate_pubkey},

	{NULL, (codeptr)0}};