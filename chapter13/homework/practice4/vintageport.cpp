#include "vintageport.h"
#include "cstring"

VintagePort::VintagePort(){

}

VintagePort::VintagePort(const char * br, int b, const char * nn, int y) : Port(br, "sty", b){
    nickname = new char[20];
    strcpy(nickname, nn);
    year = y;
}

VintagePort::VintagePort(const VintagePort & vp) : Port(vp){
    int n = strlen(vp.nickname);
    nickname = new char[n+1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort & vp){
    Port::operator=(vp);
    int n = strlen(vp.nickname);
    nickname = new char[n+1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
    return *this;
}

ostream & operator<<(ostream & os, const VintagePort & vp){
    os << (Port&)vp;
    cout << vp.nickname << ", " << vp.year << endl;
    return os;  
}

void VintagePort::show() const {
    Port::show();
    cout << "nickname: " << nickname << endl;
    cout << "year: " << year << endl;
}