#include <stdio.h>
#include "Cache.h"
#include "Memory.h"
#include "AddressDecoder.h"


AddressDecoder::AddressDecoder(unsigned long address, int cacheSize, int blockSize, int associativity) {
    this->cacheSize = cacheSize;
    this->blockSize = blockSize;
    this->associativity = associativity;
    this->numSets = cacheSize / (blockSize * associativity);
    this->numBlocks = cacheSize / blockSize;

}