#pragma once

#include "Figure.h"

class Square : public Figure {
private:
    double _side;

public:
    Square(double side) : _side(side) {}

    double CalcArea() override {
        return _side * _side;
    }

    double CalcPerimeter() override {
        return 4 * _side;
    }
};

