#include "UpLeftTriangle.h"

UpLeftTriangle::UpLeftTriangle(unsigned short size, char back, char symbol, ShapeType type)
              : DrawableShape(size, back, symbol, type)
{
    makeCache();
}



void UpLeftTriangle::makeCache() {
    unsigned short i = 0;
    for (; i < 2; ++i) {
        char* curLine = _cache[i];
        for (unsigned short j = 0; j < _size; ++j) {
            curLine[j] = _symbol;
        }
    }
    for (; i < _size; ++i) {
        char* curLine = _cache[i];
        unsigned short j = 0;
        curLine[j++] = _symbol;
        curLine[j++] = _symbol;
        for (; j < _size - i - 1; ++j) {
            curLine[j] = _back;
        }
        for (; j < _size - i + 1; ++j) {
            curLine[j] = _symbol;
        }
        for (; j < _size; ++j) {
            curLine[j] = _back;
        }
    }
}
