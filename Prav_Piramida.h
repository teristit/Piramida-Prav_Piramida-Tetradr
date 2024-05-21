#pragma once
#include "Piramida.h"

using namespace figure;
template <typename T>
class Prav_Piramida :public Piramida <T>
{
private:
    T triangle_area(T a, T b, T c) {
        T p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
public:

    void set(T a, T b) {
        rib1 = a;
        rib2 = a;
        rib3 = a;
        base1 = b;
        base2 = b;
        base3 = b;
    }

    void set_ribs(T a) {
        rib1 = a;
        rib2 = a;
        rib3 = a;
    }

    void set_bases(T b) {
        base1 = b;
        base2 = b;
        base3 = b;
    }

    T area() {
        return triangle_area(base1, base2, base3) + triangle_area(base1, rib1, rib2) * 3;
    }

    T side_area() {
        return triangle_area(base1, rib1, rib2) * 3;
    }
};
