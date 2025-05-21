#include "complex0.h"

complex::complex(int r, int i){
    real = r;
    imag = i;
}

complex complex::operator+(const complex &c) const{
    return complex(real + c.real, imag + c.imag);
}

complex complex::operator-(const complex &c) const{
    return complex(real - c.real, imag - c.imag);
}

complex complex::operator*(const complex &c) const{
    return complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
}

complex complex::operator*(int k) const{
    return complex(k * real, k * imag);
}

complex complex::operator~() const{
    return complex(real, -imag);
}

std::ostream& operator<<(std::ostream &os,const complex &c){
    os << "(" << c.real << "," << c.imag << "i)";
    return os;
}

std::istream& operator>>(std::istream &in, complex &c){
    std::cout << "real: ";
    in >> c.real;
    std::cout << "imaginary: ";
    in >> c.imag;
    return in;
}