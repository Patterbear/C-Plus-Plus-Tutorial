#ifndef MATHS_UTILS
#define MATHS_UTILS

struct Rectangle
{
    double length;
    double width;
};

double area(double length, double width);

double area(double length);

double area(Rectangle rectangle);

double pow(double base, int pow = 2);

#endif