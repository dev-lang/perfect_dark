#include <ultra64.h>
#include "game/data/data_000000.h"
#include "gvars/gvars.h"

OSTime osGetTime()
{
	u32 tmptime;
	u32 elapseCount;
	OSTime currentCount;
	register u32 saveMask;

	saveMask = __osDisableInt();

	tmptime = osGetCount();
	elapseCount = tmptime - __osBaseCounter;
	currentCount = __osCurrentTime;

	__osRestoreInt(saveMask);

	return currentCount + elapseCount;
}