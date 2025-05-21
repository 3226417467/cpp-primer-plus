#include "golf.h"
#include <cstring>

golf::golf(const char * name, int hc){
    strcpy(fullname, name);
    handicap = hc;
}

golf::golf(){
    std::cout << "Please input fullname: " << std::endl;
    std::cin >> fullname;
    std::cout << "Please input handicap: " << std::endl;
    std::cin >> handicap;
}

void golf::setHandicap(int hc){
    handicap = hc;
}

void golf::showgolf(){
    std::cout << "fullname: " << fullname << std::endl;
    std::cout << "handicap: " << handicap << std::endl;
}