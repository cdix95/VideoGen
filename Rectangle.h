#pragma once
#include <vector>
#include "Frame.h"
#include "global.h"

class Rectangle {
public:
    Rectangle(double h, double w, double x, double y, byte r, byte g, byte b): h(h), w(w), x(x), y(y), r(r), g(g), b(b) {}
    void draw(Frame &frame);
    void setSpeed(double dx, double dy);
    void update(double dt);
private:
    byte r, g, b;
    double h, w, x, y, dx, dy, dp;
    
};
