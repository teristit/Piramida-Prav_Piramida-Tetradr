#pragma once
#include <Piramida.h>
#include <iostream>
#include <cmath>

using namespace std;
using namespace figure;
template <typename T>
class Tetradr : public Piramida <T>
{
public:
    using Piramida::Piramida;
    void setr1(T a) override
    {
        Piramida::setr1(a);
    }
    void setr2(T a) override
    {
        Piramida::setr2(a);
    }
    void setr3(T a) override
    {
        Piramida::setr3(a);
    }
    void set(T a)
    {
        rib1 = a;
        rib2 = a;
        rib3 = a;
        base1 = a;
        base2 = a;
        base3 = a;
    }
    static T Tetradr_area(T a, T b, T c)
    {
        double p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
    T area() override
    {
        return Tetradr_area(base1, base2, base3) + Tetradr_area(base3, rib1, rib2) + Tetradr_area(base2, rib1, rib3) + Tetradr_area(base1, rib2, rib3);
    }
    T volume()
    {
        return ((pow(rib1, 3) * sqrt(2)) / 12);
    }
    T side_surface()
    {
        return Tetradr_area(base3, rib1, rib2) + Tetradr_area(base2, rib1, rib3) + Tetradr_area(base1, rib2, rib3);
    }
};
