#ifndef CIRCLE_H
#define CIRCLE_H

class Circle: public Point {
    public:
        void point();
        void point(double, double, double);
        int area(double, double);
        double distance(double, double);

    private:
        double x;
        double y;
        double radius;
};

#endif
