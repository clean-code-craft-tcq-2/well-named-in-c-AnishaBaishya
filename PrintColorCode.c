#include <stdio.h>
#include "PrintColorCode.h"
#include "WireColourCode.h"

/* function to print color code */
void ColorCodingManual()
{
	printf("Color Coding Manual\n");
	printf("PairNo \t Major Minor\n");
	int pairnum;
  	int totalPairs = 25;
  	for (pairnum = 1; pairnum <= totalPairs; pairnum++)
	{
		ColorPair colorPair = GetColorFromPairNumber(pairnum);
		char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
		ColorPairToString(&colorPair, colorPairNames);
		printf("%d\t%s\n",pairnum,colorPairNames);
	}
}
