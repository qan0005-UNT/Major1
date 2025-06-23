#include "major1.h"

int countLeadingZero(unsigned int x)
{
    if (x == 0) return 32;

    int n = 0;
    while ((x & 0x80000000u) == 0) {
        n++;
        x <<= 1;
    }
    return n;
}
