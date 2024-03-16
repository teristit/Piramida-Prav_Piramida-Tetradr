#pragma once

#include <iostream>

using namespace std;


class Tetradr : public Piramida
{
public:
    using Piramida::Piramida;
    void setr1(double a) override
    {
        Piramida::setr1(a);
    }
    void setr2(double a) override
    {
        Piramida::setr2(a);
    }
    void setr3(double a) override
    {
        Piramida::setr3(a);
    }
    static double Tetradr_area(double a, double b, double c)
    {
        double p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
    double area() override
    {
        return Tetradrarea(base1, base2, base3) + Tetradrarea(base3, rib1, rib2) + Tetradrarea(base2, rib1, rib3) + Tetradrarea(base1, rib2, rib3);
    }
    double volume()
    {
        return ((pow(rib1, 3) * sqrt(2)) / 12);
    }
    double side_surface()
    {
        return Tetradrarea(base3, rib1, rib2) + Tetradrarea(base2, rib1, rib3) + Tetradrarea(base1, rib2, rib3);
    }
};















