#include "winec.h"

Wine::Wine(const char * l, int y, const int yr[], const int bot[]) : 
    name(l), num(y), yearAndNum{std::valarray<int>(yr, y), std::valarray<int>(bot, y)}
{}   

Wine::Wine(const char * l, int y) : 
    name(l), num(y),yearAndNum{std::valarray<int>(0, y), std::valarray<int>(0, y)} 
{}

void Wine::GetBottles(){
    std::cout << "Enter Gully Wash data for " << num << "year(s):" << std::endl;
    for(int i=0; i<num; i++){
        std::cout << "Enter year: ";
        std::cin >> yearAndNum.first[i];
        std::cout << "Enter bottles for that year: ";
        std::cin >> yearAndNum.second[i];
    }
}

std::string& Wine::Label(){
    return name;
}

int Wine::sum(){
    int ret = 0;
    for(int i=0; i<num; i++){
        ret += yearAndNum.second[i];
    }
    return ret;
}

void Wine::Show(){
    std::cout << "Wine: " << name << std::endl;
    std::cout << "Year" << " " << "Bottles" << std::endl;
    for(int i=0; i<num; i++){
        std::cout << yearAndNum.first[i] << " " << yearAndNum.second[i] << std::endl;
    }
}