#include "major1.h"

int parity(unsigned int x) {
    int result = 0;

    while (x) {
        result ^= (x & 1);  
        x >>= 1;            
    }

    return result;
}
