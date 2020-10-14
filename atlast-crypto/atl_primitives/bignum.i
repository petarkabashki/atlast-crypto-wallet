%module bignum
 %{
 /* Put header files here or function declarations like below */
#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../crypto/bignum.h"

#include "bignum_wrap.h"
 %}
 
void bn_read_be(const uint8_t *in_number, bignum256 *out_number);
void bn_write_be(const bignum256 *in_number, uint8_t *out_number);
void bn_read_le(const uint8_t *in_number, bignum256 *out_number);
void bn_write_le(const bignum256 *in_number, uint8_t *out_number);
void bn_read_uint32(uint32_t in_number, bignum256 *out_number);
void bn_read_uint64(uint64_t in_number, bignum256 *out_number);
int bn_bitcount(const bignum256 *x);
unsigned int bn_digitcount(const bignum256 *x);
void bn_zero(bignum256 *x);
void bn_one(bignum256 *x);
int bn_is_zero(const bignum256 *x);
int bn_is_one(const bignum256 *x);
int bn_is_less(const bignum256 *x, const bignum256 *y);
int bn_is_equal(const bignum256 *x, const bignum256 *y);
void bn_cmov(bignum256 *res, volatile uint32_t cond, const bignum256 *truecase,
             const bignum256 *falsecase);
void bn_cnegate(volatile uint32_t cond, bignum256 *x, const bignum256 *prime);
void bn_lshift(bignum256 *x);
void bn_rshift(bignum256 *x);
void bn_setbit(bignum256 *x, uint16_t i);
void bn_clearbit(bignum256 *x, uint16_t i);
uint32_t bn_testbit(const bignum256 *x, uint16_t i);
void bn_xor(bignum256 *res, const bignum256 *x, const bignum256 *y);
void bn_mult_half(bignum256 *x, const bignum256 *prime);
void bn_mult_k(bignum256 *x, uint8_t k, const bignum256 *prime);
void bn_mod(bignum256 *x, const bignum256 *prime);
void bn_multiply(const bignum256 *k, bignum256 *x, const bignum256 *prime);
// void bn_fast_mod_old(bignum256 *x, const bignum256 *prime);
void bn_fast_mod(bignum256 *x, const bignum256 *prime);
void bn_power_mod(const bignum256 *x, const bignum256 *e,
                  const bignum256 *prime, bignum256 *res);
void bn_sqrt(bignum256 *x, const bignum256 *prime);
uint32_t inverse_mod_power_two(uint32_t a, uint32_t n);
void bn_divide_base(bignum256 *x, const bignum256 *prime);
void bn_inverse_slow(bignum256 *x, const bignum256 *prime);
// void bn_inverse_fast_1(bignum256 *x, const bignum256 *prime);
// void bn_inverse_fast_2(bignum256 *x, const bignum256 *prime);
// void bn_inverse_fast_3(bignum256 *x, const bignum256 *prime);
// void bn_inverse_old(bignum256 *x, const bignum256 *prime);
void bn_normalize(bignum256 *x);
void bn_add(bignum256 *x, const bignum256 *y);
void bn_addmod(bignum256 *x, const bignum256 *y, const bignum256 *prime);
void bn_addi(bignum256 *x, uint32_t y);
void bn_subi(bignum256 *x, uint32_t y, const bignum256 *prime);
void bn_subtractmod(const bignum256 *x, const bignum256 *y, bignum256 *res,
                    const bignum256 *prime);
void bn_subtract(const bignum256 *x, const bignum256 *y, bignum256 *res);
void bn_long_division(bignum256 *x, uint32_t d, bignum256 *q, uint32_t *r);
void bn_divmod58(bignum256 *x, uint32_t *r);
void bn_divmod1000(bignum256 *x, uint32_t *r);
void bn_inverse(bignum256 *x, const bignum256 *prime);
size_t bn_format(const bignum256 *amount, const char *prefix,
                 const char *suffix, unsigned int decimals, int exponent,
                 bool trailing, char *output, size_t output_length);