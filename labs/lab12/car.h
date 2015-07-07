#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <cstring>
using namespace std;

class Car {
    public:
        Car(double, char, int, char*);
        void display();
        ~Car();
        Car(const Car &a);
        
    private:
        double engine_size;
        char body_style;
        int color_code;
        char* vinptr;
};

#endif
