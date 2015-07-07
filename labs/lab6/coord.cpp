#include "coord.hpp"



void coord::input(double xval_, double yval_)
{
    xval = xval_;
    yval = yval_;
    
}

void coord::display()
{
    cout << xval << endl;
    cout << yval << endl;

}

void coord::convertToCartesian(double dist, double theta)
{

xval = dist * cos(theta * PI/180.0);
yval = dist * sin(theta * PI/180.0);

}


coord::coord(double xval_, double yval_)
{
    xval = xval_;
    yval = yval_;
    
}
