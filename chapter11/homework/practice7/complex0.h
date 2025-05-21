#ifndef COMPLEX0_H
#define COMPLEX0_H

#include <iostream>

class complex{
private:
    int real;
    int imag;
public:
    complex(){
        real = imag = 0;
    }
    complex(int r, int i);
    complex operator+(const complex &c) const;
    complex operator-(const complex &c) const;
    complex operator*(const complex &c) const;
    complex operator*(int k) const;
    friend complex operator*(int k, complex &c){
        return c * k;
    }
    complex operator~() const;
    friend std::ostream& operator<<(std::ostream &os,const complex &c);
    friend std::istream& operator>>(std::istream &in, complex &c);
    ~complex(){}
};

#endif