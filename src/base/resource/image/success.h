#pragma once

int success_size = 687;

unsigned char success[] = {
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 
	0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x17, 0x08, 0x06, 0x00, 0x00, 0x00, 0xE0, 0x2A, 0xD4, 
	0xA0, 0x00, 0x00, 0x02, 0x76, 0x49, 0x44, 0x41, 0x54, 0x48, 0x4B, 0xBD, 0xD5, 0x4B, 0xE8, 0xE7, 
	0x63, 0x14, 0xC7, 0xF1, 0xD7, 0xC7, 0x25, 0x36, 0x48, 0xE3, 0x12, 0x2B, 0x61, 0x52, 0x6A, 0xB0, 
	0x70, 0x2B, 0x19, 0xA6, 0x29, 0x0B, 0x1B, 0xC9, 0x6D, 0xCA, 0xDD, 0xC2, 0x35, 0x9A, 0xC5, 0x5C, 
	0x68, 0xEC, 0x48, 0x66, 0x4C, 0x49, 0x4D, 0x2E, 0x85, 0x05, 0xCA, 0x35, 0xC9, 0x02, 0xE5, 0xD2, 
	0x90, 0x15, 0x11, 0xCA, 0x46, 0x62, 0x87, 0x5C, 0x92, 0xAC, 0xE4, 0x72, 0x74, 0xF8, 0x7E, 0xA7, 
	0xEF, 0xFF, 0x37, 0xBF, 0xFF, 0x45, 0xE1, 0xAC, 0xBE, 0x7D, 0x9F, 0xE7, 0x79, 0x9F, 0xCB, 0xE7, 
	0x3C, 0xE7, 0x89, 0xFF, 0xD0, 0xB2, 0x1C, 0xBB, 0xAA, 0x0E, 0xC0, 0xE9, 0x38, 0x0E, 0x47, 0xE1, 
	0x6B, 0x7C, 0x8E, 0xF7, 0x93, 0xFC, 0xB2, 0xD4, 0xF9, 0x45, 0xE1, 0x55, 0x75, 0x2C, 0x76, 0xE2, 
	0x7C, 0xB4, 0x83, 0x59, 0x6B, 0xF0, 0x2B, 0xD8, 0x94, 0xE4, 0x8B, 0x79, 0x4E, 0xE6, 0xC2, 0xAB, 
	0x6A, 0x2B, 0xEE, 0xC2, 0x3E, 0x78, 0x19, 0x2F, 0xE0, 0x2B, 0xEC, 0x87, 0x76, 0x7A, 0x2A, 0x2E, 
	0xC4, 0x61, 0xF8, 0x15, 0x5B, 0x93, 0xDC, 0x3F, 0xEB, 0x60, 0x2F, 0x78, 0x55, 0xED, 0xC2, 0x2D, 
	0x78, 0x1B, 0xD7, 0x27, 0xF9, 0x6C, 0x5E, 0x54, 0x55, 0xD5, 0x8E, 0xAE, 0xC5, 0xDD, 0x38, 0x02, 
	0x8F, 0xE0, 0xA6, 0x24, 0x35, 0xEE, 0x5F, 0x00, 0xAF, 0xAA, 0x8D, 0xE8, 0x08, 0x9E, 0xC0, 0x75, 
	0x49, 0x7E, 0x5F, 0x81, 0x26, 0xAD, 0xC3, 0x6B, 0x38, 0x09, 0x0F, 0x25, 0xB9, 0x79, 0x2F, 0x78, 
	0x55, 0x1D, 0x33, 0x08, 0xF5, 0x1E, 0xCE, 0x5E, 0x09, 0x78, 0x84, 0x54, 0xD5, 0xE1, 0xF8, 0x78, 
	0x10, 0xBC, 0xCF, 0xBE, 0xDB, 0x6B, 0x7B, 0x22, 0xAF, 0xAA, 0x27, 0x71, 0x05, 0x4E, 0x49, 0xD2, 
	0x1B, 0xFF, 0x91, 0x55, 0xD5, 0x3A, 0xBC, 0x85, 0xDD, 0x49, 0xFA, 0xFB, 0x6F, 0x78, 0x55, 0x1D, 
	0x84, 0x1F, 0x86, 0x85, 0xF3, 0x96, 0xA3, 0x56, 0xD5, 0x6A, 0x7C, 0xD8, 0x62, 0x27, 0xB9, 0x7C, 
	0x92, 0x41, 0xC3, 0xCF, 0xC5, 0xA1, 0x49, 0x7E, 0x1A, 0xE1, 0x17, 0xE3, 0x79, 0xDC, 0x98, 0xA4, 
	0x85, 0x59, 0xD4, 0xAA, 0xEA, 0x40, 0x7C, 0x80, 0x83, 0x71, 0x62, 0x92, 0x9F, 0x27, 0xF0, 0x4D, 
	0xB8, 0x0F, 0x1B, 0x92, 0x3C, 0x3B, 0xC2, 0xBB, 0xF5, 0xEE, 0x6D, 0xAF, 0x49, 0xBA, 0x4B, 0xFE, 
	0xB2, 0xAA, 0xBA, 0xAD, 0x2F, 0x4D, 0x92, 0x76, 0x3C, 0xFE, 0x7B, 0x14, 0x57, 0xE3, 0xAC, 0x24, 
	0xAD, 0xCF, 0x1E, 0xAB, 0xAA, 0xF5, 0x78, 0x03, 0xB7, 0x27, 0xD9, 0x3E, 0xC2, 0x77, 0x60, 0x33, 
	0x4E, 0x4E, 0xF2, 0xC9, 0x04, 0x74, 0x07, 0xEE, 0xC1, 0x45, 0x49, 0x5E, 0xAC, 0xAA, 0x0D, 0x78, 
	0x1A, 0xDB, 0x92, 0xF4, 0xFF, 0x05, 0x56, 0x55, 0x6B, 0xD0, 0xE7, 0x77, 0x26, 0xD9, 0x3C, 0xC2, 
	0xB7, 0x60, 0x3B, 0xD6, 0x27, 0xE9, 0xBA, 0x8D, 0x51, 0xF6, 0xFA, 0x9B, 0x38, 0x13, 0x97, 0xE1, 
	0x99, 0xA1, 0xD6, 0x6B, 0xA7, 0xFD, 0x3C, 0xD9, 0xBF, 0x76, 0xB8, 0x1F, 0x7D, 0xA9, 0x76, 0x8C, 
	0xF0, 0x4B, 0xF0, 0x1C, 0xB6, 0x24, 0xE9, 0x9A, 0x4D, 0x53, 0x5D, 0x85, 0x4F, 0x71, 0x24, 0xBE, 
	0xC7, 0x9A, 0x24, 0xDF, 0xCC, 0x13, 0xA5, 0xAA, 0x6E, 0xC0, 0xC3, 0xB8, 0xB4, 0x4B, 0x39, 0xC2, 
	0x0F, 0xC1, 0x8F, 0x78, 0x27, 0x49, 0xAB, 0x3D, 0x9B, 0xEE, 0x39, 0x83, 0xF3, 0x6B, 0x92, 0xBC, 
	0x3A, 0x0F, 0x3C, 0x68, 0xF4, 0x3A, 0x7A, 0xEF, 0xAA, 0x16, 0x7A, 0xDA, 0xE7, 0x2D, 0x44, 0x0B, 
	0xB2, 0x2E, 0xC9, 0xEE, 0xC5, 0x00, 0x4B, 0x80, 0xC7, 0x7A, 0x3F, 0x95, 0xE4, 0xCA, 0xDE, 0x37, 
	0x85, 0x9F, 0x30, 0xA4, 0xFF, 0xED, 0x20, 0xEC, 0x77, 0x2B, 0x75, 0x50, 0x55, 0xFB, 0x77, 0xD6, 
	0x38, 0x0D, 0xAB, 0x93, 0x7C, 0xB9, 0x00, 0x3E, 0xA4, 0x35, 0xCE, 0x96, 0x8F, 0x7A, 0xD4, 0x26, 
	0xE9, 0xD9, 0xBD, 0xA4, 0x55, 0xD5, 0xBE, 0x78, 0x1C, 0x57, 0x61, 0x63, 0x92, 0x07, 0xC6, 0x03, 
	0xF3, 0xA6, 0xE2, 0x83, 0x3D, 0xDD, 0xD0, 0x91, 0x6F, 0xEB, 0x83, 0x8B, 0xCD, 0x99, 0xAA, 0x3A, 
	0x1E, 0x8F, 0xA1, 0xBB, 0x64, 0x57, 0x92, 0x5B, 0xA7, 0x91, 0x2C, 0x37, 0xCF, 0x3B, 0xDD, 0x2E, 
	0xD3, 0x4B, 0xC3, 0xAD, 0xEC, 0x47, 0xE1, 0x37, 0x1C, 0xDD, 0xBD, 0x8F, 0x0B, 0xF0, 0x07, 0xEE, 
	0xEC, 0xD6, 0x9B, 0x4D, 0xF1, 0xFF, 0x7F, 0x89, 0x66, 0xFA, 0xBC, 0x9F, 0xB8, 0x33, 0x86, 0x17, 
	0xE8, 0xDF, 0x79, 0x43, 0x97, 0x13, 0x72, 0x25, 0xEB, 0x7F, 0x02, 0x74, 0x09, 0xFE, 0x18, 0x59, 
	0xCB, 0xAF, 0x88, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82
};