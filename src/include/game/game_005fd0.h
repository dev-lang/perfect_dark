#ifndef IN_GAME_GAME_005FD0_H
#define IN_GAME_GAME_005FD0_H
#include <ultra64.h>
#include "data.h"
#include "types.h"

bool func0f005fd0(s32 arg0);
s32 chrChooseFootstepSound(struct chrdata *chr, u32 arg1);
void func0f0061dc(struct chrdata *chr);
void func0f006520(struct chrdata *chr);
u32 colourBlend(u32 a, u32 b, u32 weight);
void func0f0069dc(void);
f32 func0f006b08(f32 arg0);
f32 func0f006b54(f32 arg0);
u32 func0f006ba0(void);

#endif
