#pragma once

/**
 * The specification of the RIFF file format can be found here: [RIFFMCI]
 */

#include "../../c/types.h"
#include "../fourcc.h"
#include <stdbool.h>
#include <stdint.h>

//TODO: this is only for little endian
/**
 * [RIFFMCI, pp23-24]
 */

enum ChunkType {
	IARL = 0x4c524149, // Archival Location
	IART = 0x54524149, // Artist
	ICMS = 0x534d4349, // Commissioned
	ICMT = 0x544d4349, // Comments
	ICOP = 0x504f4349, // Copyright
	ICRD = 0x44524349, // Creation Date
	ICRP = 0x50524349, // Cropped
	IDIM = 0x4d494449, // Dimensions
	IDPI = 0x49504449, // Dots Per Inch
	IENG = 0x474e4549, // Engineer
	IGNR = 0x524e4749, // Genre
	IKEY = 0x59454b49, // Keywords
	ILGT = 0x54474c49, // Lightness
	IMED = 0x44454d49, // Medium
	INAM = 0x4d414e49, // Name
	IPLT = 0x544c5049, // Palette Setting
	IPRD = 0x44525049, // Product
	ISBJ = 0x4a425349, // Subject
	ISFT = 0x54465349, // Software
	ISHP = 0x50485349, // Sharpness
	ISRC = 0x43525349, // Source
	ISRF = 0x46525349, // Source form
	ITCH = 0x48435449, // Technician
};

struct RIFFChunk
{
	enum FOURCC ck_id;
	uint32_t ck_size;
	byte ck_data[];
};

bool read_riff(unsigned char*);
