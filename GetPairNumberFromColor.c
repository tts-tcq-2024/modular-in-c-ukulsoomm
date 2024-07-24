#include <stdio.h>
#include "ColorCode.h"
#include "EvenCountColorCode.h"

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};
const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

int getPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->major * numberOfMinorColors +
            colorPair->minor + 1;
}
