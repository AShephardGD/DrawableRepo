#ifndef FIGURE_H_INCLUDED
#define FIGURE_H_INCLUDED

#include <iostream>

enum class ShapeType {
    Square,
    Circle,
    DownLeftTriangle,
    DownRightTriangle,
    UpRightTriangle,
    UpLeftTriangle,
    Rombus,
    Triangle,
    Unknown,
};

class DrawableShape {
public:
    DrawableShape(unsigned short size, char back, char symbol, ShapeType type);
    virtual ~DrawableShape();

    virtual void setSymbol(char symbol);
    virtual void setBackground(char back);
    virtual void setSize(unsigned short size);

    ShapeType getType() const;
    unsigned short getSize() const;

    void draw() const;
    void draw(std::ostream& stream) const;
    virtual void makeCache();

    friend std::ostream& operator<<(std::ostream& stream, const DrawableShape& shape);

protected:
    unsigned short _size;
    char _back;
    char _symbol;
    ShapeType _type;
    char** _cache;
};

#endif // FIGURE_H_INCLUDED
