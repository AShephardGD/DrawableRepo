#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED

#include "DrawableShape.h"

class Triangle : public DrawableShape {
public:
    Triangle(unsigned short size, char back, char symbol, ShapeType type);

    void makeCache() override;
};

#endif // TRIANGLE_H_INCLUDED
