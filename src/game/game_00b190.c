#include <ultra64.h>
#include "constants.h"
#include "gvars/gvars.h"
#include "lib/dma.h"
#include "lib/memory.h"
#include "data.h"
#include "types.h"

void loadTextureList(void)
{
	extern u8 _textureslistSegmentRomStart;
	extern u8 _textureslistSegmentRomEnd;

	u32 len = ((&_textureslistSegmentRomEnd - &_textureslistSegmentRomStart) + 15) & -16;

	g_Textures = malloc(len, MEMPOOL_PERMANENT);

	dmaExec(g_Textures, &_textureslistSegmentRomStart, len);
}
