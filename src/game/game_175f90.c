#include <ultra64.h>
#include "constants.h"
#include "game/file.h"
#include "game/game_175f90.h"
#include "gvars/gvars.h"
#include "lib/memory.h"
#include "data.h"
#include "types.h"

void func0f175f90(void)
{
	// empty
}

void func0f175f98(void)
{
	func0f167330();
	memResetPool(MEMPOOL_5);
	func0f1672f0(5);
}

void func0f175fc8(void)
{
	memDisablePool(MEMPOOL_5);
	func0f1672f0(5);
}

char *func0f175ff0(void)
{
	return "Apr  6 2000 15:05:01";
}
