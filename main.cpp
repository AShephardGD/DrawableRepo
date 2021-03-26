#include <iostream>

#include "Circle.h"
#include "Rombus.h"
#include "DownLeftTriangle.h"
#include "DownRightTriangle.h"
#include "UpLeftTriangle.h"
#include "UpRightTriangle.h"
#include "Triangle.h"
#include "Square.h"

using namespace std;

int main()
{
    Rombus rombus(50, '#', '+', ShapeType::Rombus);
    rombus.draw();
    std::cout << std::endl;
    rombus.setSize(11);
    rombus.draw();
    std::cout << std::endl;
    rombus.setBackground('.');
    rombus.draw();
    std::cout << std::endl;
    rombus.setSymbol('%');
    rombus.draw();
    std::cout << std::endl;



    Triangle triangle(11,'!', '0', ShapeType::Triangle);
    triangle.draw();
    std::cout << std::endl;
    triangle.setSize(50);
    triangle.draw();
    std::cout << std::endl;
    triangle.setBackground(' ');
    triangle.draw();
    std::cout << std::endl;
    triangle.setSymbol('*');
    triangle.draw();
    std::cout << std::endl;



    Square square(50, '!', '0', ShapeType::Square);
    square.draw();
    std::cout << std::endl;
    square.setSize(11);
    square.draw();
    std::cout << std::endl;
    square.setBackground(' ');
    square.draw();
    std::cout << std::endl;
    square.setSymbol('*');
    square.draw();
    std::cout << std::endl;



    DownLeftTriangle downLeftTriangle(11, '!', '0', ShapeType::DownLeftTriangle);
    downLeftTriangle.draw();
    std::cout << std::endl;
    downLeftTriangle.setSize(50);
    downLeftTriangle.draw();
    std::cout << std::endl;
    downLeftTriangle.setBackground('.');
    downLeftTriangle.draw();
    std::cout << std::endl;
    downLeftTriangle.setSymbol('*');
    downLeftTriangle.draw();
    std::cout << std::endl;



    DownRightTriangle downRightTriangle(50, '!', '0', ShapeType::DownRightTriangle);
    downRightTriangle.draw();
    std::cout << std::endl;
    downRightTriangle.setSize(11);
    downRightTriangle.draw();
    std::cout << std::endl;
    downRightTriangle.setBackground(' ');
    downRightTriangle.draw();
    std::cout << std::endl;
    downRightTriangle.setSymbol('*');
    downRightTriangle.draw();
    std::cout << std::endl;



    UpLeftTriangle upLeftTriangle(50, '!', '0', ShapeType::UpLeftTriangle);
    upLeftTriangle.draw();
    std::cout << std::endl;
    upLeftTriangle.setSize(11);
    upLeftTriangle.draw();
    std::cout << std::endl;
    upLeftTriangle.setBackground(' ');
    upLeftTriangle.draw();
    std::cout << std::endl;
    upLeftTriangle.setSymbol('*');
    upLeftTriangle.draw();
    std::cout << std::endl;



    UpRightTriangle upRightTriangle(50, '!', '0', ShapeType::UpRightTriangle);
    upRightTriangle.draw();
    std::cout << std::endl;
    upRightTriangle.setSize(11);
    upRightTriangle.draw();
    std::cout << std::endl;
    upRightTriangle.setBackground(' ');
    upRightTriangle.draw();
    std::cout << std::endl;
    upRightTriangle.setSymbol('*');
    upRightTriangle.draw();
    std::cout << std::endl;



    Circle circle(50, '!', '0', ShapeType::Circle);
    circle.draw();
    std::cout << std::endl;
    circle.setSize(11);
    circle.draw();
    std::cout << std::endl;
    circle.setBackground(' ');
    circle.draw();
    std::cout << std::endl;
    circle.setSymbol('*');
    circle.draw();
    std::cout << std::endl;



    std::cout << circle << std::endl << triangle;
    return 0;
}
