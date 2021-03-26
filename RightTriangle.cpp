#include "RightTriangle.h"

#include <iostream>

RightTriangle::RightTriangle(unsigned short size, char back, char symbol, ShapeType type)
             : DrawableShape(size, back, symbol, type) {}

void RightTriangle::draw() const {
    for (unsigned short i = 0; i < _size - 2; ++i) {
        unsigned short j = 2;
        std::cout << _symbol << _symbol;
        for (; j < i; ++j) {
            std::cout << _back;
        }
        for (; j < i + 2; ++j) {
            std::cout << _symbol;
        }
        for (; j < _size; ++j) {
            std::cout << _back;
        }
    }
    for (unsigned short i = 0; i < 2; ++i) {
        for (unsigned short j = 0; j < _size; ++j) {
            std::cout << _symbol;
        }
        std::cout << std::endl;
    }
}
