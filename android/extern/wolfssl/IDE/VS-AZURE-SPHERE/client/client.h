/* client.h
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



#ifndef WOLFSSL_CLIENT_H
#define WOLFSSL_CLIENT_H

static const unsigned char wolfssl_website_root_ca[] =
{
    0x30, 0x82, 0x03, 0x75, 0x30, 0x82, 0x02, 0x5D, 0xA0, 0x03,
    0x02, 0x01, 0x02, 0x02, 0x0B, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x15, 0x4B, 0x5A, 0xC3, 0x94, 0x30, 0x0D, 0x06, 0x09,
    0x2A, 0x86, 0x48, 0x86, 0xF7, 0x0D, 0x01, 0x01, 0x05, 0x05,
    0x00, 0x30, 0x57, 0x31, 0x0B, 0x30, 0x09, 0x06, 0x03, 0x55,
    0x04, 0x06, 0x13, 0x02, 0x42, 0x45, 0x31, 0x19, 0x30, 0x17,
    0x06, 0x03, 0x55, 0x04, 0x0A, 0x13, 0x10, 0x47, 0x6C, 0x6F,
    0x62, 0x61, 0x6C, 0x53, 0x69, 0x67, 0x6E, 0x20, 0x6E, 0x76,
    0x2D, 0x73, 0x61, 0x31, 0x10, 0x30, 0x0E, 0x06, 0x03, 0x55,
    0x04, 0x0B, 0x13, 0x07, 0x52, 0x6F, 0x6F, 0x74, 0x20, 0x43,
    0x41, 0x31, 0x1B, 0x30, 0x19, 0x06, 0x03, 0x55, 0x04, 0x03,
    0x13, 0x12, 0x47, 0x6C, 0x6F, 0x62, 0x61, 0x6C, 0x53, 0x69,
    0x67, 0x6E, 0x20, 0x52, 0x6F, 0x6F, 0x74, 0x20, 0x43, 0x41,
    0x30, 0x1E, 0x17, 0x0D, 0x39, 0x38, 0x30, 0x39, 0x30, 0x31,
    0x31, 0x32, 0x30, 0x30, 0x30, 0x30, 0x5A, 0x17, 0x0D, 0x32,
    0x38, 0x30, 0x31, 0x32, 0x38, 0x31, 0x32, 0x30, 0x30, 0x30,
    0x30, 0x5A, 0x30, 0x57, 0x31, 0x0B, 0x30, 0x09, 0x06, 0x03,
    0x55, 0x04, 0x06, 0x13, 0x02, 0x42, 0x45, 0x31, 0x19, 0x30,
    0x17, 0x06, 0x03, 0x55, 0x04, 0x0A, 0x13, 0x10, 0x47, 0x6C,
    0x6F, 0x62, 0x61, 0x6C, 0x53, 0x69, 0x67, 0x6E, 0x20, 0x6E,
    0x76, 0x2D, 0x73, 0x61, 0x31, 0x10, 0x30, 0x0E, 0x06, 0x03,
    0x55, 0x04, 0x0B, 0x13, 0x07, 0x52, 0x6F, 0x6F, 0x74, 0x20,
    0x43, 0x41, 0x31, 0x1B, 0x30, 0x19, 0x06, 0x03, 0x55, 0x04,
    0x03, 0x13, 0x12, 0x47, 0x6C, 0x6F, 0x62, 0x61, 0x6C, 0x53,
    0x69, 0x67, 0x6E, 0x20, 0x52, 0x6F, 0x6F, 0x74, 0x20, 0x43,
    0x41, 0x30, 0x82, 0x01, 0x22, 0x30, 0x0D, 0x06, 0x09, 0x2A,
    0x86, 0x48, 0x86, 0xF7, 0x0D, 0x01, 0x01, 0x01, 0x05, 0x00,
    0x03, 0x82, 0x01, 0x0F, 0x00, 0x30, 0x82, 0x01, 0x0A, 0x02,
    0x82, 0x01, 0x01, 0x00, 0xDA, 0x0E, 0xE6, 0x99, 0x8D, 0xCE,
    0xA3, 0xE3, 0x4F, 0x8A, 0x7E, 0xFB, 0xF1, 0x8B, 0x83, 0x25,
    0x6B, 0xEA, 0x48, 0x1F, 0xF1, 0x2A, 0xB0, 0xB9, 0x95, 0x11,
    0x04, 0xBD, 0xF0, 0x63, 0xD1, 0xE2, 0x67, 0x66, 0xCF, 0x1C,
    0xDD, 0xCF, 0x1B, 0x48, 0x2B, 0xEE, 0x8D, 0x89, 0x8E, 0x9A,
    0xAF, 0x29, 0x80, 0x65, 0xAB, 0xE9, 0xC7, 0x2D, 0x12, 0xCB,
    0xAB, 0x1C, 0x4C, 0x70, 0x07, 0xA1, 0x3D, 0x0A, 0x30, 0xCD,
    0x15, 0x8D, 0x4F, 0xF8, 0xDD, 0xD4, 0x8C, 0x50, 0x15, 0x1C,
    0xEF, 0x50, 0xEE, 0xC4, 0x2E, 0xF7, 0xFC, 0xE9, 0x52, 0xF2,
    0x91, 0x7D, 0xE0, 0x6D, 0xD5, 0x35, 0x30, 0x8E, 0x5E, 0x43,
    0x73, 0xF2, 0x41, 0xE9, 0xD5, 0x6A, 0xE3, 0xB2, 0x89, 0x3A,
    0x56, 0x39, 0x38, 0x6F, 0x06, 0x3C, 0x88, 0x69, 0x5B, 0x2A,
    0x4D, 0xC5, 0xA7, 0x54, 0xB8, 0x6C, 0x89, 0xCC, 0x9B, 0xF9,
    0x3C, 0xCA, 0xE5, 0xFD, 0x89, 0xF5, 0x12, 0x3C, 0x92, 0x78,
    0x96, 0xD6, 0xDC, 0x74, 0x6E, 0x93, 0x44, 0x61, 0xD1, 0x8D,
    0xC7, 0x46, 0xB2, 0x75, 0x0E, 0x86, 0xE8, 0x19, 0x8A, 0xD5,
    0x6D, 0x6C, 0xD5, 0x78, 0x16, 0x95, 0xA2, 0xE9, 0xC8, 0x0A,
    0x38, 0xEB, 0xF2, 0x24, 0x13, 0x4F, 0x73, 0x54, 0x93, 0x13,
    0x85, 0x3A, 0x1B, 0xBC, 0x1E, 0x34, 0xB5, 0x8B, 0x05, 0x8C,
    0xB9, 0x77, 0x8B, 0xB1, 0xDB, 0x1F, 0x20, 0x91, 0xAB, 0x09,
    0x53, 0x6E, 0x90, 0xCE, 0x7B, 0x37, 0x74, 0xB9, 0x70, 0x47,
    0x91, 0x22, 0x51, 0x63, 0x16, 0x79, 0xAE, 0xB1, 0xAE, 0x41,
    0x26, 0x08, 0xC8, 0x19, 0x2B, 0xD1, 0x46, 0xAA, 0x48, 0xD6,
    0x64, 0x2A, 0xD7, 0x83, 0x34, 0xFF, 0x2C, 0x2A, 0xC1, 0x6C,
    0x19, 0x43, 0x4A, 0x07, 0x85, 0xE7, 0xD3, 0x7C, 0xF6, 0x21,
    0x68, 0xEF, 0xEA, 0xF2, 0x52, 0x9F, 0x7F, 0x93, 0x90, 0xCF,
    0x02, 0x03, 0x01, 0x00, 0x01, 0xA3, 0x42, 0x30, 0x40, 0x30,
    0x0E, 0x06, 0x03, 0x55, 0x1D, 0x0F, 0x01, 0x01, 0xFF, 0x04,
    0x04, 0x03, 0x02, 0x01, 0x06, 0x30, 0x0F, 0x06, 0x03, 0x55,
    0x1D, 0x13, 0x01, 0x01, 0xFF, 0x04, 0x05, 0x30, 0x03, 0x01,
    0x01, 0xFF, 0x30, 0x1D, 0x06, 0x03, 0x55, 0x1D, 0x0E, 0x04,
    0x16, 0x04, 0x14, 0x60, 0x7B, 0x66, 0x1A, 0x45, 0x0D, 0x97,
    0xCA, 0x89, 0x50, 0x2F, 0x7D, 0x04, 0xCD, 0x34, 0xA8, 0xFF,
    0xFC, 0xFD, 0x4B, 0x30, 0x0D, 0x06, 0x09, 0x2A, 0x86, 0x48,
    0x86, 0xF7, 0x0D, 0x01, 0x01, 0x05, 0x05, 0x00, 0x03, 0x82,
    0x01, 0x01, 0x00, 0xD6, 0x73, 0xE7, 0x7C, 0x4F, 0x76, 0xD0,
    0x8D, 0xBF, 0xEC, 0xBA, 0xA2, 0xBE, 0x34, 0xC5, 0x28, 0x32,
    0xB5, 0x7C, 0xFC, 0x6C, 0x9C, 0x2C, 0x2B, 0xBD, 0x09, 0x9E,
    0x53, 0xBF, 0x6B, 0x5E, 0xAA, 0x11, 0x48, 0xB6, 0xE5, 0x08,
    0xA3, 0xB3, 0xCA, 0x3D, 0x61, 0x4D, 0xD3, 0x46, 0x09, 0xB3,
    0x3E, 0xC3, 0xA0, 0xE3, 0x63, 0x55, 0x1B, 0xF2, 0xBA, 0xEF,
    0xAD, 0x39, 0xE1, 0x43, 0xB9, 0x38, 0xA3, 0xE6, 0x2F, 0x8A,
    0x26, 0x3B, 0xEF, 0xA0, 0x50, 0x56, 0xF9, 0xC6, 0x0A, 0xFD,
    0x38, 0xCD, 0xC4, 0x0B, 0x70, 0x51, 0x94, 0x97, 0x98, 0x04,
    0xDF, 0xC3, 0x5F, 0x94, 0xD5, 0x15, 0xC9, 0x14, 0x41, 0x9C,
    0xC4, 0x5D, 0x75, 0x64, 0x15, 0x0D, 0xFF, 0x55, 0x30, 0xEC,
    0x86, 0x8F, 0xFF, 0x0D, 0xEF, 0x2C, 0xB9, 0x63, 0x46, 0xF6,
    0xAA, 0xFC, 0xDF, 0xBC, 0x69, 0xFD, 0x2E, 0x12, 0x48, 0x64,
    0x9A, 0xE0, 0x95, 0xF0, 0xA6, 0xEF, 0x29, 0x8F, 0x01, 0xB1,
    0x15, 0xB5, 0x0C, 0x1D, 0xA5, 0xFE, 0x69, 0x2C, 0x69, 0x24,
    0x78, 0x1E, 0xB3, 0xA7, 0x1C, 0x71, 0x62, 0xEE, 0xCA, 0xC8,
    0x97, 0xAC, 0x17, 0x5D, 0x8A, 0xC2, 0xF8, 0x47, 0x86, 0x6E,
    0x2A, 0xC4, 0x56, 0x31, 0x95, 0xD0, 0x67, 0x89, 0x85, 0x2B,
    0xF9, 0x6C, 0xA6, 0x5D, 0x46, 0x9D, 0x0C, 0xAA, 0x82, 0xE4,
    0x99, 0x51, 0xDD, 0x70, 0xB7, 0xDB, 0x56, 0x3D, 0x61, 0xE4,
    0x6A, 0xE1, 0x5C, 0xD6, 0xF6, 0xFE, 0x3D, 0xDE, 0x41, 0xCC,
    0x07, 0xAE, 0x63, 0x52, 0xBF, 0x53, 0x53, 0xF4, 0x2B, 0xE9,
    0xC7, 0xFD, 0xB6, 0xF7, 0x82, 0x5F, 0x85, 0xD2, 0x41, 0x18,
    0xDB, 0x81, 0xB3, 0x04, 0x1C, 0xC5, 0x1F, 0xA4, 0x80, 0x6F,
    0x15, 0x20, 0xC9, 0xDE, 0x0C, 0x88, 0x0A, 0x1D, 0xD6, 0x66,
    0x55, 0xE2, 0xFC, 0x48, 0xC9, 0x29, 0x26, 0x69, 0xE0
};
static const int sizeof_wolfssl_website_root_ca = sizeof(wolfssl_website_root_ca);

#endif /* WOLFSSL_CLIENT_H */
