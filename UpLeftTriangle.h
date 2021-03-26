#ifndef UPLEFTTRIANGLE_H_INCLUDED
#define UPLEFTTRIANGLE_H_INCLUDED

#include "DrawableShape.h"

class UpLeftTriangle : public DrawableShape {
public:
    UpLeftTriangle(unsigned short size, char back, char symbol, ShapeType type);

    void makeCache() override;
};

#endif // UPLEFTTRIANGLE_H_INCLUDED
