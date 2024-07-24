#include <stdio.h>
#include "ColorCode.h"
#include "EvenCountColorCode.h"

ColorPair getColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.Major = 
        (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.Minor =
        (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

