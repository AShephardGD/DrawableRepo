#ifndef UPRIGHTTRIANGLE_H_INCLUDED
#define UPRIGHTTRIANGLE_H_INCLUDED

#include "DrawableShape.h"

class UpRightTriangle : public DrawableShape {
public:
    UpRightTriangle(unsigned short size, char back, char symbol, ShapeType type);

    void makeCache() override;
};

#endif // UPRIGHTTRIANGLE_H_INCLUDED
