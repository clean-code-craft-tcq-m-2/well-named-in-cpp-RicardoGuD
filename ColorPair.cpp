#include "ColorPair.h"

using namespace TelCoColorCoder;

MajorColor ColorPair::getMajor() {
    return majorColor;
}

MinorColor ColorPair::getMinor() {
    return minorColor;
}

std::string ColorPair::ToString() {
    std::string colorPairStr = MajorColorNames[ static_cast<int>(majorColor)];
    colorPairStr += " ";
    colorPairStr += MinorColorNames[static_cast<int>(minorColor)];
    return colorPairStr;
}

ColorPair TelCoColorCoder::GetColorFromPairNumber(int pairNumber)
{
    int zeroBasedPairNumber = pairNumber - 1;
    MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return ColorPair(majorColor, minorColor);
}

int TelCoColorCoder::GetPairNumberFromColor(MajorColor major, MinorColor minor)
{
    return static_cast<int>(major) * numberOfMinorColors + static_cast<int>(minor) + 1;
}
