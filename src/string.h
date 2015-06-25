/**
 * Copyright (c) 2015, Chao Wang <hit9@icloud.com>
 */

#ifndef _STRING_H
#define _STRING_H

#include <stdint.h>
#include "bool.h"

#if defined(__cplusplus)
extern "C" {
#endif

struct string {
    uint32_t len;   /* string length */
    uint8_t *data;  /* string data */
};

#define string_null  { 0, NULL }
#define string(cs)  { sizeof(cs) - 1, (uint8_t *)(cs) }

bool string_isempty(struct string *s);
bool string_isspace(struct string *s);
bool string_startswith(struct string *s, struct string *prefix);
bool string_endswith(struct string *s, struct string *suffix);
int string_cmp(struct string *s1, struct string *s2);
int string_ncmp(struct string *s1, struct string *s2, uint32_t n);
uint32_t string_index(struct string *s, uint8_t ch, uint32_t start);

#if defined(__cplusplus)
}
#endif

#endif