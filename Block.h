#ifndef BLOCK_H
#define BLOCK_H

class Block {



    private:
        int x;
        int y;
        int width;
        int height;

    public:
        Block(int x, int y, int w, int h);
        void display();
        void translate(int dx, int dy);
        int getArea();
};


#endif