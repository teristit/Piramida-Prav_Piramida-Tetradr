#include "Piramida.h"
class Prav_Piramida:public Piramida
{
private:
    double triangle_area(double a, double b, double c);
public:
    void set_ribs(double);
    void set_bases(double);
    double area();
    double side_area();
    void set(double a, double b);
};

double Prav_Piramida::triangle_area(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

void Prav_Piramida::set(double a, double b) {
    rib1 = a;
    rib2 = a;
    rib3 = a;
    base1 = b;
    base2 = b;
    base3 = b;
}

void Prav_Piramida::set_ribs(double a) {
    rib1 = a;
    rib2 = a;
    rib3 = a;
}

void Prav_Piramida::set_bases(double b) {
    base1 = b;
    base2 = b;
    base3 = b;
}

double Prav_Piramida::area() { 
    return triangle_area(base1, base2, base3) + triangle_area(base1, rib1, rib2) * 3;
}

double Prav_Piramida::side_area() {
    return triangle_area(base1, rib1, rib2) * 3;
}
