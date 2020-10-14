%module bip39
 %{
 /* Put header files here or function declarations like below */

#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../crypto/bip39.h"

#include "bip39_wrap.h"
 %}
 

const char *mnemonic_generate(int strength);  // strength in bits
const char *mnemonic_from_data(const uint8_t *data, int len);
void mnemonic_clear(void);

int mnemonic_check(const char *mnemonic);

int mnemonic_to_entropy(const char *mnemonic, uint8_t *entropy);

// passphrase must be at most 256 characters otherwise it would be truncated
void mnemonic_to_seed(const char *mnemonic, const char *passphrase,
                      uint8_t seed[512 / 8],
                      void (*progress_callback)(uint32_t current,
                                                uint32_t total));

int mnemonic_find_word(const char *word);
const char *mnemonic_complete_word(const char *prefix, int len);
const char *mnemonic_get_word(int index);
uint32_t mnemonic_word_completion_mask(const char *prefix, int len);