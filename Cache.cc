#include <stdio.h>
#include "Cache.h"
#include "Memory.h"

Cache::Cache(Memory* mem, int cacheSize, int blockSize, int associativity) {


    this->data = new int[cacheSize];
    this->mem = mem;
    this->blockSize = blockSize;
    this->associativity = associativity;

}
