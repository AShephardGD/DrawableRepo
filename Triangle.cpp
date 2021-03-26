#include "Triangle.h"

Triangle::Triangle(unsigned short size, char back, char symbol, ShapeType type)
        : DrawableShape(size, back, symbol, type)
{
    makeCache();
}



void Triangle::makeCache() {
    unsigned short i = 0;
    for (; i < _size - 2; ++i) {
        char* curLine = _cache[i];
        unsigned short j = 0;
        for (; j < ((_size - i + 1) / 2) - 2; ++j) {
            curLine[j] = _back;
        }
        for (; j < ((_size - i + 1) / 2); ++j) {
            curLine[j] = _symbol;
        }
        for (; j < ((_size + i) / 2); ++j) {
            curLine[j] = _back;
        }
        for (; j < ((_size + i) / 2) + 2; ++j) {
            curLine[j] = _symbol;
        }
        for (; j < _size; ++j) {
            curLine[j] = _back;
        }
    }
    for (; i < _size; ++i) {
        char* curLine = _cache[i];
        for (unsigned short j = 0; j < _size; ++j) {
            curLine[j] = _symbol;
        }
    }
}

