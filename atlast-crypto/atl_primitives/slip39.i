%module slip39
 %{
 /* Put header files here or function declarations like below */

#include "atldef.h"

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../crypto/slip39.h"

#include "slip39_wrap.h"
 %}
 

const char* get_word(uint16_t index);

bool word_index(uint16_t* index, const char* word, uint8_t word_length);

uint16_t compute_mask(uint16_t prefix);

const char* button_sequence_to_word(uint16_t prefix);

uint16_t find(uint16_t prefix, bool find_index);
