#include <stdio.h>
#include "ColorPair.h"
const char* majorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* minorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

int numberOfMajorColors = sizeof(majorColorNames) / sizeof(majorColorNames[0]);
int numberOfMinorColors = sizeof(minorColorNames) / sizeof(minorColorNames[0]);

int getPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->major * numberOfMinorColors +
            colorPair->minor + 1;
}
