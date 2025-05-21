#include <cmath>
#include "vector.h"
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;


namespace VECTOR{

    const double Rad_to_deg = 45.0;

    Vector::Vector(){
        x = y = 0.0;
    }

    Vector::Vector(double n1, double n2, Mode form){
        if(form == RECT){
            x = n1;
            y = n2;
        }else if(form == POL){
            double mag = n1;
            double ang = n2 / Rad_to_deg;
            x = mag * cos(ang);
            y = mag * sin(ang);
        }
        
    }

    void Vector::reset(double n1, double n2, Mode form){
        if(form == RECT){
            x = n1;
            y = n2;
        }else if(form == POL){
            double mag = n1;
            double ang = n2 / Rad_to_deg;
            x = mag * cos(ang);
            y = mag * sin(ang);
        }
    }

    Vector::~Vector(){

    }

    Vector Vector::operator+(const Vector & b) const{
        return Vector(x + b.x, y + b.y);
    }

    Vector Vector::operator-(const Vector & b) const{
        return Vector(x - b.x, y - b.y);
    }

    Vector Vector::operator-() const{
        return Vector(-x, -y);
    }

    Vector Vector::operator*(double n) const{
        return Vector(n * x, n * y);
    }
    
    Vector operator*(double n, const Vector &a){
        return a * n;
    }

    std::ostream & operator<<(std::ostream & os, const Vector & v){
        if(v.mode == Vector::RECT){
            os << "(x,y) = (" << v.x <<  ", " << v.y << ")";
        }else if(v.mode == Vector::POL){
            os << "(m,a) = (" << v.magval() << "," << v.angval() * Rad_to_deg << ")";
        }
        return os;
    }
}

