#ifndef CACHE_H
#define CACHE_H
#include "Memory.h"
class Cache {
    private:
        int cacheSize;
        int blockSize;
        int associativity;
        Memory* mem;
        int* data;

    public:
        Cache(Memory* mem, int cacheSize, int blockSize, int associativity);
        void write(int address, int value);
        int read(int address);
        void display();
};

#endif
