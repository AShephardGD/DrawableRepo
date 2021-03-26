#include "Circle.h"

Circle::Circle(unsigned short size, char back, char symbol, ShapeType type)
       : DrawableShape(size, back, symbol, type)
{
    makeCache();
}

void Circle::makeCache() {
    unsigned short i = 0;
    for (; i < _size / 5; ++i) {
        char* curLine = _cache[i];
        for (unsigned short j = 0; j <  _size; ++j) {
            curLine[j] = _back;
        }
    }
    char* curLine = _cache[i++];
    unsigned short j = 0;
    for (; j < (_size / 3); ++j) {
        curLine[j] = _back;
    }
    for (; j < _size - (_size / 3); ++j) {
        curLine[j] = _symbol;
    }
    for (; j < _size; ++j) {
        curLine[j] = _back;
    }
    short k = _size / 3 - 2;
    unsigned short lastBack = 0;
    while (k >= (_size / 10)) {
        curLine = _cache[i++];
        for (j = 0; j < k; ++j) {
            curLine[j] = _back;
            lastBack = j;
        }
        for (; j < k + 3; ++j) {
            curLine[j] = _symbol;
        }
        for (; j < _size - k - 3; ++j) {
            curLine[j] = _back;
        }
        for (; j < _size - k; ++j) {
            curLine[j] = _symbol;
        }
        for (; j < _size; ++j) {
            curLine[j] = _back;
        }
        k -= 2;
    }
    k++;
    while (k + 1) {
        curLine = _cache[i++];
        for (j = 0; j < k; ++j) {
            curLine[j] = _back;
        }
        for (; j < k + 2; ++j) {
            curLine[j] = _symbol;
        }
        for (; j < _size - k - 2; ++j) {
            curLine[j] = _back;
        }
        for (; j < _size - k; ++j) {
            curLine[j] = _symbol;
        }
        for (; j < _size; ++j) {
            curLine[j] = _back;
        }
        k--;
    }
    for (k = 0; k < _size / 10; ++k) {
        j = 0;
        curLine = _cache[i++];
        curLine[j++] = _symbol;
        for (; j < _size - 1; ++j) {
            curLine[j] = _back;
        }
        curLine[j] = _symbol;
    }
    for (k = 0; k <= lastBack; k++) {
        j = 0;
        curLine = _cache[i++];
        for (; j < k; ++j) {
            curLine[j] = _back;
        }
        for (; j < k + 2; ++j) {
            curLine[j] = _symbol;
        }
        for (; j < _size - k - 2; ++j) {
            curLine[j] = _back;
        }
        for (; j < _size - k; ++j) {
            curLine[j] = _symbol;
        }
        for (; j < _size; ++j) {
            curLine[j] = _back;
        }
    }
    for (; k < _size / 3; k += 2) {
        j = 0;
        curLine = _cache[i++];
        for (; j < k; ++j) {
            curLine[j] = _back;
        }
        for (; j < k + 3; ++j) {
            curLine[j] = _symbol;
        }
        for (; j < _size - k - 3; ++j) {
            curLine[j] = _back;
        }
        for (; j < _size - k; ++j) {
            curLine[j] = _symbol;
        }
        for (; j < _size; ++j) {
            curLine[j] = _back;
        }
    }
    curLine = _cache[i++];
    j = 0;
    for (; j < (_size / 3); ++j) {
        curLine[j] = _back;
    }
    for (; j < _size - (_size / 3); ++j) {
        curLine[j] = _symbol;
    }
    for (; j < _size; ++j) {
        curLine[j] = _back;
    }
    for(; i < _size; ++i) {
        curLine = _cache[i];
        for (unsigned short k = 0; k < _size; ++k) {
            curLine[k] = _back;
        }
    }
}

/*
....................
....................
....................
....................
.....**********.....
....***......***....
..***..........***..
***..............***
**................**
*..................*
*..................*
**................**
.**..............**.
..***..........***..
....***......***....
.....**********.....
....................
....................
....................
....................
*/
