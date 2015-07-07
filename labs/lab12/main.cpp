#include <iostream>
#include "car.h"
using namespace std;

int main() {
    char *pt = "13245";
    Car a(2.2, 'f', 8, pt);
    Car b(a);
    cout << "Car a: " << endl;
    a.display();
    cout << "Car b: " << endl;
    b.display();
}
