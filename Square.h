#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED

#include "DrawableShape.h"

class Square : public DrawableShape {
public:
    Square(unsigned short size, char back, char symbol, ShapeType type);

    void makeCache() override;
};
#endif // SQUARE_H_INCLUDED
