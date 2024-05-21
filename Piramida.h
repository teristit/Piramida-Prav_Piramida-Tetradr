#pragma once
#include <iostream>
namespace figure {
    template <typename T>
    class Piramida {
    protected:
        T rib1, rib2, rib3, base1, base2, base3;
    public:
        Piramida() {}
        Piramida(T a, T b, T c, T d, T e, T f)
            :rib1(a), rib2(b), rib3(c), base1(d), base2(e), base3(f) {}
        ~Piramida() {
            std::cout << "Deleted";
        }
        void show() {
            std::cout << rib1 << " " << rib2 << " " << rib3 << " " << base1 << " " << base2 << " " << base3 << " \n";
        }
        virtual void set(T a, T b, T c, T d, T e, T f) {
            if ((!triaglearea(d, e, f) + !triaglearea(f, a, b) + !triaglearea(e, a, c) + !triaglearea(d, b, c)) == 0) {
                rib1 = a;
                rib2 = b;
                rib3 = c;
                base1 = d;
                base2 = e;
                base3 = f;
            }
            else
                std::cout << "Неправильный ввод";
        }
        virtual void get(T& a, T& b, T& c, T& d, T& e, T& f) {
            a = rib1;
            b = rib2;
            c = rib3;
            d = base1;
            e = base2;
            f = base3;
        }
        virtual void setr1(T a) {
            if (!triaglearea(base3, a, rib2) + !triaglearea(base2, a, rib3) == 0)
            rib1 = a;
            else 
                std::cout << "Неправильный ввод";
        }
        virtual void setr2(T a) {
            if (!triaglearea(base2, rib1, a) + !triaglearea(base1, a, rib3) == 0)
                rib2 = a;
            else
                std::cout << "Неправильный ввод";
        }
        virtual void setr3(T a) {
            if (!triaglearea(base3, rib1, a) + !triaglearea(base1, rib2, a) == 0)
                rib3 = a;
            else
                std::cout << "Неправильный ввод";
        }
        virtual void setb1(T a) {
            if (!triaglearea(base2, base3, a) + !triaglearea(rib3, rib2, a) == 0)
                base1 = a;
            else
                std::cout << "Неправильный ввод";
        }
        virtual void setb2(T a) {
            if (!triaglearea(rip1, rip3, a) + !triaglearea(base1, base3, a) == 0)
                base2 = a;
            else
                std::cout << "Неправильный ввод";
        }
        virtual void setb3(T a) {
            if (!triaglearea(base2, base1, a) + !triaglearea(rib1, rib2, a) == 0)
                base3 = a;
            else
                std::cout << "Неправильный ввод";
        }

        double triaglearea(T a, T b, T c) {
            if (a + b > c && a + c > b && b + c > a) {
                T p = (a + b + c) / 2;
                return sqrt(abs(p * (p - a) * (p - b) * (p - c)));
            }
            else
                return 0;
        }
        virtual T area() {
            return triaglearea(base1, base2, base3) + triaglearea(base3, rib1, rib2) + triaglearea(base2, rib1, rib3) + triaglearea(base1, rib2, rib3);
        }
    };
}
