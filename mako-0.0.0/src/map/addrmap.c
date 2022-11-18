/*!
 * addrmap.c - address map for mako
 * Copyright (c) 2021, Christopher Jeffrey (MIT License).
 * https://github.com/chjj/mako
 */

#include <mako/address.h>
#include <mako/map.h>
#include "map.h"

/*
 * Address Map
 */

DEFINE_ADDRESS_MAP(btc_addrmap, void *, NULL, MAP_EXTERN)
