#include "Rombus.h"

Rombus::Rombus(unsigned short size, char back, char symbol, ShapeType type)
      : DrawableShape(size, back, symbol, type)
{
    makeCache();
}

void Rombus::makeCache() {
    for (unsigned short i = 0; i < _size; ++i) {
        char* curLine = _cache[i];
        int k = 0;
        if (i < (_size / 2)) {
            k = i;
        }
        else {
            k = _size - i - 1;
        }
        unsigned short j = 0;
        for (; j < (_size / 2) - 2 - k + (_size % 2); ++j) {
            curLine[j] = _back;
        }
        for (; j < (_size / 2) - k + (_size % 2); ++j) {
            curLine[j] = _symbol;
        }
        for (; j < (_size / 2) + k; ++j) {
            curLine[j] = _back;
        }
        for (; (j < ((_size / 2) + 2 + k)) && j < _size; ++j) {
            curLine[j] = _symbol;
        }
        for (; j < _size; ++j) {
            curLine[j] = _back;
        }
    }
}
