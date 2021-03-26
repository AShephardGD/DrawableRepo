#ifndef DOWNRIGHTTRIANGLE_H_INCLUDED
#define DOWNRIGHTTRIANGLE_H_INCLUDED

#include "DrawableShape.h"

class DownRightTriangle : public DrawableShape {
public:
    DownRightTriangle(unsigned short size, char back, char symbol, ShapeType type);

    void makeCache() override;
};

#endif // DOWNRIGHTTRIANGLE_H_INCLUDED
