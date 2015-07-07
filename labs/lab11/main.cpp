#include <iostream>
#include "figure.h"
#include "triangle.h"
#include "rectangle.h"
using namespace std;

int main() {
    Triangle tri;
    tri.draw();
    cout << "\nDervived class Triangle object calling center().\n";
    tri.center(); //calls draw and center

    Rectangle rect;
    rect.draw();
    cout << "\nDervived class Rectangle object calling center().\n";
    rect.center(); //calls draw and center

    return 0;
}

