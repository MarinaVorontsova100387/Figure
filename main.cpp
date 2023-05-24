#include <iostream>

#include "Figure.h"
#include "Square.h"
#include "Circle.h"

using namespace std;

void PrintArea(Figure* figure);
void PrintPerimeter(Figure* figure);

int main() {
    Figure* circle = new Circle(1);
    Figure* square = new Square(1);

    PrintArea(circle);
    PrintPerimeter(circle);

    PrintArea(square);
    PrintPerimeter(square);

    return 0;
}

void PrintArea(Figure* figure) {
    cout << "Area = " << figure->CalcArea() << endl;
}

void PrintPerimeter(Figure* figure) {
    cout << "Perimeter = " << figure->CalcPerimeter() << endl;
}