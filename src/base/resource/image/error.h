#pragma once

int error_size = 697;

unsigned char error[] = {
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 
	0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x17, 0x08, 0x06, 0x00, 0x00, 0x00, 0xE0, 0x2A, 0xD4, 
	0xA0, 0x00, 0x00, 0x02, 0x80, 0x49, 0x44, 0x41, 0x54, 0x48, 0x4B, 0xBD, 0x95, 0x4B, 0x88, 0x4F, 
	0x01, 0x14, 0xC6, 0x7F, 0x9F, 0x47, 0x36, 0xA4, 0xC9, 0x7B, 0xA1, 0xE4, 0xAD, 0x90, 0x30, 0x14, 
	0x79, 0x65, 0xB2, 0xB0, 0x91, 0x67, 0xCA, 0xA3, 0x46, 0x79, 0x85, 0x9A, 0xC5, 0x8C, 0xB1, 0xB0, 
	0x63, 0x61, 0x86, 0x92, 0x1A, 0xAF, 0xC2, 0x82, 0xB1, 0x60, 0x28, 0x29, 0x52, 0xDE, 0x2C, 0x94, 
	0x57, 0x61, 0xE1, 0x91, 0x47, 0x59, 0x78, 0x2C, 0x26, 0x79, 0x94, 0x24, 0x3E, 0x9D, 0xE9, 0xDE, 
	0xE9, 0xCE, 0x9D, 0xFF, 0x7F, 0xE6, 0xBF, 0xC0, 0xD9, 0xDC, 0xBA, 0xF7, 0xDC, 0xEF, 0x3C, 0xBE, 
	0xEF, 0x9C, 0x23, 0xFE, 0xA1, 0xA9, 0x33, 0x6C, 0xDB, 0x3D, 0x80, 0x29, 0xC0, 0x30, 0x60, 0x10, 
	0xF0, 0x1E, 0x78, 0x09, 0xDC, 0x93, 0xF4, 0xA3, 0xA3, 0xFF, 0x8B, 0x82, 0xDB, 0x1E, 0x0A, 0xEC, 
	0x01, 0xE6, 0x03, 0x11, 0x20, 0x6F, 0x01, 0x7C, 0x11, 0xA8, 0x96, 0xF4, 0xBA, 0x50, 0x90, 0x82, 
	0xE0, 0xB6, 0x6B, 0x81, 0x1D, 0x40, 0x17, 0xE0, 0x3C, 0x70, 0x06, 0x78, 0x07, 0x74, 0x03, 0x22, 
	0xE8, 0x64, 0x60, 0x21, 0xD0, 0x17, 0xF8, 0x09, 0xD4, 0x4A, 0xDA, 0x9B, 0x0F, 0xD0, 0x0E, 0xDC, 
	0x76, 0x03, 0xB0, 0x09, 0xB8, 0x09, 0xAC, 0x93, 0xF4, 0xA2, 0x50, 0x56, 0xB6, 0x23, 0x50, 0x25, 
	0xB0, 0x13, 0xE8, 0x0F, 0xEC, 0x97, 0xB4, 0x39, 0xEB, 0xDB, 0x06, 0xDC, 0x76, 0x15, 0x10, 0x19, 
	0x1C, 0x07, 0xD6, 0x48, 0xFA, 0x55, 0x02, 0x27, 0xC1, 0xC3, 0x25, 0x60, 0x3C, 0x50, 0x25, 0x69, 
	0x5F, 0xFA, 0x4F, 0x2B, 0xB8, 0xED, 0x21, 0x09, 0x51, 0x77, 0x81, 0x19, 0xA5, 0x00, 0xA7, 0x20, 
	0xB6, 0xFB, 0x01, 0x8F, 0x80, 0x78, 0x8E, 0x95, 0xF4, 0x3C, 0xBE, 0x65, 0xC1, 0x4F, 0x00, 0x2B, 
	0x81, 0x09, 0x92, 0xC2, 0x11, 0xDB, 0x03, 0x81, 0xD1, 0xC0, 0x53, 0x49, 0x1F, 0x33, 0x60, 0x03, 
	0x80, 0x31, 0xC0, 0x33, 0x49, 0x1F, 0x12, 0xDF, 0x39, 0xC0, 0x35, 0xE0, 0xAA, 0xA4, 0x8A, 0x56, 
	0x70, 0xDB, 0xBD, 0x80, 0x66, 0xE0, 0x86, 0xA4, 0x79, 0x19, 0x90, 0x32, 0xE0, 0x41, 0x42, 0x5A, 
	0x04, 0xFD, 0x6E, 0xBB, 0x67, 0xF2, 0xAE, 0x3B, 0x30, 0x49, 0xD2, 0xA7, 0x8C, 0x7F, 0x80, 0xCF, 
	0x06, 0xCA, 0x24, 0x7D, 0x6E, 0xC9, 0xDC, 0xF6, 0x12, 0xA0, 0x09, 0xD8, 0x20, 0xE9, 0x70, 0xB6, 
	0xCF, 0xB6, 0x47, 0x86, 0xA6, 0x93, 0xAC, 0x16, 0x01, 0x17, 0x80, 0xE9, 0x40, 0x79, 0x9E, 0x6C, 
	0xDB, 0xD5, 0xC0, 0x6E, 0x60, 0xB9, 0xA4, 0x53, 0x29, 0x78, 0x48, 0x6F, 0x57, 0x44, 0x95, 0x14, 
	0x2A, 0x69, 0x63, 0xB6, 0xA3, 0xE4, 0x2B, 0xC0, 0x43, 0x60, 0x22, 0x50, 0x21, 0xE9, 0x7A, 0x01, 
	0xBF, 0xB9, 0x89, 0xDF, 0x36, 0x49, 0x75, 0x29, 0x78, 0x3D, 0x50, 0x13, 0x8C, 0x4B, 0x7A, 0x52, 
	0x44, 0x7A, 0x8D, 0xC0, 0x0A, 0xE0, 0xA4, 0xA4, 0xE0, 0xA6, 0x9D, 0xD9, 0x1E, 0x07, 0x3C, 0x8E, 
	0xE1, 0x93, 0x54, 0x93, 0x82, 0x6F, 0x05, 0xEA, 0x80, 0x59, 0x92, 0x6E, 0x75, 0x90, 0xF9, 0x37, 
	0x20, 0x7A, 0x5E, 0x2C, 0xF3, 0x99, 0xC9, 0x7C, 0xC4, 0x50, 0xD5, 0xA7, 0xE0, 0x4B, 0x81, 0xD3, 
	0xC0, 0x5A, 0x49, 0x47, 0x8A, 0xF4, 0xFC, 0x15, 0x90, 0x96, 0x3D, 0xBC, 0x48, 0xCF, 0xD7, 0x03, 
	0x87, 0x80, 0x65, 0x92, 0x9A, 0x52, 0xF0, 0xDE, 0x40, 0xB0, 0x7E, 0x56, 0x52, 0x04, 0x6A, 0x31, 
	0xDB, 0xA9, 0x5A, 0x1C, 0xCB, 0x4B, 0x52, 0xB3, 0xED, 0x18, 0xF9, 0xFB, 0xC0, 0xEF, 0x44, 0xB6, 
	0x5F, 0x32, 0xFE, 0x97, 0xA3, 0x7A, 0xA0, 0x8F, 0xA4, 0xAF, 0x59, 0x9D, 0x87, 0x8C, 0xA6, 0x85, 
	0x7E, 0x25, 0xBD, 0x49, 0xC0, 0x63, 0xFA, 0x46, 0x65, 0xF5, 0x9C, 0x7B, 0xDF, 0xAA, 0xFF, 0x4C, 
	0xBF, 0x1B, 0x25, 0xAD, 0xCA, 0x0F, 0x51, 0xDA, 0xAF, 0x3B, 0x49, 0xEF, 0x63, 0x21, 0x95, 0x64, 
	0xB6, 0x43, 0xF3, 0xC1, 0x55, 0x39, 0x30, 0x22, 0x4D, 0x2E, 0xBF, 0x5B, 0x0E, 0x00, 0x1B, 0x81, 
	0x98, 0xD6, 0xCA, 0x52, 0x56, 0x80, 0xED, 0xAE, 0xC0, 0x31, 0x60, 0x75, 0xD1, 0xDD, 0x92, 0x94, 
	0x1B, 0xC1, 0x0E, 0x02, 0x41, 0xCC, 0xED, 0x64, 0x79, 0xC5, 0x61, 0x28, 0x68, 0xB6, 0x83, 0xD8, 
	0xA3, 0x40, 0x54, 0xDD, 0x20, 0x69, 0x4B, 0xD6, 0xB1, 0x94, 0x7D, 0x7E, 0x2E, 0x88, 0x4E, 0x46, 
	0xFE, 0x2D, 0x30, 0x38, 0x29, 0x7F, 0x31, 0xB0, 0x20, 0x21, 0x76, 0x7B, 0x48, 0x2F, 0x9F, 0xC1, 
	0xFF, 0xBF, 0x44, 0x39, 0x9D, 0xC7, 0x89, 0x9B, 0x9A, 0x5C, 0xA0, 0xBF, 0x73, 0x43, 0x4B, 0x92, 
	0x49, 0x27, 0x4E, 0x7F, 0x00, 0x46, 0x5B, 0x15, 0x27, 0xE0, 0xF9, 0x9C, 0xA2, 0x00, 0x00, 0x00, 
	0x00, 0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82
};