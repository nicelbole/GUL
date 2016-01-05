#pragma once

//TODO: this is only little endian
enum FOURCC {
	FOURCC_PAL  = 0x204c4150,	// [RIFFMCI, p12]
	FOURCC_RDIB = 0x42494452,	// [RIFFMCI, p12]
	FOURCC_RIFF = 0x46464952,	// [RIFFMCI]
	FOURCC_RIFX = 0x58464952,	// [RIFFMCI]
	FOURCC_RMID = 0x44494d52,	// [RIFFMCI, p12]
	FOURCC_RMMP = 0x504d4d52,	// [RIFFMCI, p12]
	FOURCC_WAVE = 0x45564157,	// [RIFFMCI, p12]
};
