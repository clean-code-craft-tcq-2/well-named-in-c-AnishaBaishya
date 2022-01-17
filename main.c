#include <stdio.h>
#include <assert.h>
#include "main.h"

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};
int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    printf("Number\tMajorColor\t\t\tMinorColor");
    int Count =1;
    for(int i =0; i<numberOfMajorColors;i++)
    {
	    for(int j=0;j<numberOfMinorColors;j++)
	    {
		    printf("\n%d", Count++);
		    printf("\t%s",MajorColorNames[i]);
		    printf("\t%s\n", MinorColorNames[j]);
	    }
    }
    return 0;
}
