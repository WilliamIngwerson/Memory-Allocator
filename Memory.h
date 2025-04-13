#ifndef MEMORY_H
#define MEMORY_H

class Memory {
    private:
        int size;
        unsigned char* data;

    public:
        Memory(int size);
        int getSize();
        unsigned char getByte(unsigned long address);
        void setByte(unsigned long address, unsigned char value);
        void display();
};

#endif
