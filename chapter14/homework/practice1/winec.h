#ifndef WINEC_H
#define WINEC_H

#include <string>
#include <iostream>
#include <valarray>

class Wine{
private:
    std::string name;
    std::pair<std::valarray<int>, std::valarray<int>> yearAndNum;
    int num;
public:
    Wine(const char * l, int y, const int yr[], const int bot[]);
    Wine(const char * l, int y);
    void GetBottles();
    std::string& Label();
    int sum();
    void Show();
};

#endif