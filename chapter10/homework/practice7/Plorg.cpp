#include "Plorg.h"

Plorg::Plorg(const char *na, int c){
    strcpy(name, na);
    CI = c;
}

void Plorg::setCI(int c){
    CI = c;
}

void Plorg::show(){
    std::cout << "name: " << name << std::endl;
    std::cout << "CI: " << CI << std::endl;
}