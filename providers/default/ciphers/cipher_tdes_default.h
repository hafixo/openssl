/*
 * Copyright 1995-2019 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include "internal/ciphers/ciphercommon.h"
#include "internal/ciphers/cipher_tdes.h"

const PROV_CIPHER_HW *PROV_CIPHER_HW_tdes_ede3_ofb(void);
const PROV_CIPHER_HW *PROV_CIPHER_HW_tdes_ede3_cfb(void);
const PROV_CIPHER_HW *PROV_CIPHER_HW_tdes_ede3_cfb1(void);
const PROV_CIPHER_HW *PROV_CIPHER_HW_tdes_ede3_cfb8(void);

const PROV_CIPHER_HW *PROV_CIPHER_HW_tdes_ede2_cbc(void);
const PROV_CIPHER_HW *PROV_CIPHER_HW_tdes_ede2_ecb(void);
const PROV_CIPHER_HW *PROV_CIPHER_HW_tdes_ede2_ofb(void);
const PROV_CIPHER_HW *PROV_CIPHER_HW_tdes_ede2_cfb(void);

const PROV_CIPHER_HW *PROV_CIPHER_HW_tdes_desx_cbc(void);

const PROV_CIPHER_HW *PROV_CIPHER_HW_tdes_wrap_cbc(void);