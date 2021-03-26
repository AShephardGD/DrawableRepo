#ifndef RTRIANGLE_H_INCLUDED
#define RTRIANGLE_H_INCLUDED

#include "DrawableShape.h"

class DownLeftTriangle : public DrawableShape {
public:
    DownLeftTriangle(unsigned short size, char back, char symbol, ShapeType type);

    void makeCache() override;
};

#endif // RTRIANGLE_H_INCLUDED
