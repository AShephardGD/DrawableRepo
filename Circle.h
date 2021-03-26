#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

#include "DrawableShape.h"

class Circle : public DrawableShape {
public:
    Circle(unsigned short size, char back, char symbol, ShapeType type);

    void makeCache() override;
};


#endif // CIRCLE_H_INCLUDED
