#
# Square (test stage)
#

.include "files/tiles.s"

.word 0x02 # num rooms
.word room00
.word room01
.word eof

room00:

room01:
	tile4 TILEFLAG_0001 | TILEFLAG_0002 | TILEFLAG_0008 | TILEFLAG_0010, FLOORTYPE_DEFAULT, 0, 0, 0, 2, 0, 1, 0xfff, /*1*/ -5000, 0, -5000, /*2*/ -5000, 0, -2500, /*3*/ -2500, 0, -2500, /*4*/ -2500, 0, -5000
	tile4 TILEFLAG_0001 | TILEFLAG_0002 | TILEFLAG_0008 | TILEFLAG_0010, FLOORTYPE_DEFAULT, 0, 0, 0, 2, 0, 1, 0xfff, /*1*/ -5000, 0, -2500, /*2*/ -5000, 0, 0, /*3*/ -2500, 0, 0, /*4*/ -2500, 0, -2500
	tile4 TILEFLAG_0001 | TILEFLAG_0002 | TILEFLAG_0008 | TILEFLAG_0010, FLOORTYPE_DEFAULT, 0, 0, 0, 2, 0, 1, 0xfff, /*1*/ -5000, 0, 0, /*2*/ -5000, 0, 2500, /*3*/ -2500, 0, 2500, /*4*/ -2500, 0, 0
	tile4 TILEFLAG_0001 | TILEFLAG_0002 | TILEFLAG_0008 | TILEFLAG_0010, FLOORTYPE_DEFAULT, 0, 0, 0, 2, 0, 1, 0xfff, /*1*/ -5000, 0, 2500, /*2*/ -5000, 0, 5000, /*3*/ -2500, 0, 5000, /*4*/ -2500, 0, 2500
	tile4 TILEFLAG_0001 | TILEFLAG_0002 | TILEFLAG_0008 | TILEFLAG_0010, FLOORTYPE_DEFAULT, 0, 0, 2, 1, 0, 0, 0xfff, /*1*/ -2500, 0, 5000, /*2*/ 0, 0, 5000, /*3*/ 0, 0, 2500, /*4*/ -2500, 0, 2500
	tile4 TILEFLAG_0001 | TILEFLAG_0002 | TILEFLAG_0008 | TILEFLAG_0010, FLOORTYPE_DEFAULT, 2, 0, 1, 0, 0, 0, 0xfff, /*1*/ 0, 0, 2500, /*2*/ 0, 0, 0, /*3*/ -2500, 0, 0, /*4*/ -2500, 0, 2500
	tile4 TILEFLAG_0001 | TILEFLAG_0002 | TILEFLAG_0008 | TILEFLAG_0010, FLOORTYPE_DEFAULT, 2, 0, 1, 0, 0, 0, 0xfff, /*1*/ 0, 0, 0, /*2*/ 0, 0, -2500, /*3*/ -2500, 0, -2500, /*4*/ -2500, 0, 0
	tile4 TILEFLAG_0001 | TILEFLAG_0002 | TILEFLAG_0008 | TILEFLAG_0010, FLOORTYPE_DEFAULT, 2, 0, 1, 0, 0, 0, 0xfff, /*1*/ 0, 0, -2500, /*2*/ 0, 0, -5000, /*3*/ -2500, 0, -5000, /*4*/ -2500, 0, -2500
	tile4 TILEFLAG_0001 | TILEFLAG_0002 | TILEFLAG_0008 | TILEFLAG_0010, FLOORTYPE_DEFAULT, 0, 0, 2, 1, 0, 0, 0xfff, /*1*/ 0, 0, 5000, /*2*/ 2500, 0, 5000, /*3*/ 2500, 0, 2500, /*4*/ 0, 0, 2500
	tile4 TILEFLAG_0001 | TILEFLAG_0002 | TILEFLAG_0008 | TILEFLAG_0010, FLOORTYPE_DEFAULT, 2, 0, 1, 0, 0, 0, 0xfff, /*1*/ 2500, 0, 2500, /*2*/ 2500, 0, 0, /*3*/ 0, 0, 0, /*4*/ 0, 0, 2500
	tile4 TILEFLAG_0001 | TILEFLAG_0002 | TILEFLAG_0008 | TILEFLAG_0010, FLOORTYPE_DEFAULT, 2, 0, 1, 0, 0, 0, 0xfff, /*1*/ 2500, 0, 0, /*2*/ 2500, 0, -2500, /*3*/ 0, 0, -2500, /*4*/ 0, 0, 0
	tile4 TILEFLAG_0001 | TILEFLAG_0002 | TILEFLAG_0008 | TILEFLAG_0010, FLOORTYPE_DEFAULT, 2, 0, 1, 0, 0, 0, 0xfff, /*1*/ 2500, 0, -2500, /*2*/ 2500, 0, -5000, /*3*/ 0, 0, -5000, /*4*/ 0, 0, -2500
	tile4 TILEFLAG_0001 | TILEFLAG_0002 | TILEFLAG_0008 | TILEFLAG_0010, FLOORTYPE_DEFAULT, 0, 0, 2, 1, 0, 0, 0xfff, /*1*/ 2500, 0, 5000, /*2*/ 5000, 0, 5000, /*3*/ 5000, 0, 2500, /*4*/ 2500, 0, 2500
	tile4 TILEFLAG_0001 | TILEFLAG_0002 | TILEFLAG_0008 | TILEFLAG_0010, FLOORTYPE_DEFAULT, 2, 0, 1, 0, 0, 0, 0xfff, /*1*/ 5000, 0, 2500, /*2*/ 5000, 0, 0, /*3*/ 2500, 0, 0, /*4*/ 2500, 0, 2500
	tile4 TILEFLAG_0001 | TILEFLAG_0002 | TILEFLAG_0008 | TILEFLAG_0010, FLOORTYPE_DEFAULT, 2, 0, 1, 0, 0, 0, 0xfff, /*1*/ 5000, 0, 0, /*2*/ 5000, 0, -2500, /*3*/ 2500, 0, -2500, /*4*/ 2500, 0, 0
	tile4 TILEFLAG_0001 | TILEFLAG_0002 | TILEFLAG_0008 | TILEFLAG_0010, FLOORTYPE_DEFAULT, 2, 0, 1, 0, 0, 0, 0xfff, /*1*/ 5000, 0, -2500, /*2*/ 5000, 0, -5000, /*3*/ 2500, 0, -5000, /*4*/ 2500, 0, -2500

eof:

.balign 16
