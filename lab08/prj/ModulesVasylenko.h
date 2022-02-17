#ifndef MODULESVASYLENKO_H_INCLUDED
#define MODULESVASYLENKO_H_INCLUDED

#include <cmath>
double s_calculation(double x, double y, double z)
{
    double S;
    S = z + M_PI*((pow((2*z + 1), 2) - sqrt(abs(y - 0.5*z))/sqrt(cos(z + y*z)+ pow(x, 2))));
    return S;
}

#endif // MODULESVASYLENKO_H_INCLUDED
