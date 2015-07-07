#ifndef COORD_HPP
#define COORD_HPP

#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14;

class coord {
    public:
        void input(double xval, double yval);
        void display();
        void convertToCartesian(double xval, double yval);
        coord(double xval=0, double yval=0);

    private:
        double xval, yval;
};


#endif
