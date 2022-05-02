
//{{BLOCK(bg)

//======================================================================
//
//	bg, 256x256@4, 
//	+ palette 256 entries, not compressed
//	+ 85 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 2720 + 2048 = 5280
//
//	Time-stamp: 2022-03-17, 13:05:17
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

const unsigned short bgTiles[1360] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,
	0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,
	0x7777,0x7777,0x7777,0x7777,0x7777,0x7777,0x7777,0x7777,
	0x7777,0x7777,0x7777,0x7777,0x7777,0x7777,0x7777,0x7777,
	0x0000,0x0000,0x0000,0x0000,0x0000,0xBB00,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0xBBBB,0x0BBB,0x00BB,0xBB00,
	0x00BB,0xB000,0x00BB,0x0000,0x00BB,0x0000,0x00BB,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0xB000,0x0000,0xBB00,
	0x000B,0x0BB0,0x00BB,0x00BB,0x00BB,0x00BB,0x00BB,0x00BB,
	0x0000,0x0000,0x0000,0x0000,0xBBBB,0x0000,0xB000,0x000B,
	0x0000,0x00BB,0x0000,0x0BB0,0x0000,0x0BB0,0x0000,0x0BB0,
	0x0000,0x0000,0x0000,0x0000,0x0BBB,0x0000,0xBBB0,0x0000,
	0xBB00,0x000B,0xBB00,0x00BB,0x0B00,0x0BBB,0x0B00,0x0BB0,

	0x0000,0x0000,0x0000,0x0000,0xBBBB,0xBBBB,0x0B00,0xB000,
	0x0B00,0xB000,0x0B00,0xB000,0x0B00,0xB000,0x0B00,0xB000,
	0x0000,0x0000,0x0000,0x0000,0x0BBB,0xBBBB,0x000B,0x0BB0,
	0x000B,0x00B0,0x000B,0x000B,0xB00B,0x0000,0x0BBB,0x0000,
	0x0000,0x0000,0x0000,0x0000,0xBB0B,0xBBBB,0x0000,0x00BB,
	0x0000,0x00BB,0x0000,0x00BB,0x0000,0x00BB,0x0000,0xBBBB,
	0x0000,0x0000,0x0000,0x0000,0xBBBB,0xBBB0,0xB000,0xBB00,
	0xB000,0xB000,0x00B0,0x0000,0x00B0,0x0000,0x00BB,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x00BB,0xBBB0,0x0000,0xB000,
	0x000B,0x0B00,0x00BB,0x00B0,0x00BB,0x00B0,0x0BB0,0x000B,
	0x0000,0x0000,0x0000,0x0000,0x00BB,0xB000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0xBBBB,0xBB0B,0x0BB0,0xB000,
	0x0BB0,0xB000,0x0BB0,0x0B00,0x0BB0,0x00B0,0xBBB0,0x000B,
	0x0000,0x0000,0x0000,0x0000,0x0BBB,0x0000,0x000B,0xB000,
	0x0000,0xBB00,0x0000,0x0BB0,0x0000,0x0BB0,0x0000,0x0BB0,

	0x0000,0x0000,0x0000,0x0000,0xBBBB,0x000B,0x000B,0x00BB,
	0x0000,0x0BB0,0x0000,0xBB00,0x0000,0xBB00,0x0000,0xBB00,
	0x0000,0x0000,0x0000,0x0000,0xBBB0,0x0000,0xBB00,0x000B,
	0xB000,0x00BB,0xB000,0x0BBB,0xB000,0xBBB0,0xB000,0xBB00,
	0x0000,0x0000,0x0000,0x0000,0xBBB0,0x00BB,0xB000,0x0000,
	0xB000,0x0000,0xB000,0x0000,0xB000,0xB000,0xB000,0xB000,
	0x0000,0x0000,0x0000,0x0000,0xB000,0x0BBB,0x0BB0,0xB000,
	0x00BB,0x0000,0x000B,0x0000,0x000B,0x0000,0x000B,0xBB00,

	0x0000,0x0000,0x0000,0x0000,0x00B0,0x0000,0x00BB,0x0000,
	0x00BB,0x0000,0x00B0,0x0000,0x0000,0x0000,0x0BBB,0x0000,
	0x0B00,0xBB00,0x0B00,0xB000,0x0B00,0xB000,0x0B00,0x0000,
	0x0B00,0x0000,0xBBBB,0x000B,0x0000,0x0000,0x0000,0x0000,
	0x0B00,0xB000,0x0B0B,0xB000,0x0BBB,0xB000,0x0BBB,0xB000,
	0x0BB0,0xB000,0x0B00,0xBBB0,0x0000,0x0000,0x0000,0x0000,
	0xBB0B,0x0000,0xB00B,0x000B,0x000B,0x00BB,0x000B,0x0BB0,
	0x000B,0xBB00,0x0BBB,0xBBB0,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x00BB,0x0000,0x00BB,0x0000,0x00BB,0x0000,0x00BB,
	0x0000,0x00BB,0xBBBB,0xBBBB,0x0000,0x0000,0x0000,0x0000,
	0x00B0,0x0000,0x00B0,0x0000,0x0000,0x0000,0x0000,0x000B,
	0xB000,0x0000,0xBBBB,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xBB00,0x0000,0xBB00,0x0000,0xBB00,0x0000,0xBB00,0x0000,
	0xBB00,0x0000,0xBBBB,0x00BB,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0xB000,0x0000,0x0000,0x0000,0x0000,

	0x0BB0,0x00BB,0x0BB0,0x0BB0,0x0BB0,0xBB00,0x0BB0,0xB000,
	0x0BB0,0x0000,0xBBBB,0xB00B,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0BB0,0x0000,0x0BB0,0x0000,0x0BB0,0x000B,0xBB00,
	0x00BB,0xB000,0xBBBB,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xB000,0xB000,0xB000,0x0000,0xB000,0x0000,0xB000,0x0000,
	0xB000,0x0000,0xBBB0,0x00BB,0x0000,0x0000,0x0000,0x0000,
	0xB00B,0xB000,0xB0BB,0xB000,0xBBBB,0xB000,0xBBB0,0x0000,
	0xBB00,0x0000,0xB000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x000B,0x0000,0x000B,0x0000,0x00BB,0x0000,0x00BB,0x0000,
	0xBBB0,0x0000,0xB000,0xBBBB,0x0000,0x0000,0x0000,0x0000,
	0x00BB,0x0000,0x00BB,0x0000,0x00BB,0x0000,0x00BB,0x0000,
	0x00BB,0x0000,0x000B,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x2200,0x0000,0x2200,0x0000,0x2200,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0222,0x0000,0x0222,0x0000,0x0222,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xEEE0,0xEE0E,
	0x0E00,0xE0E0,0x0E00,0xE0E0,0x0E00,0xE0E0,0xEE00,0xEE0E,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xE0EE,0xE000,
	0x0E00,0x0E0E,0xEE00,0xEE0E,0x0E00,0x0000,0xE00E,0xEE0E,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xE00E,0x000E,
	0x0E00,0x0000,0xEE00,0x0000,0x000E,0x000E,0xEE00,0x0000,

	0x0000,0x0000,0xE000,0x00EE,0x0E00,0x00E0,0x0E00,0x0000,
	0xE000,0x000E,0x0000,0x00E0,0x0E00,0x00E0,0xEE00,0x000E,
	0x0000,0x0000,0xEEEE,0x000E,0x0E0E,0x000E,0x0E00,0x0000,
	0x0E00,0x0000,0x0E00,0xE000,0x0E00,0xE000,0xEEE0,0xEE00,
	0x0000,0x0000,0x00E0,0xEEE0,0x0E0E,0x0E00,0x0E0E,0x0E00,
	0x0E0E,0xEE00,0xEEEE,0x0E00,0xE000,0x0E00,0xE00E,0xEEEE,
	0x0000,0x0000,0x00EE,0xEEE0,0x0E00,0xE0E0,0x0E00,0xE000,
	0x00EE,0xE000,0x000E,0xE000,0x00E0,0xE000,0xEE00,0xEE00,

	0x0000,0x0000,0x00EE,0x0000,0x00E0,0x0E00,0x0000,0xEEE0,
	0x0000,0x0E00,0x0000,0x0E00,0x0000,0x0E00,0x000E,0xEE00,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xEE00,0x0000,
	0x00E0,0x000E,0x00E0,0x000E,0x00E0,0x000E,0xEE0E,0x0000,
	0x0000,0x0000,0x00EE,0x0000,0x00E0,0x0000,0xEEE0,0xE000,
	0x00E0,0x0E0E,0x00E0,0xEE0E,0x00E0,0x0E0E,0xEE00,0xE000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xE000,0xEEEE,
	0x0E0E,0x00E0,0xE00E,0x000E,0x0E00,0x0000,0xEE0E,0xE0EE,

	0x0000,0x0000,0x000E,0x0000,0x0000,0x0000,0x0EEE,0x000E,
	0xEE0E,0x00E0,0x0E0E,0x00E0,0x0E0E,0x00E0,0xEEEE,0x0EE0,
	0x0E00,0x0000,0xEEE0,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0E00,0x0E00,0xE000,0x00EE,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xA000,
	0x0000,0xA000,0x0000,0x0000,0x0000,0x3000,0x0000,0x3300,

	0x0000,0x0000,0xAAA0,0x00AA,0xBBBA,0x0ABB,0xBBBB,0xABBB,
	0xAAAA,0xAAAA,0x3333,0x6633,0x3333,0x6663,0x3633,0x6066,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x00AA,0x0000,0x0000,0x0000,0x0000,0x0000,0x0006,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0xCCC0,0x0000,0x333C,
	0xC000,0x3FF3,0x3C00,0x3CFF,0x3C00,0x3CFF,0x3C00,0x3FF3,
	0xCCC0,0xCCCC,0x333C,0x3333,0x0033,0x33FF,0x0F33,0x3FF0,
	0xFFF3,0xFF00,0xCCF3,0xF00C,0xCCCF,0xFFCC,0xEECF,0xFFCE,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0xD660,0x0000,0x6666,0x0000,0x6666,0x0000,0x5555,
	0x0000,0x0000,0xDD00,0xDDDD,0xDDD0,0xDDDD,0x88DD,0x8668,
	0x6DDD,0x6666,0x66DD,0x6666,0x666D,0x7667,0x666D,0x6666,
	0x0000,0x0000,0x00DD,0x0000,0x0DDD,0x0000,0xDD88,0x0000,
	0xDDD6,0x066D,0xDD66,0x6666,0xD666,0x6666,0xD666,0x5555,
	0x0000,0x3300,0x0000,0x3300,0x0000,0x3300,0x0000,0x3000,
	0x0000,0x0000,0x0000,0xAAA0,0x0000,0xBBBA,0x0000,0xBBBA,

	0x3663,0x6666,0x3663,0x3666,0x6633,0x3336,0x6633,0x6666,
	0x6630,0x0666,0x6600,0x0066,0x6AAA,0xAA66,0xABAB,0xBBAA,
	0x0066,0x0000,0x0066,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x000A,0x0000,
	0xC000,0x3F33,0x0000,0x333C,0x0000,0x33C0,0x0000,0x333C,
	0xC000,0x3333,0x3C00,0x3333,0x33C0,0x3333,0x333C,0x3C33,
	0x0ECF,0xFFC0,0xCCF3,0xFFFC,0xFFF3,0xF0FF,0xFFF3,0x3333,
	0x3F33,0x0003,0x3F33,0x0E03,0xFF33,0x3333,0x3333,0xFFFF,

	0x0000,0x5445,0x0000,0x5445,0x0000,0x5445,0x0000,0x5445,
	0x0000,0x5445,0x0000,0x5445,0x0000,0x5445,0x0000,0x5545,
	0x669D,0x6666,0x66DD,0x0000,0x66DD,0x0BB0,0x6DD0,0x6666,
	0xDDD0,0x6666,0xD0D0,0x6666,0x59D0,0x6666,0x94D5,0x4444,
	0xD966,0x5445,0xDD66,0x5445,0xDD66,0x5445,0x0DD6,0x5445,
	0x0DDD,0x5445,0x0D0D,0x5445,0x0D95,0x5445,0x5549,0x5455,
	0x0000,0xBBBA,0x0000,0xBBA0,0x0000,0xBA00,0x0000,0xA000,
	0x0000,0xA000,0x0000,0xA000,0x0000,0xA000,0x0000,0xA000,

	0xBABB,0xBBBB,0xABBB,0xBBBB,0xABBB,0xBBB6,0x6AAA,0xBB66,
	0x6BBB,0xB666,0xBBBB,0xBB66,0xBAAA,0xBBBB,0xA777,0xAAAA,
	0x00AB,0x0000,0x0AAB,0x0000,0xABAB,0x0000,0xBBAB,0x000A,
	0xBBAB,0x00AB,0xBAAB,0x06AB,0xA00A,0x666A,0x0000,0x6666,
	0x333C,0x3C33,0x333C,0xCC33,0x333C,0xC333,0x33C0,0x3333,
	0x3C00,0x3333,0xC000,0x3333,0x0000,0x333C,0x0000,0x33C0,
	0x3333,0xF333,0xF333,0x33FF,0xFF3C,0x3FFF,0xFFCC,0x3FFC,
	0xCCC3,0x3FCC,0xFFC3,0x33CF,0xCFC3,0xF3CC,0xFFC3,0xFFCF,

	0x0000,0x4445,0x0000,0x4445,0x0000,0x5550,0x0000,0xD000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x44D4,0x9449,0x4444,0x4994,0x4455,0x4444,0x4550,0x4444,
	0x5450,0x4444,0x4450,0x5555,0x4450,0x4444,0x4445,0x4444,
	0x4444,0x5444,0x4444,0x5444,0x5544,0x5555,0x0554,0x000D,
	0x0545,0x0000,0x0544,0x0000,0x0544,0x0000,0x5444,0x0000,
	0xA000,0x7A0A,0x7A00,0x77A7,0x7A00,0x77A7,0x7A00,0xAAA7,
	0x7A00,0x00A7,0x7A00,0x000A,0x7A00,0x000A,0xA000,0x0000,

	0x7777,0xA777,0xA777,0xA77A,0x0AA7,0xA77A,0x000A,0xA77A,
	0x0000,0xAAAA,0xA000,0x7777,0xA000,0x7777,0x0000,0xAAAA,
	0x0000,0x0660,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x00AA,0x0000,0x0A77,0x0000,0x00AA,0x0000,
	0x0000,0x3C00,0x0000,0xC000,0x0000,0x3C00,0x0000,0x33C0,
	0x0000,0xCCC0,0x0000,0xFFFC,0x0000,0xFCFC,0x0000,0xCCCC,
	0xCFC3,0xCFCC,0xFFCC,0xFFCF,0xCCC3,0x33CC,0x3333,0xCC33,
	0xCCCC,0x00CC,0xFFFF,0x00CF,0xFCFC,0x000C,0xCCCC,0x000C,

	0x00C3,0x0000,0x000C,0x0000,0x00C3,0x0000,0x0C33,0x0000,
	0xCCCC,0x0000,0xCFFF,0x0000,0xCFCF,0x0000,0xCCCC,0x0000,
	0x0000,0x5000,0x0000,0x4500,0x0000,0x4450,0x0000,0x5445,
	0x0000,0x5555,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x4444,0x4444,0x4454,0x5445,0x5445,0x4444,0x4444,0x4444,
	0x5555,0x5555,0xBB00,0xB00B,0x0B00,0xB00B,0xBBBB,0xB00B,
	0x4444,0x0005,0x4544,0x0054,0x5445,0x0544,0x4444,0x5445,
	0x5555,0x5555,0x00BB,0x0000,0x00B0,0x0000,0xBBBB,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x7777,0x7777,
};

const unsigned short bgMap[1024] __attribute__((aligned(4)))=
{
	0x0001,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,
	0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,
	0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,
	0x0002,0x0002,0x0002,0x0002,0x0002,0x0001,0x0000,0x0000,
	0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,0x0000,

	0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,0x0000,
	0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,0x0000,

	0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,0x0003,0x0004,
	0x0005,0x0006,0x0007,0x0008,0x0009,0x000A,0x000B,0x000C,
	0x000D,0x000E,0x000F,0x0010,0x0011,0x0012,0x0013,0x0014,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,0x0000,
	0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,0x0803,0x0804,
	0x0805,0x0806,0x0015,0x0016,0x0017,0x0018,0x0019,0x001A,
	0x001B,0x001C,0x001D,0x0810,0x001E,0x001F,0x0020,0x0021,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,0x0000,

	0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,0x0000,
	0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,0x0022,0x0023,
	0x0023,0x0023,0x0023,0x0023,0x0023,0x0023,0x0023,0x0023,
	0x0023,0x0023,0x0023,0x0023,0x0023,0x0023,0x0023,0x0024,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,0x0000,

	0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,0x0000,
	0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0025,0x0026,0x0027,0x0028,0x0029,0x002A,0x002B,
	0x002C,0x002D,0x002E,0x002F,0x0030,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,0x0000,

	0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0031,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0032,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,0x0000,
	0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,0x0000,

	0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0033,0x0034,0x0035,0x0000,0x0000,0x0036,0x0037,0x0437,
	0x0436,0x0000,0x0000,0x0038,0x0039,0x003A,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,0x0000,
	0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x003B,0x003C,0x003D,0x0000,0x0000,0x003E,0x003F,0x043F,
	0x043E,0x0000,0x0000,0x0040,0x0041,0x0042,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,0x0000,

	0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0043,0x0044,0x0045,0x0000,0x0000,0x0046,0x0047,0x0447,
	0x0446,0x0000,0x0000,0x0048,0x0049,0x004A,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,0x0000,
	0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x004B,0x004C,0x004D,0x0000,0x0000,0x004E,0x004F,0x044F,
	0x0050,0x0000,0x0000,0x0051,0x0052,0x0053,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,0x0000,

	0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,0x0000,
	0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,0x0000,

	0x0001,0x0054,0x0054,0x0054,0x0054,0x0054,0x0054,0x0054,
	0x0054,0x0054,0x0054,0x0054,0x0054,0x0054,0x0054,0x0054,
	0x0054,0x0054,0x0054,0x0054,0x0054,0x0054,0x0054,0x0054,
	0x0054,0x0054,0x0054,0x0054,0x0054,0x0001,0x0000,0x0000,
	0x0001,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,
	0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,
	0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,
	0x0002,0x0002,0x0002,0x0002,0x0002,0x0001,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

const unsigned short bgPal[256] __attribute__((aligned(4)))=
{
	0x0000,0x6942,0x03F5,0x04CD,0x659F,0x3C9B,0x3F9F,0x6CE7,
	0x0256,0x7F55,0x2485,0x0C3C,0x0086,0x0F3E,0x7FFF,0x265A,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

//}}BLOCK(bg)
