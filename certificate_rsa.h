/*
 * Copyright (c) 2023 Cisco and/or its affiliates. All rights reserved.
 *
 * SPDX-License-Identifier: MIT OR GPL-2.0-only
 * 
 * Licensed under the MIT license <LICENSE.MIT or https://opensource.org/licenses/MIT> or the GPLv2 license
 * <LICENSE.GPL or https://opensource.org/license/gpl-2-0>, at your option. This file may not be copied, 
 * modified, or distributed except according to those terms.
 */

// Generated with:
//
// git clone https://www.bearssl.org/git/BearSSL
// cd BearSSL && make && mv build/brssl /usr/local/bin/
// openssl req -x509 -newkey rsa:2048 -keyout key.pem -out cert.pem -sha256 -days 365 -nodes
// brssl chain cert.pem
// brssl skey -C key.pem
// brssl ta cert.pem

static const unsigned char CERT0[] = {
	0x30, 0x82, 0x03, 0x6B, 0x30, 0x82, 0x02, 0x53, 0xA0, 0x03, 0x02, 0x01,
	0x02, 0x02, 0x14, 0x42, 0x57, 0x32, 0x68, 0x04, 0x3F, 0x13, 0xFC, 0x5C,
	0x8A, 0x72, 0xD2, 0xE8, 0x64, 0xCC, 0x58, 0x58, 0xA7, 0x95, 0x66, 0x30,
	0x0D, 0x06, 0x09, 0x2A, 0x86, 0x48, 0x86, 0xF7, 0x0D, 0x01, 0x01, 0x0B,
	0x05, 0x00, 0x30, 0x45, 0x31, 0x0B, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04,
	0x06, 0x13, 0x02, 0x41, 0x55, 0x31, 0x13, 0x30, 0x11, 0x06, 0x03, 0x55,
	0x04, 0x08, 0x0C, 0x0A, 0x53, 0x6F, 0x6D, 0x65, 0x2D, 0x53, 0x74, 0x61,
	0x74, 0x65, 0x31, 0x21, 0x30, 0x1F, 0x06, 0x03, 0x55, 0x04, 0x0A, 0x0C,
	0x18, 0x49, 0x6E, 0x74, 0x65, 0x72, 0x6E, 0x65, 0x74, 0x20, 0x57, 0x69,
	0x64, 0x67, 0x69, 0x74, 0x73, 0x20, 0x50, 0x74, 0x79, 0x20, 0x4C, 0x74,
	0x64, 0x30, 0x1E, 0x17, 0x0D, 0x32, 0x33, 0x30, 0x34, 0x30, 0x31, 0x31,
	0x31, 0x32, 0x31, 0x30, 0x38, 0x5A, 0x17, 0x0D, 0x32, 0x34, 0x30, 0x33,
	0x33, 0x31, 0x31, 0x31, 0x32, 0x31, 0x30, 0x38, 0x5A, 0x30, 0x45, 0x31,
	0x0B, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x41, 0x55,
	0x31, 0x13, 0x30, 0x11, 0x06, 0x03, 0x55, 0x04, 0x08, 0x0C, 0x0A, 0x53,
	0x6F, 0x6D, 0x65, 0x2D, 0x53, 0x74, 0x61, 0x74, 0x65, 0x31, 0x21, 0x30,
	0x1F, 0x06, 0x03, 0x55, 0x04, 0x0A, 0x0C, 0x18, 0x49, 0x6E, 0x74, 0x65,
	0x72, 0x6E, 0x65, 0x74, 0x20, 0x57, 0x69, 0x64, 0x67, 0x69, 0x74, 0x73,
	0x20, 0x50, 0x74, 0x79, 0x20, 0x4C, 0x74, 0x64, 0x30, 0x82, 0x01, 0x22,
	0x30, 0x0D, 0x06, 0x09, 0x2A, 0x86, 0x48, 0x86, 0xF7, 0x0D, 0x01, 0x01,
	0x01, 0x05, 0x00, 0x03, 0x82, 0x01, 0x0F, 0x00, 0x30, 0x82, 0x01, 0x0A,
	0x02, 0x82, 0x01, 0x01, 0x00, 0xD9, 0xA8, 0x8B, 0xB4, 0xFE, 0x87, 0x08,
	0x9D, 0x1F, 0x47, 0xEE, 0xBB, 0x4E, 0xAC, 0x65, 0x47, 0x47, 0x2B, 0xCB,
	0xA8, 0x70, 0xE8, 0xC2, 0xCC, 0x00, 0xF4, 0x3B, 0x7F, 0x58, 0x04, 0xED,
	0xC5, 0xFB, 0x3D, 0x5C, 0x12, 0x4C, 0x84, 0x5A, 0xE4, 0x8B, 0xF4, 0x1D,
	0x4C, 0xA5, 0xA1, 0xB6, 0x8A, 0xA5, 0xE3, 0x78, 0x37, 0xB2, 0xF6, 0x30,
	0xEC, 0x32, 0xD9, 0xB6, 0x97, 0xFD, 0xC8, 0x15, 0x8B, 0x6A, 0xD0, 0x4D,
	0x97, 0xCE, 0xC0, 0x46, 0x08, 0x0C, 0xEE, 0x79, 0x4F, 0xE5, 0x2D, 0x3C,
	0x45, 0x63, 0xEA, 0x06, 0x63, 0x5E, 0x36, 0xDD, 0x5E, 0x5C, 0xCE, 0x96,
	0xF9, 0xBB, 0xEC, 0x9D, 0xBF, 0x73, 0x1B, 0xB0, 0xBF, 0xA2, 0xDA, 0x52,
	0x18, 0x6A, 0x37, 0x47, 0x19, 0xE2, 0xB7, 0x16, 0x1E, 0xE0, 0x80, 0x28,
	0xA4, 0x5A, 0xF7, 0xA7, 0x02, 0x0D, 0x8E, 0x7C, 0xD4, 0xA2, 0xE1, 0x88,
	0xD9, 0x7B, 0x9E, 0x8D, 0x9C, 0xBF, 0x19, 0x99, 0xA2, 0x16, 0xD7, 0xD9,
	0xF5, 0x95, 0x0B, 0x54, 0x5B, 0xD7, 0xA1, 0x53, 0xC1, 0x4A, 0x43, 0xFD,
	0xEA, 0xA5, 0x30, 0x63, 0xAA, 0xA5, 0xAA, 0x21, 0xCC, 0xAC, 0x3E, 0x74,
	0xB3, 0xA7, 0x12, 0x16, 0xD1, 0x51, 0x19, 0x0F, 0x92, 0x54, 0xDC, 0xF5,
	0xA5, 0x8B, 0x9F, 0x5D, 0x48, 0xEB, 0xC8, 0xC3, 0xA1, 0x6B, 0xD5, 0xF3,
	0xB3, 0x05, 0xB3, 0xCC, 0x85, 0x6B, 0x13, 0x2B, 0x3F, 0x72, 0x94, 0x32,
	0x20, 0xCC, 0xD0, 0x9D, 0x54, 0x2D, 0x9E, 0x70, 0x9D, 0x71, 0xB2, 0x48,
	0x0E, 0xCB, 0xC8, 0x2B, 0x29, 0x3C, 0x0D, 0xC0, 0x5F, 0x5E, 0x03, 0xC9,
	0xB6, 0xED, 0x45, 0x37, 0xD0, 0x73, 0x32, 0x77, 0x93, 0x28, 0xF1, 0x02,
	0x88, 0xBC, 0x00, 0xD4, 0xEC, 0xF5, 0x79, 0x85, 0x3C, 0x9A, 0x09, 0x3F,
	0x50, 0xD3, 0x71, 0xC5, 0x1A, 0xA8, 0xCB, 0x93, 0xC5, 0x02, 0x03, 0x01,
	0x00, 0x01, 0xA3, 0x53, 0x30, 0x51, 0x30, 0x1D, 0x06, 0x03, 0x55, 0x1D,
	0x0E, 0x04, 0x16, 0x04, 0x14, 0x2D, 0x5A, 0x5F, 0x25, 0x56, 0x03, 0x13,
	0x87, 0x91, 0x98, 0x3C, 0x08, 0x5B, 0xDF, 0x2D, 0xD2, 0xCF, 0xEA, 0xCC,
	0x38, 0x30, 0x1F, 0x06, 0x03, 0x55, 0x1D, 0x23, 0x04, 0x18, 0x30, 0x16,
	0x80, 0x14, 0x2D, 0x5A, 0x5F, 0x25, 0x56, 0x03, 0x13, 0x87, 0x91, 0x98,
	0x3C, 0x08, 0x5B, 0xDF, 0x2D, 0xD2, 0xCF, 0xEA, 0xCC, 0x38, 0x30, 0x0F,
	0x06, 0x03, 0x55, 0x1D, 0x13, 0x01, 0x01, 0xFF, 0x04, 0x05, 0x30, 0x03,
	0x01, 0x01, 0xFF, 0x30, 0x0D, 0x06, 0x09, 0x2A, 0x86, 0x48, 0x86, 0xF7,
	0x0D, 0x01, 0x01, 0x0B, 0x05, 0x00, 0x03, 0x82, 0x01, 0x01, 0x00, 0x1C,
	0x17, 0xFC, 0x4B, 0x99, 0xBC, 0x82, 0x15, 0x8D, 0x73, 0x32, 0xD1, 0x48,
	0xE3, 0x24, 0x0F, 0x29, 0xC7, 0x54, 0x9F, 0xF1, 0x7E, 0x00, 0x4C, 0x28,
	0xEB, 0x78, 0x0C, 0x7A, 0x6F, 0xA2, 0x6A, 0x3C, 0x48, 0xB9, 0xB4, 0x1E,
	0x78, 0xFD, 0x74, 0x49, 0x56, 0xF1, 0x1E, 0xB7, 0xC1, 0x67, 0xF2, 0x9A,
	0x29, 0xFB, 0x6A, 0xA3, 0x58, 0x19, 0x59, 0x57, 0x74, 0x29, 0x30, 0x51,
	0x94, 0x9F, 0x04, 0xDD, 0xC3, 0x5C, 0x10, 0x96, 0xF2, 0x04, 0x3F, 0xA1,
	0x18, 0x7F, 0x67, 0xBE, 0x7B, 0xF2, 0xDF, 0xCD, 0x2B, 0x54, 0x94, 0x92,
	0xD9, 0x30, 0x1B, 0x37, 0x7F, 0x6D, 0xB9, 0x2F, 0xB9, 0xD8, 0x7E, 0x27,
	0xD1, 0xC0, 0xD8, 0x0A, 0x26, 0xB6, 0xDE, 0x9F, 0xAA, 0xD6, 0x7C, 0xF8,
	0x5B, 0xD0, 0xA1, 0xC4, 0x70, 0x6B, 0xFF, 0x93, 0xCE, 0xB6, 0xAD, 0x3B,
	0xC4, 0x97, 0xCD, 0x7A, 0x12, 0x84, 0xD6, 0xB8, 0x1A, 0x69, 0xEB, 0xA1,
	0x05, 0xB5, 0x5A, 0x4D, 0xBA, 0xB0, 0x4E, 0x75, 0x45, 0x74, 0x9A, 0x3F,
	0xD7, 0xA8, 0x25, 0xD2, 0xAB, 0xE3, 0x81, 0x4F, 0xDF, 0x9D, 0x5E, 0x90,
	0x93, 0x03, 0xD5, 0x4C, 0x73, 0xA2, 0x5E, 0x55, 0xF6, 0xFA, 0x0E, 0x36,
	0x79, 0x2C, 0x00, 0xAE, 0x73, 0xE4, 0x2E, 0x2D, 0x8A, 0xD9, 0xB6, 0xFE,
	0x91, 0x8D, 0xEA, 0xCF, 0xDA, 0x02, 0xB1, 0xEA, 0xE5, 0x19, 0x7F, 0x33,
	0x71, 0xCD, 0xBE, 0xFE, 0x0B, 0xA7, 0xF2, 0xB3, 0xA0, 0x91, 0x55, 0xDA,
	0x60, 0x2F, 0x3C, 0xB3, 0xE0, 0x6B, 0x34, 0xCC, 0x46, 0x09, 0xDD, 0x57,
	0x20, 0x90, 0xCE, 0x4F, 0x16, 0x63, 0x53, 0x3D, 0x35, 0x67, 0x20, 0x1B,
	0x61, 0xF9, 0xE2, 0xAB, 0x41, 0x22, 0xF1, 0x26, 0xE9, 0x27, 0x93, 0x53,
	0xEB, 0x67, 0x08, 0x62, 0xC7, 0x8C, 0x56, 0x81, 0x52, 0x2F, 0xD9, 0xAF,
	0xFA, 0xE7, 0x5D
};

static const br_x509_certificate CHAIN[] = {
	{ (unsigned char *)CERT0, sizeof CERT0 }
};

#define CHAIN_LEN   1

// Private key

static const unsigned char RSA_P[] = {
	0xF5, 0xE9, 0xE5, 0xD9, 0x0C, 0x22, 0xB7, 0x1B, 0x8F, 0x00, 0x8C, 0x51,
	0x6A, 0xF9, 0x62, 0x30, 0x17, 0x45, 0xCE, 0xBA, 0xBA, 0xA0, 0x9E, 0x5E,
	0xFE, 0xD6, 0xD5, 0xE7, 0x41, 0x32, 0x2D, 0x4E, 0x11, 0x0F, 0xDD, 0x72,
	0x25, 0xD7, 0x43, 0x9B, 0x2C, 0xD2, 0xEC, 0x54, 0xFC, 0x2D, 0xE5, 0x0D,
	0x2D, 0x28, 0xA3, 0x3C, 0x87, 0xED, 0xC2, 0xF4, 0x3F, 0x64, 0xAC, 0xE2,
	0x3A, 0x6A, 0xEC, 0xA3, 0x23, 0x0D, 0x4B, 0x88, 0x0F, 0xC8, 0x71, 0x99,
	0x85, 0xAD, 0xDF, 0xCE, 0x7E, 0x49, 0xA2, 0x7C, 0x8E, 0xF3, 0xAA, 0xDE,
	0x61, 0x6C, 0x3E, 0x1F, 0x1E, 0x00, 0x5D, 0xE3, 0xB0, 0xA2, 0xA1, 0xC3,
	0xFC, 0x6B, 0x3E, 0xFE, 0x7D, 0xBC, 0xD0, 0xA5, 0xFD, 0xDE, 0x2A, 0x7C,
	0x03, 0x81, 0xF4, 0x3E, 0xFC, 0x86, 0xAC, 0x90, 0xFA, 0x07, 0xAA, 0xA0,
	0xAA, 0x60, 0x07, 0x11, 0x50, 0x59, 0x46, 0x45
};

static const unsigned char RSA_Q[] = {
	0xE2, 0x95, 0xF7, 0x68, 0x06, 0xF8, 0xDA, 0x81, 0xFC, 0x02, 0xE3, 0x9F,
	0xDF, 0xDD, 0xA1, 0xD4, 0x1E, 0x8A, 0x7B, 0x77, 0x6C, 0xFA, 0x79, 0x0E,
	0x96, 0x6C, 0x09, 0xC4, 0x7D, 0xD8, 0x23, 0x8D, 0x9F, 0x13, 0xDA, 0x3F,
	0x0B, 0xC1, 0x3C, 0x64, 0x08, 0x2A, 0xA1, 0x80, 0xF9, 0x27, 0x0C, 0xD0,
	0xC7, 0xF1, 0x63, 0x73, 0x5B, 0x93, 0x08, 0xB6, 0x0B, 0x12, 0x2A, 0x53,
	0x99, 0x19, 0xC6, 0xDF, 0x86, 0x68, 0xA4, 0x7E, 0x4F, 0xA5, 0x70, 0x44,
	0x03, 0x15, 0xB6, 0x97, 0x6B, 0x8D, 0xC6, 0x48, 0x1E, 0x45, 0x71, 0xD1,
	0x10, 0xED, 0x03, 0x7F, 0x69, 0x45, 0xAD, 0x44, 0xD8, 0x66, 0x63, 0xA2,
	0x71, 0x16, 0x3C, 0x2D, 0xAC, 0xEF, 0x36, 0x49, 0x75, 0xF1, 0x0C, 0xBB,
	0x33, 0x51, 0x05, 0x4E, 0x61, 0x1B, 0xA0, 0x2F, 0xAD, 0xCC, 0xE3, 0xCB,
	0x79, 0xD2, 0x15, 0xC0, 0x69, 0x0E, 0xAF, 0x81
};

static const unsigned char RSA_DP[] = {
	0x05, 0x6C, 0x0B, 0xD2, 0x56, 0x4F, 0x29, 0xA4, 0x64, 0xE9, 0xC9, 0x2E,
	0x3E, 0x62, 0x93, 0x44, 0xA6, 0x2E, 0xB6, 0xD9, 0x2D, 0x26, 0x3F, 0x77,
	0xAE, 0xBC, 0xC3, 0xE8, 0x9E, 0x6A, 0x61, 0xCF, 0x57, 0xD6, 0xF6, 0xB5,
	0xFE, 0x99, 0x99, 0x77, 0x01, 0x6D, 0x01, 0x22, 0xFA, 0x90, 0x74, 0x7D,
	0x6E, 0xE2, 0x77, 0x7E, 0xED, 0x2C, 0x53, 0xE1, 0x18, 0xC8, 0xBA, 0x7B,
	0x1E, 0x78, 0x9F, 0x11, 0x15, 0xC3, 0xC4, 0x47, 0x92, 0xB9, 0x83, 0xAF,
	0xB3, 0xDF, 0xDA, 0x90, 0x6D, 0xFE, 0x67, 0xA3, 0xC1, 0x6F, 0x23, 0xF4,
	0x55, 0x47, 0x92, 0xB3, 0x12, 0xF1, 0x45, 0x20, 0xB1, 0x13, 0x54, 0xE7,
	0xC2, 0x58, 0x07, 0x02, 0x8B, 0x79, 0x2F, 0x4C, 0x89, 0xA5, 0x6D, 0x60,
	0x60, 0x9F, 0x6B, 0xE8, 0x3B, 0x9F, 0x28, 0x8C, 0xE5, 0xC6, 0x67, 0x7F,
	0xB5, 0x61, 0xFA, 0xA5, 0xEA, 0x14, 0x9D, 0xD5
};

static const unsigned char RSA_DQ[] = {
	0x73, 0x4B, 0xE4, 0x2C, 0xA6, 0xFF, 0x92, 0x10, 0x7A, 0x6F, 0xED, 0xEB,
	0xB8, 0x3A, 0x4A, 0xD2, 0x69, 0x08, 0x06, 0x73, 0x6A, 0x9C, 0xB9, 0x64,
	0xD6, 0xDD, 0xFA, 0xCA, 0x65, 0x4E, 0xCA, 0x28, 0x92, 0x3D, 0xC3, 0xDC,
	0x38, 0xDB, 0x07, 0x23, 0xCF, 0x94, 0x01, 0xC2, 0x63, 0x05, 0x9F, 0xDB,
	0xCD, 0x21, 0xE3, 0x7D, 0x1B, 0xA7, 0xE1, 0xD2, 0xE0, 0x27, 0x4A, 0x2A,
	0x67, 0xC9, 0x5A, 0x0C, 0xFB, 0x93, 0xDB, 0xBF, 0xFA, 0x3F, 0x30, 0xB5,
	0x2A, 0xEC, 0xAD, 0x90, 0xB7, 0x45, 0xD9, 0x13, 0x71, 0x73, 0xDC, 0xCA,
	0x89, 0x56, 0x51, 0x65, 0x4F, 0xE8, 0x08, 0x96, 0xF3, 0x96, 0x86, 0x34,
	0x6E, 0x5E, 0xE6, 0x18, 0x47, 0xDB, 0x21, 0x40, 0x98, 0x27, 0x24, 0x57,
	0x4D, 0x71, 0x78, 0xC5, 0xBD, 0x5C, 0x15, 0x52, 0xAD, 0x99, 0x88, 0x80,
	0x4D, 0x68, 0xBD, 0x70, 0xBF, 0x04, 0x9E, 0x01
};

static const unsigned char RSA_IQ[] = {
	0x57, 0xBC, 0x5F, 0xB3, 0x39, 0xE2, 0x62, 0x40, 0x2F, 0xB0, 0xE1, 0xFA,
	0x41, 0xE8, 0xA1, 0xE7, 0x56, 0x86, 0x7A, 0xAE, 0x48, 0xEC, 0x22, 0xE0,
	0xAB, 0x81, 0xFE, 0x3C, 0x95, 0xC6, 0xF9, 0xDE, 0x83, 0x01, 0x94, 0x4F,
	0xD4, 0x11, 0xCB, 0x0C, 0x5F, 0x36, 0x7D, 0x98, 0x48, 0x8E, 0xBB, 0xBA,
	0x3C, 0xC4, 0x22, 0x85, 0xA5, 0x17, 0x63, 0x29, 0x34, 0x1D, 0xB4, 0x03,
	0x99, 0xF1, 0xD1, 0x65, 0x30, 0x27, 0xF2, 0x09, 0x83, 0x46, 0xD5, 0xDF,
	0xE2, 0x9E, 0xF3, 0x22, 0x65, 0x13, 0x05, 0xB5, 0x37, 0xB5, 0xE2, 0x36,
	0xB3, 0x2C, 0x56, 0x19, 0x5A, 0x06, 0xDF, 0x72, 0xB6, 0x4D, 0x52, 0x4A,
	0xE8, 0x83, 0x1B, 0x58, 0xA2, 0x40, 0x79, 0xB0, 0x5A, 0x9B, 0xFB, 0xE4,
	0xAC, 0xE5, 0xFC, 0x80, 0x14, 0xBD, 0xA6, 0xE2, 0xE6, 0xA5, 0xEA, 0x67,
	0x9B, 0xB8, 0xEF, 0x13, 0x50, 0xA9, 0xB5, 0x17
};

static const br_rsa_private_key RSA = {
	2048,
	(unsigned char *)RSA_P, sizeof RSA_P,
	(unsigned char *)RSA_Q, sizeof RSA_Q,
	(unsigned char *)RSA_DP, sizeof RSA_DP,
	(unsigned char *)RSA_DQ, sizeof RSA_DQ,
	(unsigned char *)RSA_IQ, sizeof RSA_IQ
};

// Trust anchor

static const unsigned char TA0_DN[] = {
	0x30, 0x45, 0x31, 0x0B, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13,
	0x02, 0x41, 0x55, 0x31, 0x13, 0x30, 0x11, 0x06, 0x03, 0x55, 0x04, 0x08,
	0x0C, 0x0A, 0x53, 0x6F, 0x6D, 0x65, 0x2D, 0x53, 0x74, 0x61, 0x74, 0x65,
	0x31, 0x21, 0x30, 0x1F, 0x06, 0x03, 0x55, 0x04, 0x0A, 0x0C, 0x18, 0x49,
	0x6E, 0x74, 0x65, 0x72, 0x6E, 0x65, 0x74, 0x20, 0x57, 0x69, 0x64, 0x67,
	0x69, 0x74, 0x73, 0x20, 0x50, 0x74, 0x79, 0x20, 0x4C, 0x74, 0x64
};

static const unsigned char TA0_RSA_N[] = {
	0xD9, 0xA8, 0x8B, 0xB4, 0xFE, 0x87, 0x08, 0x9D, 0x1F, 0x47, 0xEE, 0xBB,
	0x4E, 0xAC, 0x65, 0x47, 0x47, 0x2B, 0xCB, 0xA8, 0x70, 0xE8, 0xC2, 0xCC,
	0x00, 0xF4, 0x3B, 0x7F, 0x58, 0x04, 0xED, 0xC5, 0xFB, 0x3D, 0x5C, 0x12,
	0x4C, 0x84, 0x5A, 0xE4, 0x8B, 0xF4, 0x1D, 0x4C, 0xA5, 0xA1, 0xB6, 0x8A,
	0xA5, 0xE3, 0x78, 0x37, 0xB2, 0xF6, 0x30, 0xEC, 0x32, 0xD9, 0xB6, 0x97,
	0xFD, 0xC8, 0x15, 0x8B, 0x6A, 0xD0, 0x4D, 0x97, 0xCE, 0xC0, 0x46, 0x08,
	0x0C, 0xEE, 0x79, 0x4F, 0xE5, 0x2D, 0x3C, 0x45, 0x63, 0xEA, 0x06, 0x63,
	0x5E, 0x36, 0xDD, 0x5E, 0x5C, 0xCE, 0x96, 0xF9, 0xBB, 0xEC, 0x9D, 0xBF,
	0x73, 0x1B, 0xB0, 0xBF, 0xA2, 0xDA, 0x52, 0x18, 0x6A, 0x37, 0x47, 0x19,
	0xE2, 0xB7, 0x16, 0x1E, 0xE0, 0x80, 0x28, 0xA4, 0x5A, 0xF7, 0xA7, 0x02,
	0x0D, 0x8E, 0x7C, 0xD4, 0xA2, 0xE1, 0x88, 0xD9, 0x7B, 0x9E, 0x8D, 0x9C,
	0xBF, 0x19, 0x99, 0xA2, 0x16, 0xD7, 0xD9, 0xF5, 0x95, 0x0B, 0x54, 0x5B,
	0xD7, 0xA1, 0x53, 0xC1, 0x4A, 0x43, 0xFD, 0xEA, 0xA5, 0x30, 0x63, 0xAA,
	0xA5, 0xAA, 0x21, 0xCC, 0xAC, 0x3E, 0x74, 0xB3, 0xA7, 0x12, 0x16, 0xD1,
	0x51, 0x19, 0x0F, 0x92, 0x54, 0xDC, 0xF5, 0xA5, 0x8B, 0x9F, 0x5D, 0x48,
	0xEB, 0xC8, 0xC3, 0xA1, 0x6B, 0xD5, 0xF3, 0xB3, 0x05, 0xB3, 0xCC, 0x85,
	0x6B, 0x13, 0x2B, 0x3F, 0x72, 0x94, 0x32, 0x20, 0xCC, 0xD0, 0x9D, 0x54,
	0x2D, 0x9E, 0x70, 0x9D, 0x71, 0xB2, 0x48, 0x0E, 0xCB, 0xC8, 0x2B, 0x29,
	0x3C, 0x0D, 0xC0, 0x5F, 0x5E, 0x03, 0xC9, 0xB6, 0xED, 0x45, 0x37, 0xD0,
	0x73, 0x32, 0x77, 0x93, 0x28, 0xF1, 0x02, 0x88, 0xBC, 0x00, 0xD4, 0xEC,
	0xF5, 0x79, 0x85, 0x3C, 0x9A, 0x09, 0x3F, 0x50, 0xD3, 0x71, 0xC5, 0x1A,
	0xA8, 0xCB, 0x93, 0xC5
};

static const unsigned char TA0_RSA_E[] = {
	0x01, 0x00, 0x01
};

static const br_x509_trust_anchor TAs[1] = {
	{
		{ (unsigned char *)TA0_DN, sizeof TA0_DN },
		BR_X509_TA_CA,
		{
			BR_KEYTYPE_RSA,
			{ .rsa = {
				(unsigned char *)TA0_RSA_N, sizeof TA0_RSA_N,
				(unsigned char *)TA0_RSA_E, sizeof TA0_RSA_E,
			} }
		}
	}
};

#define TAs_NUM   1
