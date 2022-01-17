#include <stdio.h>
#include "ColorPairToString.h"
#include "test.h"

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
