#ifndef GOLF_H
#define GOLF_H

#include <iostream>

class golf{
private:
    const static int Len = 40;
    char fullname[Len];
    int handicap;
public:
    golf(const char * name, int hc);
    golf();
    void setHandicap(int hc);
    void showgolf();
};

#endif