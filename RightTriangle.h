#ifndef RTRIANGLE_H_INCLUDED
#define RTRIANGLE_H_INCLUDED

#include "DrawableShape.h"

class RightTriangle : public DrawableShape {
public:
    RightTriangle(unsigned short size, char back, char symbol, ShapeType type);
    void draw() const override;
};

#endif // RTRIANGLE_H_INCLUDED
