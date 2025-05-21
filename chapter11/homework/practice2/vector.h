#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
#include <cmath>
using std::sqrt;
using std::atan2;

namespace VECTOR{
    class Vector{
    public:
        enum Mode {RECT, POL};
    private:
        double x;
        double y;
        Mode mode;
        void set_x();
        void set_y();
    public:
        Vector();
        Vector(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        ~Vector();
        double xval() const {return x;}
        double yval() const {return y;}
        double magval() const {
            return sqrt(x * x + y * y);
        }

        double angval() const {
            if(x == 0.0 && y == 0.0)
                return 0.0;
            else    
                return atan2(y, x);
        }

        Vector operator+(const Vector & b) const;
        Vector operator-(const Vector & b) const;
        Vector operator-() const;
        Vector operator*(double n) const;

        void polor_mode(){mode = POL;}
        void rect_mode(){mode = RECT;}

        friend Vector operator*(double n, const Vector &a);
        friend std::ostream & operator<<(std::ostream & os, const Vector & v);
    };
}

#endif