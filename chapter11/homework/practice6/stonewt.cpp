#include "stonewt.h"

Stonewt::Stonewt(double lbs){
    ty = pou;
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs){
    ty = pou;
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt(){
    ty = pou;
    stone = pds_left = pounds = 0;
}

Stonewt::~Stonewt(){

}

Stonewt Stonewt::operator+(const Stonewt& s) const{
    Stonewt ret(pounds + s.pounds);
    return ret;
}

Stonewt Stonewt::operator-(const Stonewt& s) const{
    Stonewt ret(pounds - s.pounds);
    return ret;
}
Stonewt Stonewt::operator*(int k) const{
    Stonewt ret(pounds * k);
    return ret;
}

std::ostream& operator<<(std::ostream &os, const Stonewt &s){
    if(s.ty == Stonewt::s_p){
        os << "stone: " << s.stone << ", " << "pds_left: " << s.pds_left;
    }else{
        os << "pounds: " << s.pounds;
    }
    return os;
}

Stonewt operator*(int k, const Stonewt& s){
    return s * k;
}

bool Stonewt::operator<(const Stonewt &s) const{
    return pounds < s.pounds;
}

bool Stonewt::operator>(const Stonewt &s) const{
    return pounds > s.pounds;
}

bool Stonewt::operator==(const Stonewt &s) const{
    return pounds == s.pounds;
}