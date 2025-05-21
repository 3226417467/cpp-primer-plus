#include "port.h"
#include <cstring>

Port::Port(const char * br, const char * st, int b){
    int n = strlen(br);
    brand = new char[n+1];
    strcpy(brand, br);
    brand[n] = '\0';
    strcpy(style, st);
    bottles = b;
}

Port::Port(const Port & p){
    int n = strlen(p.brand);
    brand = new char[n+1];
    strcpy(brand, p.brand);
    brand[n] = '\0';
    strcpy(style, p.style);
    bottles = p.bottles;
}

Port & Port::operator=(const Port & p){
    int n = strlen(p.brand);
    brand = new char[n+1];
    strcpy(brand, p.brand);
    brand[n] = '\0';
    strcpy(style, p.style);
    bottles = p.bottles;
    return *this;
}

Port & Port::operator+=(int b){
    bottles += b;
    return *this;
}

Port & Port::operator-=(int b){
    bottles -= b;
    return *this;
}

void Port::show() const{
    cout << "Brand: " << brand << endl;
    cout << "Kind: " << style << endl;
    cout << "Bottles: " << bottles << endl;
}

ostream & operator<<(ostream & os, const Port & p){
    cout << p.brand << ", " << p.style << ", " << p.bottles << endl;
    return os;
}