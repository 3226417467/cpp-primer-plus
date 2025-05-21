#include <iostream>
#include <cstring>

struct CandyBar{
    std::string name;
    float weight;
    int cal;
};

void setCandyBar(CandyBar &c, std::string n = "Millennium Munch", float w = 2.85, int ca = 350) {
    c.name = n;
    c.weight = w;
    c.cal = ca;
}   

void print(const CandyBar& c){
    std::cout << c.name << ", " << c.weight << ", " << c.cal << std::endl;
}

int main(){
    CandyBar c;
    setCandyBar(c);
    print(c);
    setCandyBar(c, "hello", 3.1, 333);
    print(c);
}