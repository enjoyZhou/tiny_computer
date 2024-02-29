/* key_data.c
 *
 * Copyright (C) 2006-2022 wolfSSL Inc.
 *
 * This file is part of wolfSSL.
 *
 * wolfSSL is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * wolfSSL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1335, USA
 */


#include "key_data.h"

/*-------------------------------------------------------------------------
      RX72N supports TSIP v1.09 or later
--------------------------------------------------------------------------*/
#if defined(WOLFSSL_RENESAS_TSIP_TLS) && (WOLFSSL_RENESAS_TSIP_VER >= 109)

const st_key_block_data_t g_key_block_data =
{
    /* uint8_t encrypted_provisioning_key[R_TSIP_AES_CBC_IV_BYTE_SIZE * 2]; */
    {
        0xDF, 0x78, 0x49, 0x28, 0xA9, 0x4C, 0x36, 0xD6, 0xC9, 0x89, 0x98, 0xDF,
        0xFF, 0xB1, 0xCB, 0xBC, 0x9F, 0xF4, 0x34, 0xCD, 0x81, 0x53, 0x67, 0xB3,
        0xFC, 0x85, 0xC6, 0x0B, 0xA2, 0xC8, 0xF4, 0x83
   },
    /* uint8_t iv[R_TSIP_AES_CBC_IV_BYTE_SIZE]; */
    {
        0xF6, 0xA9, 0x83, 0x5A, 0xA1, 0x65, 0x1D, 0x28, 0xC8, 0x1A, 0xA6, 0x9D,
        0x34, 0xB2, 0x4D, 0x92
    },
    /* uint8_t 
     * encrypted_user_rsa2048_ne_key[R_TSIP_RSA2048_NE_KEY_BYTE_SIZE + 16];
     */
    {
        0xC8, 0x12, 0x94, 0x44, 0x43, 0x35, 0x82, 0x09, 0xF2, 0x54, 0x69, 0xB6, 
        0x9B, 0x8E, 0x6F, 0x92, 0xE3, 0x3A, 0xB2, 0x55, 0x63, 0x8D, 0xDB, 0x47,
        0x75, 0x8D, 0x9D, 0x56, 0xD7, 0x7F, 0x42, 0x3A, 0x04, 0x4C, 0xAA, 0xF1,
        0x94, 0x9C, 0x8C, 0x97, 0xAF, 0x5C, 0xBA, 0x0E, 0xBD, 0x8A, 0xE3, 0x67,
        0x3E, 0xF8, 0x4C, 0x8E, 0xB7, 0x71, 0xB0, 0xCE, 0x09, 0x3C, 0xEC, 0x9C,
        0xCC, 0x81, 0x9D, 0x37, 0x9E, 0x34, 0x39, 0x6D, 0xF0, 0x7D, 0x1A, 0x4A,
        0xEB, 0xF5, 0x99, 0x91, 0xE1, 0xB0, 0x99, 0x72, 0xB3, 0xF3, 0x2B, 0xE1,
        0x6F, 0x5B, 0xD4, 0xA3, 0xB9, 0x9C, 0xEB, 0x95, 0xC3, 0xB2, 0x8F, 0x5C,
        0x58, 0xD5, 0x0A, 0xAA, 0x02, 0x01, 0xBF, 0xE1, 0xE9, 0x23, 0xFB, 0x03,
        0xCF, 0x54, 0x6D, 0x29, 0xE7, 0x5E, 0x96, 0x51, 0x68, 0x6B, 0xDD, 0x06,
        0x67, 0x5E, 0x84, 0x50, 0x21, 0x50, 0x78, 0x89, 0x80, 0xF8, 0x61, 0x9C,
        0xBE, 0xDA, 0x75, 0x55, 0x1A, 0xE6, 0x3C, 0xA5, 0x1C, 0xE4, 0x5A, 0x5C,
        0x68, 0x7C, 0x48, 0xC7, 0x6A, 0xC9, 0x80, 0x54, 0x31, 0xE7, 0x65, 0x8A,
        0x13, 0xF3, 0x6D, 0x0F, 0xB3, 0x62, 0x8D, 0x1B, 0xEA, 0x71, 0x12, 0x86,
        0x50, 0x98, 0xA3, 0x8E, 0x64, 0x1D, 0x3E, 0xA4, 0x5A, 0x99, 0xB3, 0xBD,
        0x3E, 0x3D, 0xF5, 0x0F, 0x41, 0x09, 0xFB, 0x04, 0x7B, 0x8D, 0xA1, 0xCF,
        0xBA, 0x71, 0x85, 0x86, 0x3C, 0x04, 0xDD, 0x74, 0x8D, 0xE3, 0x3C, 0x8E,
        0x52, 0x3C, 0x05, 0x7A, 0xBE, 0xCC, 0xEA, 0x9D, 0x57, 0x2C, 0x40, 0x05,
        0xEE, 0x49, 0x1D, 0xD2, 0xA3, 0x5A, 0xFA, 0x25, 0x1D, 0x1F, 0xDD, 0xB5,
        0x36, 0x7D, 0x25, 0xD3, 0x34, 0x39, 0xC2, 0x59, 0x57, 0xAD, 0x3C, 0x9D,
        0xC9, 0xBF, 0x09, 0x8D, 0xA0, 0x40, 0x5A, 0x14, 0x7B, 0xCF, 0xFE, 0x05,
        0x3E, 0xF3, 0xD1, 0x7D, 0xBB, 0x33, 0x96, 0x40, 0x79, 0xC2, 0x7B, 0x15,
        0x2E, 0xEE, 0xE3, 0x5B, 0x9C, 0x06, 0x72, 0x95, 0xFF, 0xCB, 0xC9, 0xE4,
        0x96, 0x97, 0x18, 0x0D, 0xE7, 0x78, 0xCD, 0xE9, 0xA7, 0xEA, 0xE9, 0xDF
    },
    /* uint8_t encrypted_user_update_key[R_TSIP_AES256_KEY_BYTE_SIZE + 16]; */
    {
        0
    },
    /* uint8_t 
     * encrypted_user_rsa2048_private_key[R_TSIP_RSA2048_ND_KEY_BYTE_SIZE + 16]
     */
    {
        0xAF, 0x8C, 0x78, 0xE3, 0x6C, 0x9E, 0xC6, 0x76, 0xE5, 0x86, 0x84, 0xBE,
        0xF5, 0x6C, 0xD7, 0x2B, 0x46, 0x24, 0x35, 0x99, 0xA5, 0x64, 0xDD, 0xFA,
        0x35, 0x22, 0x5A, 0xB8, 0x5F, 0xD8, 0x1E, 0xCF, 0xCC, 0x73, 0x10, 0xD6,
        0x13, 0x69, 0x8F, 0x36, 0xA9, 0x8E, 0x09, 0xDF, 0x83, 0x20, 0x85, 0xBE,
        0x81, 0x69, 0x51, 0x75, 0xCB, 0xA5, 0x90, 0x8C, 0xC1, 0x75, 0xBE, 0x0F,
        0x8C, 0xB6, 0xFE, 0x73, 0x03, 0x37, 0x03, 0x41, 0xC0, 0x98, 0xC2, 0xEE,
        0x2D, 0x1B, 0xDA, 0x10, 0x8B, 0xF6, 0xB6, 0x67, 0xE9, 0x29, 0xCD, 0xEC,
        0x4C, 0x4D, 0x84, 0x28, 0x61, 0x3A, 0xF5, 0x6D, 0xEE, 0x78, 0x45, 0xF3,
        0x17, 0xC9, 0x77, 0xAB, 0x56, 0x2C, 0x68, 0xCB, 0x14, 0x9F, 0x5A, 0xE7,
        0x11, 0xC7, 0x13, 0x4B, 0xDC, 0x31, 0x60, 0x77, 0xDA, 0x56, 0x0C, 0x15,
        0xB2, 0xA9, 0x73, 0x4C, 0xD3, 0x46, 0x29, 0x18, 0x1C, 0x8C, 0xFD, 0xCF,
        0xAC, 0x4B, 0x55, 0x30, 0x96, 0xDC, 0xE9, 0xC0, 0x6A, 0x74, 0x68, 0x1D,
        0x6B, 0x25, 0xB0, 0x8F, 0x0C, 0xD7, 0xDD, 0xFC, 0xA8, 0x15, 0x87, 0x3E,
        0xA3, 0x91, 0x46, 0x25, 0x6C, 0x6F, 0xC4, 0xB2, 0xE1, 0xB8, 0x5F, 0xF3,
        0x6A, 0x0D, 0x9C, 0x29, 0x08, 0x6F, 0x5E, 0xFF, 0xA0, 0x81, 0x34, 0xA5,
        0x2B, 0x2B, 0x47, 0xE0, 0x6D, 0x56, 0xD2, 0x52, 0xC7, 0x19, 0x63, 0x72,
        0x84, 0x96, 0x64, 0xA5, 0xF2, 0x92, 0x3C, 0x38, 0x37, 0x9F, 0x6A, 0x2D,
        0x58, 0x33, 0x8C, 0x5C, 0x27, 0x05, 0xCB, 0x4F, 0x62, 0x2F, 0x40, 0xE9,
        0x55, 0x2C, 0x75, 0x4B, 0x02, 0xB3, 0x61, 0xAD, 0x34, 0x14, 0x49, 0x26,
        0x94, 0x45, 0x9B, 0xB8, 0xDB, 0x1F, 0xCE, 0xE9, 0xB1, 0xBF, 0x47, 0xF3,
        0xD4, 0xAD, 0xEB, 0xBC, 0x4F, 0x61, 0xAD, 0x66, 0xAF, 0x10, 0x94, 0x5D,
        0x25, 0x5B, 0x52, 0xF3, 0x44, 0xBA, 0x28, 0xF8, 0xF2, 0x01, 0x41, 0x61,
        0xF3, 0xE5, 0x91, 0x44, 0xF9, 0xA3, 0x56, 0xD8, 0xE9, 0x43, 0x0F, 0x78,
        0x7E, 0x1C, 0x01, 0xA6, 0xD7, 0x47, 0x87, 0x7C, 0xC5, 0xAF, 0x2A, 0xD3,
        0x71, 0x3A, 0x3E, 0x96, 0xF5, 0x8E, 0xA8, 0x1A, 0x89, 0x17, 0xCD, 0x52,
        0x7E, 0x98, 0x70, 0xB3, 0x57, 0x22, 0x59, 0x1C, 0xB7, 0x61, 0xD3, 0x32,
        0xE5, 0x2E, 0x6B, 0x6F, 0x2B, 0xD2, 0xAB, 0x27, 0x62, 0x65, 0xBE, 0x0B,
        0x8B, 0xFC, 0x9D, 0xB7, 0x3B, 0x4F, 0xA7, 0x35, 0xA6, 0xB3, 0x10, 0x98,
        0x6D, 0x47, 0x12, 0x16, 0x89, 0x33, 0x9A, 0x87, 0x85, 0x50, 0x21, 0x2B,
        0x03, 0xD0, 0x0C, 0x25, 0x52, 0xC1, 0xA4, 0xD9, 0x50, 0x57, 0x0A, 0x88,
        0x67, 0xE9, 0x55, 0x78, 0xFF, 0x23, 0xC0, 0xD1, 0xB6, 0xF4, 0xBD, 0x64,
        0x38, 0x9A, 0x59, 0xD8, 0x0C, 0xCA, 0x3C, 0x44, 0xBB, 0x31, 0x40, 0xF3,
        0x3F, 0x84, 0x74, 0x1A, 0x1B, 0xFB, 0x81, 0x22, 0x20, 0x0E, 0x68, 0x48,
        0x7F, 0xBF, 0xBB, 0xE2, 0xF7, 0xEA, 0x1C, 0xDD, 0x63, 0xAA, 0x3E, 0xFE,
        0x7A, 0xBD, 0x6C, 0x2A, 0x2C, 0x6C, 0x8E, 0x3C, 0xB6, 0x42, 0x2F, 0x42,
        0xF2, 0x17, 0x07, 0x2F, 0x4F, 0xAA, 0x4B, 0xA0, 0xE7, 0x98, 0xAE, 0x95,
        0x21, 0x2A, 0xF8, 0x1C, 0x33, 0x81, 0xC2, 0x64, 0xEC, 0xF3, 0xD7, 0x75,
        0x81, 0x61, 0x8C, 0xDF, 0x7F, 0x76, 0x6B, 0x44, 0x22, 0x36, 0xD3, 0x7F,
        0x17, 0x40, 0x84, 0xF8, 0xA8, 0x4B, 0xD5, 0xD4, 0x4E, 0xA1, 0x86, 0xDB,
        0x9B, 0xCD, 0xB6, 0x6C, 0xDF, 0x35, 0x0C, 0x0D, 0x7E, 0x0F, 0x01, 0x9C,
        0xF7, 0x6E, 0x89, 0xE6, 0x2F, 0x0E, 0xC5, 0xF3, 0xEA, 0x69, 0x8C, 0xA5,
        0xD5, 0x48, 0xEE, 0x5B, 0x77, 0x04, 0xFE, 0xC7, 0x56, 0x87, 0x27, 0xD4,
        0xF9, 0xCC, 0xB4, 0xB4, 0xB7, 0x1A, 0x85, 0x38, 0x0B, 0x93, 0xD2, 0x1D,
        0xD3, 0xDE, 0x7E, 0x45, 0xAF, 0x82, 0x46, 0x65, 0xFE, 0x59, 0x55, 0x83
    },
    /* uint8_t
     * encrypted_user_ecc256_private_key[R_TSIP_ECC_PRIVATE_KEY_BYTE_SIZE + 16];
     */
    {
        0xE6, 0x6C, 0xB8, 0x7C, 0xDB, 0x85, 0x50, 0x51, 0x4A, 0x75, 0x38, 0xA4,
        0x74, 0x7A, 0x8C, 0x7C, 0x07, 0x71, 0x0E, 0x52, 0xC3, 0x19, 0xD1, 0xE6,
        0xF8, 0x36, 0xD2, 0xD3, 0x53, 0xF8, 0xA7, 0xCE, 0xBC, 0xBE, 0xAE, 0x62,
        0x7F, 0x00, 0x54, 0xB1, 0x01, 0x11, 0xCA, 0xE3, 0x77, 0x3E, 0x2E, 0x21
    },

};

/* Public key type of CA root cert: 0: RSA-2048 2: ECDSA-P256*/
#if defined(USE_ECC_CERT)
const uint32_t              encrypted_user_key_type =
                                    R_TSIP_TLS_PUBLIC_KEY_TYPE_ECDSA_P256;
#else
const uint32_t              encrypted_user_key_type =
                                    R_TSIP_TLS_PUBLIC_KEY_TYPE_RSA2048;
#endif

const unsigned char ca_ecc_cert_der_sig[] =
{
    0x6e, 0x7d, 0x2b, 0xd3, 0x6d, 0x6a, 0x70, 0x31, 0xbf, 0xcd, 0x6f, 0x32,
    0x74, 0x8b, 0x4d, 0xdf, 0x7c, 0x72, 0xc6, 0x78, 0x61, 0x2b, 0x0f, 0xcc,
    0xbc, 0xa3, 0x25, 0x54, 0x04, 0xfa, 0x9e, 0xf7, 0x1c, 0xa2, 0xe1, 0x33,
    0x90, 0x08, 0xcd, 0x3c, 0xc1, 0x03, 0x66, 0xb6, 0x3f, 0xf1, 0xbf, 0xaf,
    0x0d, 0xb0, 0xeb, 0xe4, 0xc7, 0x54, 0x60, 0x34, 0x3b, 0x62, 0xcf, 0x28,
    0x95, 0xa2, 0x08, 0x79, 0xc5, 0x51, 0xf3, 0xe1, 0x88, 0x3b, 0xa0, 0x1d,
    0x1d, 0x42, 0x5a, 0xba, 0x09, 0xe4, 0x64, 0xa1, 0x83, 0xf4, 0x60, 0x44,
    0x89, 0xd3, 0xdd, 0x6c, 0x71, 0x7b, 0xd1, 0xb0, 0x28, 0x7b, 0x98, 0xe2,
    0x4b, 0x99, 0x9a, 0x22, 0xd0, 0xeb, 0x1c, 0x5c, 0xbe, 0x49, 0x1a, 0xcf,
    0xd7, 0x4b, 0x19, 0xe9, 0xdf, 0x82, 0x21, 0xe3, 0x87, 0x7a, 0x25, 0x58,
    0x8f, 0x29, 0x0e, 0xce, 0xf4, 0x09, 0x0f, 0x2f, 0x04, 0xe9, 0xd2, 0xf9,
    0xcc, 0xb7, 0x7a, 0x46, 0x5d, 0x98, 0x05, 0x54, 0x89, 0x8e, 0x09, 0x79,
    0xa8, 0x6f, 0xf6, 0x12, 0xdd, 0x93, 0x38, 0x83, 0x14, 0x3f, 0x42, 0xcf,
    0x03, 0x9d, 0x84, 0x9d, 0xe9, 0x6e, 0x9f, 0x87, 0x0f, 0xb8, 0x15, 0x9b,
    0x9b, 0x4c, 0x32, 0x3b, 0x82, 0x7b, 0x3d, 0xd4, 0x85, 0x1e, 0x71, 0x99,
    0x67, 0x40, 0x59, 0xad, 0x8c, 0x31, 0xd7, 0xa2, 0x81, 0xfd, 0x46, 0x21,
    0xd7, 0xc8, 0x89, 0x3d, 0x17, 0x3f, 0x5e, 0x82, 0x5e, 0xfa, 0x7b, 0x34,
    0x7a, 0x1b, 0x85, 0x86, 0xf8, 0x02, 0xf2, 0xf3, 0x01, 0x2c, 0xbd, 0x4a,
    0x98, 0x0f, 0xe9, 0x4b, 0x1a, 0xa3, 0xee, 0xfc, 0x77, 0xda, 0xcf, 0xee,
    0x9c, 0xca, 0xf9, 0xbf, 0xaa, 0x5b, 0xbc, 0x01, 0x4b, 0xd4, 0x74, 0x7c,
    0xee, 0xfb, 0x7c, 0xc4, 0x31, 0xb7, 0x46, 0x9e, 0x94, 0x84, 0xa3, 0x82,
    0x0c, 0x7b, 0x61, 0x4e
};
const int sizeof_ca_ecc_cert_sig = sizeof(ca_ecc_cert_der_sig);

/* ./ca-cert.der.sign,  */
const unsigned char ca_cert_der_sig[] =
{
    0x0a, 0xc8, 0xbb, 0x7e, 0x5a, 0x72, 0x6a, 0x5b, 0xf0, 0xc6, 0xbf, 0x36,
    0x8e, 0xe1, 0xcd, 0xbc, 0x08, 0xfd, 0x22, 0x5a, 0x3b, 0x48, 0x33, 0xb9,
    0x12, 0x55, 0x80, 0x6c, 0x36, 0x14, 0x05, 0x24, 0x63, 0x20, 0x8b, 0x26,
    0x69, 0xa9, 0xe3, 0x15, 0xb9, 0x00, 0x8d, 0xea, 0x3a, 0xee, 0x2d, 0x41,
    0xec, 0x43, 0x4a, 0x17, 0x48, 0x26, 0x4a, 0xd6, 0xe4, 0x1b, 0xa5, 0x97,
    0x2e, 0xf6, 0x41, 0xa7, 0xa2, 0x2b, 0x83, 0x2c, 0xad, 0x6e, 0x4e, 0xfc,
    0x57, 0xf1, 0x28, 0xf0, 0xa7, 0xf9, 0x5b, 0x48, 0xab, 0xed, 0x63, 0x22,
    0xed, 0x1e, 0xf1, 0x9d, 0xab, 0xbf, 0x9c, 0x78, 0x04, 0x49, 0xad, 0xf1,
    0x43, 0x2f, 0x21, 0x9c, 0x90, 0xb8, 0x35, 0x14, 0x68, 0x12, 0x89, 0x00,
    0x20, 0x5b, 0x83, 0x52, 0xb7, 0xec, 0x26, 0x01, 0x26, 0xe1, 0x0f, 0xf6,
    0x98, 0xd1, 0xb6, 0x28, 0x84, 0xc8, 0xa5, 0x3e, 0xe9, 0xfb, 0x19, 0x2e,
    0x8f, 0xd7, 0x66, 0x98, 0xc0, 0x5e, 0x7b, 0xbc, 0x1a, 0xd9, 0x27, 0xb9,
    0x76, 0xcc, 0x58, 0x48, 0x0c, 0x0c, 0x22, 0x23, 0x19, 0xfd, 0x22, 0xfa,
    0x47, 0x90, 0x38, 0x62, 0xe0, 0x91, 0x79, 0x35, 0x3d, 0xa2, 0x83, 0x99,
    0x2b, 0x86, 0x7a, 0x88, 0x9b, 0x07, 0xe7, 0xc5, 0x95, 0x69, 0x9a, 0x2b,
    0x2e, 0x47, 0xcf, 0xfd, 0x9e, 0x64, 0xb5, 0xca, 0x44, 0x94, 0x95, 0xf3,
    0x2a, 0x8f, 0x4a, 0xcf, 0x0f, 0xd4, 0x7e, 0x0d, 0x0f, 0x2a, 0x0b, 0xb6,
    0x89, 0x64, 0xe3, 0x8c, 0x02, 0x3e, 0x76, 0x66, 0x68, 0x19, 0xa9, 0x07,
    0x5a, 0xc6, 0x33, 0xcd, 0x27, 0xff, 0x07, 0xd4, 0x91, 0x5b, 0x11, 0x3a,
    0xe3, 0xf5, 0x69, 0x70, 0xa7, 0xfe, 0xf2, 0xf0, 0xbd, 0x11, 0xaf, 0xa7,
    0x37, 0xda, 0x24, 0x75, 0x3e, 0x1a, 0x39, 0x49, 0xb4, 0x1e, 0x0e, 0xaf,
    0x5d, 0x1e, 0x94, 0xdf
};
const int sizeof_ca_cert_sig = sizeof(ca_cert_der_sig);
/* ./client-cert.der.sign,  */
const unsigned char client_cert_der_sign[] =
{
    0x5D, 0x1F, 0x89, 0x41, 0xEC, 0x47, 0xC8, 0x90, 0x61, 0x79,
    0x8A, 0x16, 0x1F, 0x31, 0x96, 0x67, 0xD9, 0x3C, 0xEC, 0x6B,
    0x58, 0xC6, 0x5A, 0xED, 0x99, 0xB3, 0xEF, 0x27, 0x6F, 0x04,
    0x8C, 0xD9, 0x68, 0xB1, 0xD6, 0x23, 0x15, 0x84, 0x00, 0xE1,
    0x27, 0xD1, 0x1F, 0x68, 0xB7, 0x3F, 0x13, 0x53, 0x8A, 0x95,
    0x5A, 0x20, 0x7C, 0xB2, 0x76, 0x5B, 0xDC, 0xE0, 0xA6, 0x21,
    0x7C, 0x49, 0xCF, 0x93, 0xBA, 0xD5, 0x12, 0x9F, 0xEE, 0x90,
    0x5B, 0x3F, 0xA3, 0x9D, 0x13, 0x72, 0xAC, 0x72, 0x16, 0xFE,
    0x1D, 0xBE, 0xEB, 0x8E, 0xC7, 0xDC, 0xC4, 0xF8, 0x1A, 0xD8,
    0xA0, 0xA4, 0xF6, 0x04, 0x30, 0xF6, 0x7E, 0xB6, 0xC8, 0xE1,
    0xAB, 0x88, 0x37, 0x08, 0x63, 0x72, 0xAA, 0x46, 0xCC, 0xCA,
    0xF0, 0x9E, 0x02, 0x1E, 0x65, 0x67, 0xFF, 0x2C, 0x9D, 0x81,
    0x6C, 0x1E, 0xF1, 0x54, 0x05, 0x68, 0x68, 0x18, 0x72, 0x26,
    0x55, 0xB6, 0x2C, 0x95, 0xC0, 0xC9, 0xB2, 0xA7, 0x0B, 0x60,
    0xD7, 0xEB, 0x1D, 0x08, 0x1A, 0xA2, 0x54, 0x15, 0x89, 0xCB,
    0x83, 0x21, 0x5D, 0x15, 0x9B, 0x38, 0xAC, 0x89, 0x63, 0xD5,
    0x4B, 0xF4, 0x8B, 0x47, 0x93, 0x78, 0x43, 0xCB, 0x9B, 0x71,
    0xBF, 0x94, 0x76, 0xB5, 0xCE, 0x35, 0xA9, 0x1A, 0xD5, 0xA5,
    0xD8, 0x19, 0xA6, 0x04, 0x39, 0xB1, 0x09, 0x8C, 0x65, 0x02,
    0x58, 0x3A, 0x95, 0xEF, 0xA2, 0xC3, 0x85, 0x18, 0x61, 0x23,
    0x2D, 0xC5, 0xCD, 0x62, 0xC1, 0x19, 0x31, 0xE5, 0x36, 0x95,
    0x22, 0xDB, 0x3E, 0x1A, 0x3C, 0xE8, 0xC6, 0x2E, 0xDF, 0xD9,
    0x2F, 0x84, 0xC1, 0xF0, 0x38, 0x2B, 0xE5, 0x73, 0x35, 0x4F,
    0x05, 0xE2, 0xA5, 0x60, 0x79, 0xB0, 0x23, 0xDC, 0x56, 0x4C,
    0xE7, 0xD9, 0x1F, 0xCF, 0x6A, 0xFC, 0x55, 0xEB, 0xAA, 0x48,
    0x3E, 0x95, 0x2A, 0x10, 0x01, 0x05
};
const int sizeof_client_cert_der_sign = sizeof(client_cert_der_sign);

uint32_t s_inst1[R_TSIP_SINST_WORD_SIZE] = { 0 };
uint32_t s_inst2[R_TSIP_SINST2_WORD_SIZE]= { 0 };

#endif /* WOLFSSL_RENESAS_TSIP_TLS && (WOLFSSL_RENESAS_TSIP_VER >= 109) */
