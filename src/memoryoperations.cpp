#include "MemoryOperations.h"
#include "Pet.h"
#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////
Pet* MemoryOperations::memmove(
    Pet* destination_p, const Pet* source_p, size_t count)
{
    //Comparing destination address with source address (since we know it is a contiguous address)
    //if it is greater we copy in reverse order else we copy in original order
    if (destination_p > source_p) {
        for (int32_t i = count - 1; i >= 0; --i) {
            destination_p[i] = source_p[i];
        }
    } else {
        for (int32_t i = 0; i < count; ++i) {
            destination_p[i] = source_p[i];
        }
    }

    return destination_p;
}
