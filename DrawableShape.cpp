#include "DrawableShape.h"

#include <iostream>

DrawableShape::DrawableShape(unsigned short size, char back, char symbol, ShapeType type) {
    _size = size;
    _back = back;
    _symbol = symbol;
    _type = type;
    _cache = new char*[_size];
    for (unsigned short i = 0; i < _size; ++i){
        _cache[i] = new char[_size];
    }
}

DrawableShape::~DrawableShape() {
    for (unsigned short i = 0; i < _size; ++i) {
        delete[] _cache[i];
    }
    delete[] _cache;
}


void DrawableShape::draw() const {
    for(unsigned short i = 0; i < _size; ++i) {
        char* curLine = _cache[i];
        for (unsigned short j = 0; j < _size; ++j) {
            std::cout << curLine[j];
        }
        std::cout << std::endl;
    }
}


void DrawableShape::draw(std::ostream& stream) const {
    for(unsigned short i = 0; i < _size; ++i) {
        char* curLine = _cache[i];
        for (unsigned short j = 0; j < _size; ++j) {
            stream << curLine[j];
        }
        stream << std::endl;
    }
}

void DrawableShape::makeCache() {
    //TODO
}



void DrawableShape::setSymbol(char symbol) {
    _symbol = symbol;
    makeCache();
}

void DrawableShape::setBackground(char back) {
    _back = back;
    makeCache();
}

void DrawableShape::setSize(unsigned short size) {
    for (unsigned short i = 0; i < _size; ++i) {
        delete[] _cache[i];
    }
    delete[] _cache;
    _size = size;
    _cache = new char*[_size];
    for (unsigned short i = 0; i < _size; ++i) {
        _cache[i] = new char[_size];
    }
    makeCache();
}



ShapeType DrawableShape::getType() const {
    return _type;
}

unsigned short DrawableShape::getSize() const {
    return _size;
}



std::ostream& operator<<(std::ostream& stream, const DrawableShape& shape) {
    shape.draw(stream);
    return stream;
}
