#include <stdio.h>
#include "ColorPair.h"

ColorPair getColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.major = 
        (enum majorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minor =
        (enum minorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

