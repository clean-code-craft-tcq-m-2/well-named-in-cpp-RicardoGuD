#include "PrintManual.h"
#include <iostream>

const int COLORCELLSPACES = 11;
const int ONEDIGITSPACES = 11;
const int TWODIGITSPACES = 10;
const int MAX_COLOR_COMBINATIONS = TelCoColorCoder::numberOfMajorColors * TelCoColorCoder::numberOfMinorColors;
std::string SEPARATOR = "==========================================";

void getColorNameSizes(int& majorColorSize, int& minorColorSize, TelCoColorCoder::ColorPair& colorPair) {
    std::string colorStr;

    colorStr = TelCoColorCoder::MajorColorNames[static_cast<int>(colorPair.getMajor())];
    majorColorSize = colorStr.size();
    colorStr = TelCoColorCoder::MinorColorNames[static_cast<int>(colorPair.getMinor())];
    minorColorSize = colorStr.size();
}
void fillSpaces(int numberofSpaces)
{
    for (int i = 0; i < numberofSpaces; i++)
    {
        std::cout << " ";
    }
    std::cout << "||";
}

void printManual()
{
    std::cout << SEPARATOR << std::endl;
    std::cout << "||" << "Color Number" << "||" << "Major Color" << "||" << "Minor Color" << "||" << std::endl;
    std::cout << SEPARATOR << std::endl;

    for (int i = 1; i <= MAX_COLOR_COMBINATIONS; i++)
    {
        TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(i);
        int majorColorSize = 0;
        int minorColorSize = 0;

        getColorNameSizes(majorColorSize, minorColorSize, colorPair);

        std::cout << "||" << i;
        if (i<10) { 
            fillSpaces(ONEDIGITSPACES); }
        else { 
            fillSpaces(TWODIGITSPACES); }

        std::cout << TelCoColorCoder::MajorColorNames[static_cast<int>(colorPair.getMajor())];
        fillSpaces(COLORCELLSPACES - majorColorSize);

        std::cout << TelCoColorCoder::MinorColorNames[static_cast<int>(colorPair.getMinor())];
        fillSpaces(COLORCELLSPACES - minorColorSize);
        std::cout << std::endl;
    }
    std::cout << SEPARATOR;
}
