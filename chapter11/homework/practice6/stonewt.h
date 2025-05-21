#ifndef STONEWT_H
#define STONEWT_H

#include <iostream>

class Stonewt{
public:
    enum type {s_p, pou};
private:
    type ty;
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
public:
    void setType(type t = pou){
        ty = t;
    }
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    friend std::ostream& operator<<(std::ostream &os, const Stonewt &s);
    Stonewt operator+(const Stonewt& s) const;
    Stonewt operator-(const Stonewt& s) const;
    Stonewt operator*(int k) const;
    bool operator<(const Stonewt &s) const;
    bool operator>(const Stonewt &s) const;
    bool operator==(const Stonewt &s) const;
    friend Stonewt operator*(int k, const Stonewt& s);
};

#endif
