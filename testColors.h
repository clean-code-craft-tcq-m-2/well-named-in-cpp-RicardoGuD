#include <stdio.h>
#include <iostream>
#include "Colorpair.h"


void testNumberToPair(int pairNumber,
    TelCoColorCoder::MajorColor expectedMajor,
                      TelCoColorCoder::MinorColor expectedMinor);

void testPairToNumber(
    TelCoColorCoder::MajorColor major,
    TelCoColorCoder::MinorColor minor,
                      int expectedPairNumber);

#endif /* testColors_h */
