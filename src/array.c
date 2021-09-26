/*!
 * array.c - integer vector for libsatoshi
 * Copyright (c) 2021, Christopher Jeffrey (MIT License).
 * https://github.com/chjj/libsatoshi
 */

#include <stdlib.h>
#include <string.h>
#include <satoshi/array.h>
#include "impl.h"
#include "internal.h"

/*
 * Integer Vector
 */

DEFINE_OBJECT(btc_array, SCOPE_EXTERN)

void
btc_array_init(btc_array_t *z) {
  z->items = NULL;
  z->alloc = 0;
  z->length = 0;
}

void
btc_array_clear(btc_array_t *z) {
  if (z->alloc > 0)
    free(z->items);

  z->items = NULL;
  z->alloc = 0;
  z->length = 0;
}

void
btc_array_reset(btc_array_t *z) {
  z->length = 0;
}

void
btc_array_grow(btc_array_t *z, size_t zn) {
  if (zn > z->alloc) {
    int64_t *zp = (int64_t *)realloc(z->items, zn * sizeof(int64_t));

    CHECK(zp != NULL);

    z->items = zp;
    z->alloc = zn;
  }
}

void
btc_array_push(btc_array_t *z, int64_t x) {
  if (z->length == z->alloc)
    btc_array_grow(z, (z->alloc * 3) / 2 + (z->alloc <= 1));

  z->items[z->length++] = x;
}

int64_t
btc_array_pop(btc_array_t *z) {
  CHECK(z->length > 0);
  return z->items[--z->length];
}

int64_t
btc_array_top(const btc_array_t *z) {
  CHECK(z->length > 0);
  return z->items[z->length - 1];
}

void
btc_array_resize(btc_array_t *z, size_t zn) {
  if (z->length < zn)
    btc_array_grow(z, zn);

  z->length = zn;
}

void
btc_array_copy(btc_array_t *x, const btc_array_t *y) {
  size_t i;

  btc_array_resize(x, y->length);

  for (i = 0; i < y->length; i++)
    x->items[i] = y->items[i];
}
