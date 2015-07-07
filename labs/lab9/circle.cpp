#include<iostream>
#include<cmath>
#include "circle.h"
using namespace std;

    void Circle::point();
    void Circle::point(double a, double b){
        x = a;
        y = b;
        radius = ;
    }
    double Circle::area(double) {
        double a = 2*3.14159*pow(radius, 2.0);

        return a;
    }
    double Circle::distance(double x, double y){
      return sqrt(pow(x1-x2, 2.0) + pow(y1-y2, 2.0));
        
    }


