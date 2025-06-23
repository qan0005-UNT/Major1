#include "major1.h"

unsigned int rotateRight(unsigned int value, unsigned int positions) {
    positions %= 32; 

    return (value >> positions) | (value << (32 - positions));
}
