#pragma once
#include "global.h"
#include <stdio.h>
#include <cstring>
class Frame {
public:
    Frame();
    ~Frame();
    void setPixel(int x, int y, byte r, byte g, byte blue);
    void clear();
    bool isOutside(int x, int y) const;
    void write(FILE * file) const;
    void clamp(int x, int y);
private:
    unsigned char *pixels;
};
