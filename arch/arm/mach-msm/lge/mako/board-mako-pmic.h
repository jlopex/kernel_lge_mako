/*
 * Copyright (c) 2012, LGE Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */


#ifndef __ARCH_ARM_MACH_MSM_BOARD_APQ8064_MAKO_PMIC_H
#define __ARCH_ARM_MACH_MSM_BOARD_APQ8064_MAKO_PMIC_H

/* Units for temperature below (on x axis) is in 0.1DegC as
   required by the battery driver. Note the resolution used
   here to compute the table was done for DegC to milli-volts.
   In consideration to limit the size of the table for the given
   temperature range below, the result is linearly interpolated
   and provided to the battery driver in the units desired for
   their framework which is 0.1DegC. True resolution of 0.1DegC
   will result in the below table size to increase by 10 times */
static struct pm8xxx_adc_map_pt adcmap_btm_threshold[] = {
	{-300,	1675},
	{-290,	1667},
	{-280,	1659},
	{-270,	1651},
	{-260,	1642},
	{-250,	1633},
	{-240,	1623},
	{-230,	1613},
	{-220,	1602},
	{-210,	1592},
	{-200,	1580},
	{-190,	1568},
	{-180,	1556},
	{-170,	1544},
	{-160,	1531},
	{-150,	1517},
	{-140,	1503},
	{-130,	1489},
	{-120,	1474},
	{-110,	1459},
	{-100,	1444},
	{-90,	1428},
	{-80,	1412},
	{-70,	1395},
	{-60,	1378},
	{-50,	1361},
	{-40,	1343},
	{-30,	1325},
	{-20,	1307},
	{-10,	1289},
	{0, 	1270},
	{10,	1251},
	{20,	1232},
	{30,	1213},
	{40,	1194},
	{50,	1174},
	{60,	1155},
	{70,	1135},
	{80,	1115},
	{90,	1096},
	{100,	1076},
	{110,	1057},
	{120,	1037},
	{130,	1018},
	{140,	999},
	{150,	980},
	{160,	961},
	{170,	942},
	{180,	923},
	{190,	905},
	{200,	887},
	{210,	869},
	{220,	851},
	{230,	834},
	{240,	817},
	{250,	800},
	{260,	784},
	{270,	767},
	{280,	752},
	{290,	736},
	{300,	721},
	{310,	706},
	{320,	692},
	{330,	678},
	{340,	664},
	{350,	650},
	{360,	637},
	{370,	625},
	{380,	612},
	{390,	600},
	{400,	589},
	{410,	577},
	{420,	566},
	{430,	555},
	{440,	545},
	{450,	535},
	{460,	525},
	{470,	516},
	{480,	506},
	{490,	498},
	{500,	489},
	{510,	481},
	{520,	473},
	{530,	465},
	{540,	457},
	{550,	450},
	{560,	443},
	{570,	436},
	{580,	429},
	{590,	423},
	{600,	417},
	{610,	411},
	{620,	405},
	{630,	400},
	{640,	394},
	{650,	389},
	{660,	384},
	{670,	379},
	{680,	375},
	{690,	370},
	{700,	366},
	{710,	362},
	{720,	358},
	{730,	354},
	{740,	350},
	{750,	346},
	{760,	343},
	{770,	339},
	{780,	336},
	{790,	333}
};

static struct pm8xxx_adc_map_pt adcmap_pa_therm[] = {
	{1677,	-30},
	{1671,	-29},
	{1663,	-28},
	{1656,	-27},
	{1648,	-26},
	{1640,	-25},
	{1632,	-24},
	{1623,	-23},
	{1615,	-22},
	{1605,	-21},
	{1596,	-20},
	{1586,	-19},
	{1576,	-18},
	{1565,	-17},
	{1554,	-16},
	{1543,	-15},
	{1531,	-14},
	{1519,	-13},
	{1507,	-12},
	{1494,	-11},
	{1482,	-10},
	{1468,	-9},
	{1455,	-8},
	{1441,	-7},
	{1427,	-6},
	{1412,	-5},
	{1398,	-4},
	{1383,	-3},
	{1367,	-2},
	{1352,	-1},
	{1336,	0},
	{1320,	1},
	{1304,	2},
	{1287,	3},
	{1271,	4},
	{1254,	5},
	{1237,	6},
	{1219,	7},
	{1202,	8},
	{1185,	9},
	{1167,	10},
	{1149,	11},
	{1131,	12},
	{1114,	13},
	{1096,	14},
	{1078,	15},
	{1060,	16},
	{1042,	17},
	{1024,	18},
	{1006,	19},
	{988,	20},
	{970,	21},
	{952,	22},
	{934,	23},
	{917,	24},
	{899,	25},
	{882,	26},
	{865,	27},
	{848,	28},
	{831,	29},
	{814,	30},
	{797,	31},
	{781,	32},
	{764,	33},
	{748,	34},
	{732,	35},
	{717,	36},
	{701,	37},
	{686,	38},
	{671,	39},
	{656,	40},
	{642,	41},
	{627,	42},
	{613,	43},
	{599,	44},
	{586,	45},
	{572,	46},
	{559,	47},
	{546,	48},
	{534,	49},
	{522,	50},
	{509,	51},
	{498,	52},
	{486,	53},
	{475,	54},
	{463,	55},
	{452,	56},
	{442,	57},
	{431,	58},
	{421,	59},
	{411,	60},
	{401,	61},
	{392,	62},
	{383,	63},
	{374,	64},
	{365,	65},
	{356,	66},
	{348,	67},
	{339,	68},
	{331,	69},
	{323,	70},
	{316,	71},
	{308,	72},
	{301,	73},
	{294,	74},
	{287,	75},
	{280,	76},
	{273,	77},
	{267,	78},
	{261,	79},
	{255,	80},
	{249,	81},
	{243,	82},
	{237,	83},
	{232,	84},
	{226,	85},
	{221,	86},
	{216,	87},
	{211,	88},
	{206,	89},
	{201,	90}
};

/*
static struct pm8xxx_adc_map_pt adcmap_ntcg_104ef_104fb[] = {
	{696483,	-40960},
	{649148,	-39936},
	{605368,	-38912},
	{564809,	-37888},
	{527215,	-36864},
	{492322,	-35840},
	{460007,	-34816},
	{429982,	-33792},
	{402099,	-32768},
	{376192,	-31744},
	{352075,	-30720},
	{329714,	-29696},
	{308876,	-28672},
	{289480,	-27648},
	{271417,	-26624},
	{254574,	-25600},
	{238903,	-24576},
	{224276,	-23552},
	{210631,	-22528},
	{197896,	-21504},
	{186007,	-20480},
	{174899,	-19456},
	{164521,	-18432},
	{154818,	-17408},
	{145744,	-16384},
	{137265,	-15360},
	{129307,	-14336},
	{121866,	-13312},
	{114896,	-12288},
	{108365,	-11264},
	{102252,	-10240},
	{96499,		-9216},
	{91111,		-8192},
	{86055,		-7168},
	{81308,		-6144},
	{76857,		-5120},
	{72660,		-4096},
	{68722,		-3072},
	{65020,		-2048},
	{61538,		-1024},
	{58261,		0},
	{55177,		1024},
	{52274,		2048},
	{49538,		3072},
	{46962,		4096},
	{44531,		5120},
	{42243,		6144},
	{40083,		7168},
	{38045,		8192},
	{36122,		9216},
	{34308,		10240},
	{32592,		11264},
	{30972,		12288},
	{29442,		13312},
	{27995,		14336},
	{26624,		15360},
	{25333,		16384},
	{24109,		17408},
	{22951,		18432},
	{21854,		19456},
	{20807,		20480},
	{19831,		21504},
	{18899,		22528},
	{18016,		23552},
	{17178,		24576},
	{16384,		25600},
	{15631,		26624},
	{14916,		27648},
	{14237,		28672},
	{13593,		29696},
	{12976,		30720},
	{12400,		31744},
	{11848,		32768},
	{11324,		33792},
	{10825,		34816},
	{10354,		35840},
	{9900,		36864},
	{9471,		37888},
	{9062,		38912},
	{8674,		39936},
	{8306,		40960},
	{7951,		41984},
	{7616,		43008},
	{7296,		44032},
	{6991,		45056},
	{6701,		46080},
	{6424,		47104},
	{6160,		48128},
	{5908,		49152},
	{5667,		50176},
	{5439,		51200},
	{5219,		52224},
	{5010,		53248},
	{4810,		54272},
	{4619,		55296},
	{4440,		56320},
	{4263,		57344},
	{4097,		58368},
	{3938,		59392},
	{3785,		60416},
	{3637,		61440},
	{3501,		62464},
	{3368,		63488},
	{3240,		64512},
	{3118,		65536},
	{2998,		66560},
	{2889,		67584},
	{2782,		68608},
	{2680,		69632},
	{2581,		70656},
	{2490,		71680},
	{2397,		72704},
	{2310,		73728},
	{2227,		74752},
	{2147,		75776},
	{2064,		76800},
	{1998,		77824},
	{1927,		78848},
	{1860,		79872},
	{1795,		80896},
	{1736,		81920},
	{1673,		82944},
	{1615,		83968},
	{1560,		84992},
	{1507,		86016},
	{1456,		87040},
	{1407,		88064},
	{1360,		89088},
	{1314,		90112},
	{1271,		91136},
	{1228,		92160},
	{1189,		93184},
	{1150,		94208},
	{1112,		95232},
	{1076,		96256},
	{1042,		97280},
	{1008,		98304},
	{976,		99328},
	{945,		100352},
	{915,		101376},
	{886,		102400},
	{859,		103424},
	{832,		104448},
	{807,		105472},
	{782,		106496},
	{756,		107520},
	{735,		108544},
	{712,		109568},
	{691,		110592},
	{670,		111616},
	{650,		112640},
	{631,		113664},
	{612,		114688},
	{594,		115712},
	{577,		116736},
	{560,		117760},
	{544,		118784},
	{528,		119808},
	{513,		120832},
	{498,		121856},
	{483,		122880},
	{470,		123904},
	{457,		124928},
	{444,		125952},
	{431,		126976},
	{419,		128000}
};
*/

#endif
