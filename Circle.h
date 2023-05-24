#pragma once

#include "Figure.h"

class Circle : public Figure {
private:
    double _radius;
    const double PI = 3.14;

public:
    Circle(double radius) : _radius(radius) {}

    double CalcArea() override {
        return PI * _radius * _radius;
    }

    double CalcPerimeter() override {
        return 2 * PI * _radius;
    }

    void Foo() {

    }
};
