#ifndef PLORG_H
#define PLORG_H

#include <iostream>
#include <cstring>

class Plorg{
private:
    const static int LEN = 19;
    char name[LEN];
    int CI;
public:
    Plorg(const char *na = "Plorga", int c = 50);
    void setCI(int c);
    void show();
};

#endif