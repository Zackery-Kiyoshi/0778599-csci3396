#ifndef SCANNER
#define SCANNER

#include <string>;
#include <array>;
using std::string;
using std::pair;

class scanner {


	/*

	load r1 = > r2			r2 ? MEM(r1)				2
	loadI x = > r2			r2 ? x						1
	lshift r1, r2 = > r3	r3 ? r1  r2					1
	store r1 = > r2			MEM(r2) ? r1				2
	sub r1, r2 = > r3		r3 ? r1 - r2				1
	add r1, r2 = > r3		r3 ? r1 + r2				1
	mult r1, r2 = > r3		r3 ? r1 * r2				1
	rshift r1, r2 = > r3	r3 ? r1  r2					1
	output x				prints MEM(x) to stdout		1
	nop						idle for one cycle			1