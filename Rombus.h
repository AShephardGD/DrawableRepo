#ifndef ROMBUS_H_INCLUDED
#define ROMBUS_H_INCLUDED

#include "DrawableShape.h"

class Rombus : public DrawableShape {
public:
    Rombus(unsigned short size, char back, char symbol, ShapeType type);

    void makeCache() override;
};

#endif // ROMBUS_H_INCLUDED
