#include <libultra_internal.h>
#include "data.h"

GLOBAL_ASM(
glabel __osContRamWrite
/*    4b610:	27bdff98 */ 	addiu	$sp,$sp,-104
/*    4b614:	8faf0078 */ 	lw	$t7,0x78($sp)
/*    4b618:	afb5002c */ 	sw	$s5,0x2c($sp)
/*    4b61c:	afb40028 */ 	sw	$s4,0x28($sp)
/*    4b620:	afb1001c */ 	sw	$s1,0x1c($sp)
/*    4b624:	afa60070 */ 	sw	$a2,0x70($sp)
/*    4b628:	30ceffff */ 	andi	$t6,$a2,0xffff
/*    4b62c:	24010001 */ 	addiu	$at,$zero,0x1
/*    4b630:	01c03025 */ 	or	$a2,$t6,$zero
/*    4b634:	00a08825 */ 	or	$s1,$a1,$zero
/*    4b638:	0080a825 */ 	or	$s5,$a0,$zero
/*    4b63c:	afbf003c */ 	sw	$ra,0x3c($sp)
/*    4b640:	afbe0038 */ 	sw	$s8,0x38($sp)
/*    4b644:	afb70034 */ 	sw	$s7,0x34($sp)
/*    4b648:	afb60030 */ 	sw	$s6,0x30($sp)
/*    4b64c:	afb30024 */ 	sw	$s3,0x24($sp)
/*    4b650:	afb20020 */ 	sw	$s2,0x20($sp)
/*    4b654:	afb00018 */ 	sw	$s0,0x18($sp)
/*    4b658:	afa70074 */ 	sw	$a3,0x74($sp)
/*    4b65c:	11e10008 */ 	beq	$t7,$at,.L0004b680
/*    4b660:	24140002 */ 	addiu	$s4,$zero,0x2
/*    4b664:	29c10007 */ 	slti	$at,$t6,0x7
/*    4b668:	50200006 */ 	beqzl	$at,.L0004b684
/*    4b66c:	00c08025 */ 	or	$s0,$a2,$zero
/*    4b670:	51c00004 */ 	beqzl	$t6,.L0004b684
/*    4b674:	00c08025 */ 	or	$s0,$a2,$zero
/*    4b678:	1000006c */ 	b	.L0004b82c
/*    4b67c:	00001025 */ 	or	$v0,$zero,$zero
.L0004b680:
/*    4b680:	00c08025 */ 	or	$s0,$a2,$zero
.L0004b684:
/*    4b684:	0c012a18 */ 	jal	__osSiGetAccess
/*    4b688:	a7a60072 */ 	sh	$a2,0x72($sp)
/*    4b68c:	0010c0c3 */ 	sra	$t8,$s0,0x3
/*    4b690:	0010c940 */ 	sll	$t9,$s0,0x5
/*    4b694:	3c178006 */ 	lui	$s7,%hi(var80060970)
/*    4b698:	3c16800a */ 	lui	$s6,%hi(__osContLastCmd)
/*    4b69c:	3c138009 */ 	lui	$s3,%hi(__osPfsPifRam)
/*    4b6a0:	26730a20 */ 	addiu	$s3,$s3,%lo(__osPfsPifRam)
/*    4b6a4:	26d6c820 */ 	addiu	$s6,$s6,%lo(__osContLastCmd)
/*    4b6a8:	26f70970 */ 	addiu	$s7,$s7,%lo(var80060970)
/*    4b6ac:	afb90040 */ 	sw	$t9,0x40($sp)
/*    4b6b0:	afb80044 */ 	sw	$t8,0x44($sp)
/*    4b6b4:	241e0003 */ 	addiu	$s8,$zero,0x3
.L0004b6b8:
/*    4b6b8:	92c80000 */ 	lbu	$t0,0x0($s6)
/*    4b6bc:	24010003 */ 	addiu	$at,$zero,0x3
/*    4b6c0:	02608025 */ 	or	$s0,$s3,$zero
/*    4b6c4:	15010004 */ 	bne	$t0,$at,.L0004b6d8
/*    4b6c8:	00001025 */ 	or	$v0,$zero,$zero
/*    4b6cc:	8ee90000 */ 	lw	$t1,0x0($s7)
/*    4b6d0:	52290022 */ 	beql	$s1,$t1,.L0004b75c
/*    4b6d4:	02718021 */ 	addu	$s0,$s3,$s1
.L0004b6d8:
/*    4b6d8:	a2de0000 */ 	sb	$s8,0x0($s6)
/*    4b6dc:	1a200010 */ 	blez	$s1,.L0004b720
/*    4b6e0:	aef10000 */ 	sw	$s1,0x0($s7)
/*    4b6e4:	32240003 */ 	andi	$a0,$s1,0x3
/*    4b6e8:	10800006 */ 	beqz	$a0,.L0004b704
/*    4b6ec:	00801825 */ 	or	$v1,$a0,$zero
.L0004b6f0:
/*    4b6f0:	24420001 */ 	addiu	$v0,$v0,0x1
/*    4b6f4:	a2000000 */ 	sb	$zero,0x0($s0)
/*    4b6f8:	1462fffd */ 	bne	$v1,$v0,.L0004b6f0
/*    4b6fc:	26100001 */ 	addiu	$s0,$s0,0x1
/*    4b700:	10510007 */ 	beq	$v0,$s1,.L0004b720
.L0004b704:
/*    4b704:	24420004 */ 	addiu	$v0,$v0,0x4
/*    4b708:	a2000000 */ 	sb	$zero,0x0($s0)
/*    4b70c:	a2000001 */ 	sb	$zero,0x1($s0)
/*    4b710:	a2000002 */ 	sb	$zero,0x2($s0)
/*    4b714:	a2000003 */ 	sb	$zero,0x3($s0)
/*    4b718:	1451fffa */ 	bne	$v0,$s1,.L0004b704
/*    4b71c:	26100004 */ 	addiu	$s0,$s0,0x4
.L0004b720:
/*    4b720:	240a0001 */ 	addiu	$t2,$zero,0x1
/*    4b724:	ae6a003c */ 	sw	$t2,0x3c($s3)
/*    4b728:	240b00ff */ 	addiu	$t3,$zero,0xff
/*    4b72c:	240c0023 */ 	addiu	$t4,$zero,0x23
/*    4b730:	240d0001 */ 	addiu	$t5,$zero,0x1
/*    4b734:	240e00ff */ 	addiu	$t6,$zero,0xff
/*    4b738:	240f00fe */ 	addiu	$t7,$zero,0xfe
/*    4b73c:	a20b0000 */ 	sb	$t3,0x0($s0)
/*    4b740:	a20c0001 */ 	sb	$t4,0x1($s0)
/*    4b744:	a20d0002 */ 	sb	$t5,0x2($s0)
/*    4b748:	a21e0003 */ 	sb	$s8,0x3($s0)
/*    4b74c:	a20e0026 */ 	sb	$t6,0x26($s0)
/*    4b750:	10000002 */ 	b	.L0004b75c
/*    4b754:	a20f0027 */ 	sb	$t7,0x27($s0)
/*    4b758:	02718021 */ 	addu	$s0,$s3,$s1
.L0004b75c:
/*    4b75c:	8fb80044 */ 	lw	$t8,0x44($sp)
/*    4b760:	a2180004 */ 	sb	$t8,0x4($s0)
/*    4b764:	0c014754 */ 	jal	func00051d50
/*    4b768:	97a40072 */ 	lhu	$a0,0x72($sp)
/*    4b76c:	8fb90040 */ 	lw	$t9,0x40($sp)
/*    4b770:	26050006 */ 	addiu	$a1,$s0,0x6
/*    4b774:	24060020 */ 	addiu	$a2,$zero,0x20
/*    4b778:	00594025 */ 	or	$t0,$v0,$t9
/*    4b77c:	a2080005 */ 	sb	$t0,0x5($s0)
/*    4b780:	0c012c5c */ 	jal	func0004b170
/*    4b784:	8fa40074 */ 	lw	$a0,0x74($sp)
/*    4b788:	24040001 */ 	addiu	$a0,$zero,0x1
/*    4b78c:	0c012a34 */ 	jal	__osSiRawStartDma
/*    4b790:	02602825 */ 	or	$a1,$s3,$zero
/*    4b794:	0c014788 */ 	jal	func00051e20
/*    4b798:	8fa40074 */ 	lw	$a0,0x74($sp)
/*    4b79c:	305200ff */ 	andi	$s2,$v0,0xff
/*    4b7a0:	02a02025 */ 	or	$a0,$s5,$zero
/*    4b7a4:	00002825 */ 	or	$a1,$zero,$zero
/*    4b7a8:	0c0121bc */ 	jal	osRecvMesg
/*    4b7ac:	24060001 */ 	addiu	$a2,$zero,0x1
/*    4b7b0:	00002025 */ 	or	$a0,$zero,$zero
/*    4b7b4:	0c012a34 */ 	jal	__osSiRawStartDma
/*    4b7b8:	02602825 */ 	or	$a1,$s3,$zero
/*    4b7bc:	02a02025 */ 	or	$a0,$s5,$zero
/*    4b7c0:	00002825 */ 	or	$a1,$zero,$zero
/*    4b7c4:	0c0121bc */ 	jal	osRecvMesg
/*    4b7c8:	24060001 */ 	addiu	$a2,$zero,0x1
/*    4b7cc:	92030002 */ 	lbu	$v1,0x2($s0)
/*    4b7d0:	306900c0 */ 	andi	$t1,$v1,0xc0
/*    4b7d4:	00091903 */ 	sra	$v1,$t1,0x4
/*    4b7d8:	5460000c */ 	bnezl	$v1,.L0004b80c
/*    4b7dc:	24030001 */ 	addiu	$v1,$zero,0x1
/*    4b7e0:	920b0026 */ 	lbu	$t3,0x26($s0)
/*    4b7e4:	02a02025 */ 	or	$a0,$s5,$zero
/*    4b7e8:	51720009 */ 	beql	$t3,$s2,.L0004b810
/*    4b7ec:	24010004 */ 	addiu	$at,$zero,0x4
/*    4b7f0:	0c012ea4 */ 	jal	__osPfsGetStatus
/*    4b7f4:	02202825 */ 	or	$a1,$s1,$zero
/*    4b7f8:	14400009 */ 	bnez	$v0,.L0004b820
/*    4b7fc:	00401825 */ 	or	$v1,$v0,$zero
/*    4b800:	10000002 */ 	b	.L0004b80c
/*    4b804:	24030004 */ 	addiu	$v1,$zero,0x4
/*    4b808:	24030001 */ 	addiu	$v1,$zero,0x1
.L0004b80c:
/*    4b80c:	24010004 */ 	addiu	$at,$zero,0x4
.L0004b810:
/*    4b810:	14610003 */ 	bne	$v1,$at,.L0004b820
/*    4b814:	2a820000 */ 	slti	$v0,$s4,0x0
/*    4b818:	1040ffa7 */ 	beqz	$v0,.L0004b6b8
/*    4b81c:	2694ffff */ 	addiu	$s4,$s4,-1
.L0004b820:
/*    4b820:	0c012a29 */ 	jal	__osSiRelAccess
/*    4b824:	afa30064 */ 	sw	$v1,0x64($sp)
/*    4b828:	8fa20064 */ 	lw	$v0,0x64($sp)
.L0004b82c:
/*    4b82c:	8fbf003c */ 	lw	$ra,0x3c($sp)
/*    4b830:	8fb00018 */ 	lw	$s0,0x18($sp)
/*    4b834:	8fb1001c */ 	lw	$s1,0x1c($sp)
/*    4b838:	8fb20020 */ 	lw	$s2,0x20($sp)
/*    4b83c:	8fb30024 */ 	lw	$s3,0x24($sp)
/*    4b840:	8fb40028 */ 	lw	$s4,0x28($sp)
/*    4b844:	8fb5002c */ 	lw	$s5,0x2c($sp)
/*    4b848:	8fb60030 */ 	lw	$s6,0x30($sp)
/*    4b84c:	8fb70034 */ 	lw	$s7,0x34($sp)
/*    4b850:	8fbe0038 */ 	lw	$s8,0x38($sp)
/*    4b854:	03e00008 */ 	jr	$ra
/*    4b858:	27bd0068 */ 	addiu	$sp,$sp,0x68
/*    4b85c:	00000000 */ 	nop
);
