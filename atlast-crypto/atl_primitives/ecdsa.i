%module ecdsa
 %{
 /* Put header files here or function declarations like below */
#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../crypto/ecdsa.h"

#include "ecdsa_wrap.h"
 %}
 

void point_copy(const curve_point *cp1, curve_point *cp2);
void point_add(const ecdsa_curve *curve, const curve_point *cp1,
               curve_point *cp2);
void point_double(const ecdsa_curve *curve, curve_point *cp);
void point_multiply(const ecdsa_curve *curve, const bignum256 *k,
                    const curve_point *p, curve_point *res);
void point_set_infinity(curve_point *p);
int point_is_infinity(const curve_point *p);
int point_is_equal(const curve_point *p, const curve_point *q);
int point_is_negative_of(const curve_point *p, const curve_point *q);
void scalar_multiply(const ecdsa_curve *curve, const bignum256 *k,
                     curve_point *res);
int ecdh_multiply(const ecdsa_curve *curve, const uint8_t *priv_key,
                  const uint8_t *pub_key, uint8_t *session_key);
void compress_coords(const curve_point *cp, uint8_t *compressed);
void uncompress_coords(const ecdsa_curve *curve, uint8_t odd,
                       const bignum256 *x, bignum256 *y);
int ecdsa_uncompress_pubkey(const ecdsa_curve *curve, const uint8_t *pub_key,
                            uint8_t *uncompressed);

int ecdsa_sign(const ecdsa_curve *curve, HasherType hasher_sign,
               const uint8_t *priv_key, const uint8_t *msg, uint32_t msg_len,
               uint8_t *sig, uint8_t *pby,
               int (*is_canonical)(uint8_t by, uint8_t sig[64]));
int ecdsa_sign_digest(const ecdsa_curve *curve, const uint8_t *priv_key,
                      const uint8_t *digest, uint8_t *sig, uint8_t *pby,
                      int (*is_canonical)(uint8_t by, uint8_t sig[64]));
void ecdsa_get_public_key33(const ecdsa_curve *curve, const uint8_t *priv_key,
                            uint8_t *pub_key);
void ecdsa_get_public_key65(const ecdsa_curve *curve, const uint8_t *priv_key,
                            uint8_t *pub_key);
void ecdsa_get_pubkeyhash(const uint8_t *pub_key, HasherType hasher_pubkey,
                          uint8_t *pubkeyhash);
void ecdsa_get_address_raw(const uint8_t *pub_key, uint32_t version,
                           HasherType hasher_pubkey, uint8_t *addr_raw);
void ecdsa_get_address(const uint8_t *pub_key, uint32_t version,
                       HasherType hasher_pubkey, HasherType hasher_base58,
                       char *addr, int addrsize);
void ecdsa_get_address_segwit_p2sh_raw(const uint8_t *pub_key, uint32_t version,
                                       HasherType hasher_pubkey,
                                       uint8_t *addr_raw);
void ecdsa_get_address_segwit_p2sh(const uint8_t *pub_key, uint32_t version,
                                   HasherType hasher_pubkey,
                                   HasherType hasher_base58, char *addr,
                                   int addrsize);
void ecdsa_get_wif(const uint8_t *priv_key, uint32_t version,
                   HasherType hasher_base58, char *wif, int wifsize);

int ecdsa_address_decode(const char *addr, uint32_t version,
                         HasherType hasher_base58, uint8_t *out);
int ecdsa_read_pubkey(const ecdsa_curve *curve, const uint8_t *pub_key,
                      curve_point *pub);
int ecdsa_validate_pubkey(const ecdsa_curve *curve, const curve_point *pub);
int ecdsa_verify(const ecdsa_curve *curve, HasherType hasher_sign,
                 const uint8_t *pub_key, const uint8_t *sig, const uint8_t *msg,
                 uint32_t msg_len);
int ecdsa_verify_digest(const ecdsa_curve *curve, const uint8_t *pub_key,
                        const uint8_t *sig, const uint8_t *digest);
int ecdsa_recover_pub_from_sig(const ecdsa_curve *curve, uint8_t *pub_key,
                               const uint8_t *sig, const uint8_t *digest,
                               int recid);
int ecdsa_sig_to_der(const uint8_t *sig, uint8_t *der);

 
