#include <ultra64.h>

char *lang[] = {
	/*  0*/ "|Üâ¾\n\näÒëùÏÉÊæçËÃ¸ÁÚÏ×ÊØÍÄãÌÅØ´ÉÂ¹æ»ÍëùÏÉÊÓ¦Òµ¶§Ó÷ÐÖ´õãÉÂ÷§Ï»âäÒÜÑæ¨ÖîÒ¡¢ß¸Æ¡¢¸É¦ÅÌÀÉÂÒÒµ¶ÓÈÒ¨ÖîÒ¨ðÂ\n\n|ÖË÷ÏãÏ¾\n\n·ÓÏÃãÓäÏÍ´Ì­ÒÙðßÂÝãÏÎâÏëùÏ¸¨ÆâÒðÂÁÚÂÒÏÓÔÎÍæºáÈãÓãùÏãÑÜãÏÒÝÏÓûüüÄÎ»óÜà»É»ÂÒÒïÊÛÍÏóÓ³ÔÒÜÑÒËÂæ¥àãâÓíðÂÛÓ§ÒÏÊÍÅÌ»âæÎÂ\n\n|µ¶¾ùÛÜâð¸£ÎÇß\n\nÃÒùÛÜâðÏäÒëùÏÒÜâøÜÁÚÓÉÎàã§ÒüÃ¸×úÊãÏ×ÊØÍÄãÉÒðÂ§ÒÒÓ¸¹ºÆâÉÛÏÓÃÒùÛÜâðÒÙÏãúøôåÊã¸£¨ó£ÎÆâæºâÂ»àÁÈãÓÌÒñÑÏÙÏÌßÏØãÉß¼ÎçÏºâÓíðÂ\n\n|µ¶¾Ï¤÷ÏÕ¸ÝÊãÇß\n\nÓ÷ÐÒÌÝ×ÛÍÏÓ­®½ÎôæÝÊãóÀÎ»ß¼ÏÎ´Ì»âÂËØáäÒÏ¤ÛÜâðÜ§æÌÏö´ÉÎóù½ÎÁÎ´ÌÅØ¼ÒðÂÃã¸èÉÛÏö¼ÁÒööÐÏâäÏÏ¤÷ÏÕ¸ÝÊãÅÌ¾ÁæºâÂ\n\n|µ¶¾üÃ¸×úÊã¸ÎÏÇß\n\nùÛÜâð¸ÎÏÅÌÜËÏ»âüÃ¸×úÊãÈÒÜÒæËîÎÖØðÂ¡¢ÎùáÃã¸ÎÏÅÌ¾ÁÒðÂäæöÝÅÉ¡¢óÓËÏËº´ÉæÜ¼«Åºâ¡¢ßÜºâÂ\n\n|µ¶¾ÁÊÓ÷ÐÖÑöÇß\n\nö¿àØÍÜÏöâÒÓÚçÎÒóÁÊÓ÷ÐÖÓÓùß¸ù´ÌÑöÆâÒæß»ðä¼ÂäÒÜÑ¿àÒìíÏßãõÓùß¸Ä¿ÆÏÓÕÖæóÛ¿àß¼ÃÍæóÀâÈ¼ðÂ\n\n|µ¶¾³ÔÒÜÑÍÎàÇß\n\näÒÜÑÓ§ÒÏÊÍÅÌ»âÉÛµ¶Ó÷Ð¿àÆÀÁÌãâÃÍÓ¯¨ðÂÅÉæ´Ì§ÒÔ¿àÛ¸ÉËÂâæºâÂÁÊÓ÷ÐÓëúÐºâæÛÓÈÒ»íã¿Ï»âÍÒÃÍðÂ¹õÎæàÈãËÒìíÓÎ»Â\n\nEND\n",
	/*  1*/ "Ó÷Ð§",
	/*  2*/ "|Üâ¾\n\näÒëùÏÉÊæçËÃ¸ÁÚÏ×ÊØÍÄãÌÅØ´ÉÂ¹æ»ÍëùÏÉÊÓ¦Òµ¶§Ó÷ÐÖ´õãÉÂ÷§Ï»âäÒÜÑæ¨ÖîÒ¡¢ß¸Æ¡¢¸É¦ÅÌÀÉÂÒÒµ¶ÓÈÒ¨ÖîÒ¨ðÂ\n\n|ÖË÷ÏãÏ¾\n\n·ÓÏÃãÓäÏÍ´Ì­ÒÙðßÂÝãÏÎâÏëùÏ¸¨ÆâÒðÂÁÚÂÒÏÓÔÎÍæºáÈãÓãùÏãÑÜãÏÒÝÏÓûüüÄÎ»óÜà»É»ÂÒÒïÊÛÍÏóÓ³ÔÒÜÑÒËÂæ¥àãâÓíðÂÛÓ§ÒÏÊÍÅÌ»âæÎÂ\n\n|µ¶¾ùÛÜâð¸£ÎÇß\n\nÃÒùÛÜâðÏäÒëùÏÒÜâøÜÁÚÓÉÎàã§ÒüÃ¸×úÊãÏ×ÊØÍÄãÉÒðÂ§ÒÒÓ¸¹ºÆâÉÛÏÓÃÒùÛÜâðÒÙÏãúøôåÊã¸£¨ó£ÎÆâæºâÂ»àÁÈãÓÌÒñÑÏÙÏÌßÏØãÉß¼ÎçÏºâÓíðÂ\n\n|µ¶¾Ï¤÷ÏÕ¸ÝÊãÇß\n\nÓ÷ÐÒÌÝ×ÛÍÏÓ­®½ÎôæÝÊãóÀÎ»ß¼ÏÎ´Ì»âÂËØáäÒÏ¤ÛÜâðÜ§æÌÏö´ÉÎóù½ÎÁÎ´ÌÅØ¼ÒðÂÃã¸èÉÛÏö¼ÁÒööÐÏâäÏÏ¤÷ÏÕ¸ÝÊãÅÌ¾ÁæºâÂ\n\n|µ¶¾ÁÊÓ÷ÐÖÑöÇß\n\nö¿àØÍÜÏöâÒÓÚçÎÒóÁÊÓ÷ÐÖÓÓùß¸ù´ÌÑöÆâÒæß»ðä¼ÂäÒÜÑ¿àÒìíÏßãõÓùß¸Ä¿ÆÏÓÕÖæóÛ¿àß¼ÃÍæóÀâÈ¼ðÂ\n\n|µ¶¾³ÔÒÜÑÍÎàÇß\n\näÒÜÑÓ§ÒÏÊÍÅÌ»âÉÛµ¶Ó÷Ð¿àÆÀÁÌãâÃÍÓ¯¨ðÂÅÉæ´Ì§ÒÔ¿àÛ¸ÉËÂâæºâÂÁÊÓ÷ÐÓëúÐºâæÛÓÈÒ»íã¿Ï»âÍÒÃÍðÂ¹õÎæàÈãËÒìíÓÎ»Â\n\nEND\n",
	/*  3*/ "|Üâ¾\n\näÒëùÏÉÊæçËÃ¸ÁÚÏ×ÊØÍÄãÌÅØ´ÉÂ¹æ»ÍëùÏÉÊÓ¦Òµ¶§Ó÷ÐÖ´õãÉÂ÷§Ï»âäÒÜÑæ¨ÖîÒ¡¢ß¸Æ¡¢¸É¦ÅÌÀÉÂÒÒµ¶ÓÈÒ¨ÖîÒ¨ðÂ\n\n|ÖË÷ÏãÏ¾\n\n·ÓÏÃãÓäÏÍ´Ì­ÒÙðßÂÝãÏÎâÏëùÏ¸¨ÆâÒðÂÁÚÂÒÏÓÔÎÍæºáÈãÓãùÏãÑÜãÏÒÝÏÓûüüÄÎ»óÜà»É»ÂÒÒïÊÛÍÏóÓ³ÔÒÜÑÒËÂæ¥àãâÓíðÂÛÓ§ÒÏÊÍÅÌ»âæÎÂ\n\n|µ¶¾ùÛÜâð¸£ÎÇß\n\nÃÒùÛÜâðÏäÒëùÏÒÜâøÜÁÚÓÉÎàã§ÒüÃ¸×úÊãÏ×ÊØÍÄãÉÒðÂ§ÒÒÓ¸¹ºÆâÉÛÏÓÃÒùÛÜâðÒÙÏãúøôåÊã¸£¨ó£ÎÆâæºâÂ»àÁÈãÓÌÒñÑÏÙÏÌßÏØãÉß¼ÎçÏºâÓíðÂ\n\n|µ¶¾ÁÊÓ÷ÐÖÑöÇß\n\nö¿àØÍÜÏöâÒÓÚçÎÒóÁÊÓ÷ÐÖÓÓùß¸ù´ÌÑöÆâÒæß»ðä¼ÂäÒÜÑ¿àÒìíÏßãõÓùß¸Ä¿ÆÏÓÕÖæóÛ¿àß¼ÃÍæóÀâÈ¼ðÂ\n\n|µ¶¾³ÔÒÜÑÍÎàÇß\n\näÒÜÑÓ§ÒÏÊÍÅÌ»âÉÛµ¶Ó÷Ð¿àÆÀÁÌãâÃÍÓ¯¨ðÂÅÉæ´Ì§ÒÔ¿àÛ¸ÉËÂâæºâÂÁÊÓ÷ÐÓëúÐºâæÛÓÈÒ»íã¿Ï»âÍÒÃÍðÂ¹õÎæàÈãËÒìíÓÎ»Â\n\nEND\n",
	/*  4*/ "\n",
	/*  5*/ "\n",
	/*  6*/ "\n",
	/*  7*/ "\n",
	/*  8*/ "\n",
	/*  9*/ "ùÛÜâð¸£ÎÇß\n",
	/* 10*/ "Ï¤÷ÏÕ¸ÝÊãÇß\n",
	/* 11*/ "üÃ¸×úÊã¸ÎÏÇß\n",
	/* 12*/ "ÁÊÓ÷ÐÖÑöÇß\n",
	/* 13*/ "³ÔÒÜÑÍÎàÇß\n",
	/* 14*/ "Obtain grenades.\n",
	/* 15*/ "Dr. Caroll's\n",
	/* 16*/ "Ýá¶¼¤\n",
	/* 17*/ "Ýá¶¼¤\n",
	/* 18*/ "Ýá¶¼¤¸ÝÏöãÉ\n",
	/* 19*/ "üÃ¸×úÊã¸ÎÏÅÉ\n",
	/* 20*/ "ÌÒüÃ¸×úÊã¸ÎÏÅÉ\n",
	/* 21*/ "Obtain comms rider.\n",
	/* 22*/ "Dr. Caroll's\n",
	/* 23*/ "Ï¤÷ÏÕ\n",
	/* 24*/ "Ï¤÷ÏÕ\n",
	/* 25*/ "Ï¤÷ÏÕ¸ÝÏöãÉ\n",
	/* 26*/ "Ï¤÷ÏÕæ ÅÁÝÊãÄãÉ\n",
	/* 27*/ "Ï¤÷ÏÕæ ÅÁÝÊãÄãÌ»ØÇ¹\n",
	/* 28*/ "ÐÏâäæÎÏÄãÉ\n",
	/* 29*/ "ÐÏâäæË¤ÅÉ\n",
	/* 30*/ "ÐÏâäæÌéÅÉ\n",
	/* 31*/ "Obtain lift key card.\n",
	/* 32*/ "Dr. Caroll's\n",
	/* 33*/ "ÕÖ\n",
	/* 34*/ "ÕÖ\n",
	/* 35*/ "ÓùßÒÕÖ¸ÝÏöãÉ\n",
	/* 36*/ "ÓùßÖÒÐ×ÝÜÚÛ¾\nÕÖæ\n",
	/* 37*/ "ÕÖÇè¨¤¾ÓùßÛÄ×Ø\n",
	/* 38*/ "Óùßâ¡¢\n",
	/* 39*/ "ÁÊÓ÷ÐÖÑöÅÉ\n",
	/* 40*/ "³ÔÒÜÑÍÎàÅÉ\n",
	/* 41*/ "ùÛÜâðæ£ÎÄãÉ\n",
	/* 42*/ "µ¶ÚÏ ¡ÎæÎÏÄãÉ\n",
	/* 43*/ "ñÑÏÿãæ×»É\n",
	/* 44*/ "ñÑÏÿãæëÄãÉ\n",
	/* 45*/ "Ð×ÝÜæÚÛÄãÉ\n",
	/* 46*/ "£¨æÝÊãÄãÉ\n",
	/* 47*/ "ÑöîÈÉÝÖÌ÷âÆÛÜâðÛÄ\n",
	/* 48*/ "Obtain explosive.\n",
	/* 49*/ "Dr. Caroll's\n",
	/* 50*/ "£¨\n",
	/* 51*/ "£¨\n",
	/* 52*/ "£¨¸ÝÏöãÉ\n",
	/* 53*/ "ùÛÜâðÒÙÏãúøÓ\nÈÒÌ¿ÅàÂ\n",
	/* 54*/ "ºãæÐÏâäÑÂóÜº¹ÎÏÞ»Í\n°éÌÜÜ¿Î»å\n",
	/* 55*/ "ÁÊÓ÷ÐÖÒÓùßÓ\nÃÒñÑÏÿãÒÃ¼ÑÂ\n",
	/* 56*/ "ÓÈÏã×ÃÊàÍäÚÏðÂ\nÔùÓÒ±ó¼ÁÏ»â¿à\n×ËÎß´\n",
	/* 57*/ "ÓùßÒÙÏãúøÍæÎÏÄãÉ\n",
	/* 58*/ "ÍÐÏäÂÃÒ¡¢ÓÓ÷ÐÏ\nöÅÉäÒÜÑæÝÅÉÜÒðÂ\n",
	/* 59*/ "ÃÃæ§ÒÑöÑÏãðÂ§ÒÐÒ\nºØáùåãÌ»Î»ì÷ãðÂ\n",
	/* 60*/ "ÃÒ§¸ÅÎÆâÒðÂ\nÅ¿ÅÏÓµ¸ËÂäÂ\n",
	/* 61*/ "ÃÒööÐÏâäæ\n§ÒñÑÏÏ¤óºâÂ\npÁãèãÜÏÓµ¸ËÂäÂ\n",
	/* 62*/ "ªÀÃã´\n",
	/* 63*/ "ÃãæÒëùÏðÂ\n´²¸ñ´Ì»âß¼ðÂ\npóáàÓÏáÒâÜã¸³½\nÆèÏ¸ØÛâß¼ðÂ\n",
	/* 64*/ "óÜÎîÀ\n",
	/* 65*/ "Ú¤ÓÀ¼Å¿ßäÅ»Â\nóÓ»óÁãÉØ½Â\n",
	/* 66*/ "ïÊÛÍÏÂ\nÓ÷ÐÏÑö×ØÂ\n",
	/* 67*/ "ÓÈÏã×Ã´Êð´\n",
	/* 68*/ "ºÎÉæÍäÚÏÀ\nÓÌ´Àá\n",
	/* 69*/ "Ì´Àáô¼ÅÉ´ÌÀ\n",
	/* 70*/ "ºÎÉÒ ÓùÉ¹ðÍª´Ì»ÉåÂ\nÃ¹ÎÝáÔóßÁ¨ÀÌÃãÉåÑÂ\n",
	/* 71*/ "§ÒÏà¸¨´ÌÝ´É¹ðî´\n",
	/* 72*/ "ÒÏàÀ\n",
	/* 73*/ "È¼¿§ÓÃ»ËÏ×ÉãÉ¿´ÉÒ¿\nÎ¹Îà§Ò¸Ü´ÍÕù¼¿À\n",
	/* 74*/ "å¿´ÉåÂÜ¼ßÅØÅ·Â\n¼ÎàóÀÉÃÍ¸ãÆâåÂ\n",
	/* 75*/ "µ¹ÇÒ°æÂÅÄãÉÇß\n",
};
