#ifndef testColors_hpp
#define testColors_hpp

#include <stdio.h>
#include <iostream>
#include "ColorPair.h"

void testNumberToPair(int pairNumber,
    TelCoColorCoder::MajorColor expectedMajor,
                      TelCoColorCoder::MinorColor expectedMinor);

void testPairToNumber(
    TelCoColorCoder::MajorColor major,
    TelCoColorCoder::MinorColor minor,
                      int expectedPairNumber);

#endif /* testColors_h */
