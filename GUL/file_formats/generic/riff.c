#include "riff.h"

bool read_riff_be(unsigned char*);
bool read_riff_le(unsigned char*);

bool read_riff(unsigned char* ptr)
{
	uint32_t fourcc = *(uint32_t*)ptr;
	ptr += 4;
	if (fourcc == FOURCC_RIFF)
		return read_riff_le(ptr);
	else if (fourcc == FOURCC_RIFX)
		return read_riff_be(ptr);
	else
		return false;
}

bool read_riff_be(unsigned char* ptr)
{
	return false;
}

bool read_riff_le(unsigned char* ptr)
{
	uint32_t size = *(uint32_t*)ptr;
	ptr += 4;
	uint32_t file_type = *(uint32_t*)ptr;
	switch (file_type)
	{
	case FOURCC_WAVE:
		read_wav_body();
		break;
	}

	return false;
}
