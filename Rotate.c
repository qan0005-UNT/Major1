#include "major1.h"

unsigned int rotate_right(unsigned int value, unsigned int positions) {
    positions %= 32; 

    return (value >> positions) | (value << (32 - positions));
}
