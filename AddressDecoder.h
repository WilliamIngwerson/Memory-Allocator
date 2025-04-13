#ifndef ADDRESSDECODER_H
#define ADDRESSDECODER_H

class AddressDecoder {
    private:
        int cacheSize;
        int blockSize;
        int associativity;
        int numBlocks;
        int numSets;
        int blockOffsetBits;
        int indexBits;
        int tagBits;

    public:
        AddressDecoder(unsigned long address, int cacheSize, int blockSize, int associativity);
        int getBlockOffsetBits();
        int getIndexBits();
        int getTagBits();
        int getNumBlocks();
        int getNumSets();
};

#endif