#ifndef VINTAGEPORT_H
#define VINTAGEPORT_H
#include "port.h"

class VintagePort : public Port{
private:
    char * nickname;
    int year;
public:
    VintagePort();
    VintagePort(const char * br, int b, const char * nn, int y);
    VintagePort(const VintagePort & vp);
    ~VintagePort() { delete [] nickname; }
    VintagePort & operator=(const VintagePort & vp);
    void show() const;
    friend ostream & operator<<(ostream & os, const VintagePort & vp);
};

#endif