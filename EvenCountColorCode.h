#ifndef EVEN_COUNT_COLOR_CODE_H
#define EVEN_COUNT_COLOR_CODE_H
#include "ColorCode.h"

void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);

#endif //EVEN_COUNT_COLOR_CODE_H
