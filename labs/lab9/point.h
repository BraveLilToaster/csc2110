#ifndef POINT_H
#define POINT_H

class Point {
    public:
        void point();
        void point(double, double);
        int area();
        double distance(double, double);

    private:
        double x;
        double y;
};

#endif
