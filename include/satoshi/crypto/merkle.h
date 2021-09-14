/*!
 * ecc.h - ecc for libsatoshi
 * Copyright (c) 2020, Christopher Jeffrey (MIT License).
 * https://github.com/chjj/libsatoshi
 */

#ifndef BTC_MERKLE_H
#define BTC_MERKLE_H

#include <stddef.h>
#include <stdint.h>
#include "../common.h"

/*
 * Merkle
 */

BTC_EXTERN int
btc_merkle_root(uint8_t *root, uint8_t *nodes, size_t size);

#endif /* BTC_MERKLE_H */