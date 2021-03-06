#include <ultra64.h>
#include "libultra_internal.h"
#include "data.h"

OSTask *_VirtualToPhysicalTask(OSTask *intp);

GLOBAL_ASM(
glabel _VirtualToPhysicalTask
/*     5e40:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*     5e44:	afbf0014 */ 	sw	$ra,0x14($sp)
/*     5e48:	3c058009 */ 	lui	$a1,%hi(var80090a70)
/*     5e4c:	24a50a70 */ 	addiu	$a1,$a1,%lo(var80090a70)
/*     5e50:	0c012c5c */ 	jal	func0004b170
/*     5e54:	24060040 */ 	addiu	$a2,$zero,0x40
/*     5e58:	3c048009 */ 	lui	$a0,%hi(var80090a80)
/*     5e5c:	8c840a80 */ 	lw	$a0,%lo(var80090a80)($a0)
/*     5e60:	10800005 */ 	beqz	$a0,.L00005e78
/*     5e64:	00000000 */ 	nop
/*     5e68:	0c012d20 */ 	jal	osVirtualToPhysical
/*     5e6c:	00000000 */ 	nop
/*     5e70:	3c018009 */ 	lui	$at,%hi(var80090a80)
/*     5e74:	ac220a80 */ 	sw	$v0,%lo(var80090a80)($at)
.L00005e78:
/*     5e78:	3c048009 */ 	lui	$a0,%hi(var80090a88)
/*     5e7c:	8c840a88 */ 	lw	$a0,%lo(var80090a88)($a0)
/*     5e80:	10800005 */ 	beqz	$a0,.L00005e98
/*     5e84:	00000000 */ 	nop
/*     5e88:	0c012d20 */ 	jal	osVirtualToPhysical
/*     5e8c:	00000000 */ 	nop
/*     5e90:	3c018009 */ 	lui	$at,%hi(var80090a88)
/*     5e94:	ac220a88 */ 	sw	$v0,%lo(var80090a88)($at)
.L00005e98:
/*     5e98:	3c048009 */ 	lui	$a0,%hi(var80090a90)
/*     5e9c:	8c840a90 */ 	lw	$a0,%lo(var80090a90)($a0)
/*     5ea0:	10800005 */ 	beqz	$a0,.L00005eb8
/*     5ea4:	00000000 */ 	nop
/*     5ea8:	0c012d20 */ 	jal	osVirtualToPhysical
/*     5eac:	00000000 */ 	nop
/*     5eb0:	3c018009 */ 	lui	$at,%hi(var80090a90)
/*     5eb4:	ac220a90 */ 	sw	$v0,%lo(var80090a90)($at)
.L00005eb8:
/*     5eb8:	3c048009 */ 	lui	$a0,%hi(var80090a98)
/*     5ebc:	8c840a98 */ 	lw	$a0,%lo(var80090a98)($a0)
/*     5ec0:	10800005 */ 	beqz	$a0,.L00005ed8
/*     5ec4:	00000000 */ 	nop
/*     5ec8:	0c012d20 */ 	jal	osVirtualToPhysical
/*     5ecc:	00000000 */ 	nop
/*     5ed0:	3c018009 */ 	lui	$at,%hi(var80090a98)
/*     5ed4:	ac220a98 */ 	sw	$v0,%lo(var80090a98)($at)
.L00005ed8:
/*     5ed8:	3c048009 */ 	lui	$a0,%hi(var80090a9c)
/*     5edc:	8c840a9c */ 	lw	$a0,%lo(var80090a9c)($a0)
/*     5ee0:	10800005 */ 	beqz	$a0,.L00005ef8
/*     5ee4:	00000000 */ 	nop
/*     5ee8:	0c012d20 */ 	jal	osVirtualToPhysical
/*     5eec:	00000000 */ 	nop
/*     5ef0:	3c018009 */ 	lui	$at,%hi(var80090a9c)
/*     5ef4:	ac220a9c */ 	sw	$v0,%lo(var80090a9c)($at)
.L00005ef8:
/*     5ef8:	3c048009 */ 	lui	$a0,%hi(var80090aa0)
/*     5efc:	8c840aa0 */ 	lw	$a0,%lo(var80090aa0)($a0)
/*     5f00:	10800005 */ 	beqz	$a0,.L00005f18
/*     5f04:	00000000 */ 	nop
/*     5f08:	0c012d20 */ 	jal	osVirtualToPhysical
/*     5f0c:	00000000 */ 	nop
/*     5f10:	3c018009 */ 	lui	$at,%hi(var80090aa0)
/*     5f14:	ac220aa0 */ 	sw	$v0,%lo(var80090aa0)($at)
.L00005f18:
/*     5f18:	3c048009 */ 	lui	$a0,%hi(var80090aa8)
/*     5f1c:	8c840aa8 */ 	lw	$a0,%lo(var80090aa8)($a0)
/*     5f20:	50800006 */ 	beqzl	$a0,.L00005f3c
/*     5f24:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*     5f28:	0c012d20 */ 	jal	osVirtualToPhysical
/*     5f2c:	00000000 */ 	nop
/*     5f30:	3c018009 */ 	lui	$at,%hi(var80090aa8)
/*     5f34:	ac220aa8 */ 	sw	$v0,%lo(var80090aa8)($at)
/*     5f38:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L00005f3c:
/*     5f3c:	3c028009 */ 	lui	$v0,%hi(var80090a70)
/*     5f40:	24420a70 */ 	addiu	$v0,$v0,%lo(var80090a70)
/*     5f44:	03e00008 */ 	jr	$ra
/*     5f48:	27bd0018 */ 	addiu	$sp,$sp,0x18
);

void osSpTaskLoad(OSTask *intp)
{
	OSTask *tp;
	tp = _VirtualToPhysicalTask(intp);

	if (tp->t.flags & OS_TASK_YIELDED) {
		tp->t.ucode_data = tp->t.yield_data_ptr;
		tp->t.ucode_data_size = tp->t.yield_data_size;
		intp->t.flags &= ~OS_TASK_YIELDED;

		if (tp->t.flags & OS_TASK_LOADABLE) {
			tp->t.ucode = (u64 *)IO_READ((u32)intp->t.yield_data_ptr + OS_YIELD_DATA_SIZE - 4);
		}
	}

	osWritebackDCache(tp, sizeof(OSTask));
	__osSpSetStatus(SP_CLR_YIELD | SP_CLR_YIELDED | SP_CLR_TASKDONE | SP_SET_INTR_BREAK);

	while (__osSpSetPc(SP_IMEM_START) == -1);

	while (__osSpRawStartDma(1, (SP_IMEM_START - sizeof(*tp)), tp, sizeof(OSTask)) == -1);

	while (__osSpDeviceBusy());

	while (__osSpRawStartDma(1, SP_IMEM_START, tp->t.ucode_boot, tp->t.ucode_boot_size) == -1);
}

void osSpTaskStartGo(OSTask *tp)
{
	while (__osSpDeviceBusy());

	__osSpSetStatus(SP_SET_INTR_BREAK | SP_CLR_SSTEP | SP_CLR_BROKE | SP_CLR_HALT);
}
