#include <stdio.h>
#include "Memory.h"

Memory::Memory(int size) {
    this->size = size;
    unsigned char* data = new unsigned char[size];
    for (int i = 0; i < size; i++) {
        data[i] = i%255;
    }
}

void Memory::display() {

    //prints the size of the memory.
    printf("Memory of size %d\n", size);

    //prints out all byes of memory as 2 digit hex numbers.
    for (int i = 0; i < size; i++) {
        printf("%02x ", data[i]);
    }

}

int Memory::getSize() {
    return this -> size;
}
