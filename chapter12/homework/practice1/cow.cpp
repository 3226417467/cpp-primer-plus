#include "cow.h"
#include <cstring>
#include <iostream>

Cow::Cow(){
    
}

Cow::Cow(const char * nm, const char * ho, double wt){
    std::strcpy(name, nm);
    int n = strlen(ho);
    hobby = new char[n];
    std::strcpy(hobby, ho);
    weight = wt;
}

Cow::~Cow(){
    delete [] hobby;
}

Cow & Cow::operator=(const Cow & c){
    std::strcpy(name, c.name); 
    if(hobby != nullptr){
        delete [] hobby;
        int n = strlen(c.hobby);
        hobby = new char[n];
        strcpy(hobby, c.hobby);
    }
    weight = c.weight;
    return *this;
}

void Cow::ShowCow() const{
    std::cout << "name: " << name << std::endl;
    std::cout << "hobby: " << hobby << std::endl;
    std::cout << "weight: " << weight << std::endl;
}   