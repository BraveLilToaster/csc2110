#include<iostream>
#include<cmath>
#include "point.h"
using namespace std;

    void Point::point();
    void Point::point(double a, double b){
        x = a;
        y = b;
    }
    int Point::area() {
        return 0;
    }
    double Point::distance(double x, double y){
      return sqrt(pow(x1-x2, 2.0) + pow(y1-y2, 2.0));
        
    }


