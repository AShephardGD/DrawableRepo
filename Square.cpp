#include "Square.h"

Square::Square(unsigned short size, char back, char symbol, ShapeType type)
      : DrawableShape(size, back, symbol, type)
{
    makeCache();
}



void Square::makeCache() {
    for (unsigned short i = 0; i < _size; ++i) {
        char* curLine = _cache[i];
        if (i < 2 || i >= (_size - 2)) {
            for (unsigned short j = 0; j < _size; ++j) {
                curLine[j] = _symbol;
            }
        }
        else {
            for (unsigned short j = 0; j < _size; ++j) {
                if (j < 2 || j >= (_size - 2)) {
                    curLine[j] = _symbol;
                }
                else {
                    curLine[j] = _back;
                }
            }
        }
    }
}
