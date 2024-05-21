#pragma once
#include <iostream>
namespace figure {
    class Piramida {
    protected:
        double rib1, rib2, rib3, base1, base2, base3;
    public:
        Piramida() {}
        Piramida(double a, double b, double c, double d, double e, double f)
            :rib1(a), rib2(b), rib3(c), base1(d), base2(e), base3(f) {}
        ~Piramida() {
            std::cout << "Deleted";
        }
        void show() {
            std::cout << rib1 << " " << rib2 << " " << rib3 << " " << base1 << " " << base2 << " " << base3 << " \n";
        }
        virtual void set(double a, double b, double c, double d, double e, double f) {
            rib1 = a;
            rib2 = b;
            rib3 = c;
            base1 = d;
            base2 = e;
            base3 = f;
        }
        virtual void get(double& a, double& b, double& c, double& d, double& e, double& f) {
            a = rib1;
            b = rib2;
            c = rib3;
            d = base1;
            e = base2;
            f = base3;
        }
        virtual void setr1(double a) {
            rib1 = a;
        }
        virtual void setr2(double a) {
            rib2 = a;
        }
        virtual void setr3(double a) {
            rib3 = a;
        }
        virtual void setb1(double a) {
            base1 = a;
        }
        virtual void setb2(double a) {
            base2 = a;
        }
        virtual void setb3(double a) {
            base3 = a;
        }

        static double triaglearea(double a, double b, double c) {
            double p = (a + b + c) / 2;
            return sqrt(abs(p * (p - a) * (p - b) * (p - c)));
        }
        virtual double area() {
            return triaglearea(base1, base2, base3) + triaglearea(base3, rib1, rib2) + triaglearea(base2, rib1, rib3) + triaglearea(base1, rib2, rib3);
        }
    };
}
