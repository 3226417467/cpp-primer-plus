#include <iostream>

struct company{
    char name[20];
    float diameter;
    float weight;
};

void display(const company &c){
    std::cout << "name: " << c.name << ","
    << "diameter: " << c.diameter << "," 
    << "weight: " << c.weight << std::endl;
}

int main(){
    company c;
    std::cin.getline(c.name, 20);
    std::cin >> c.diameter >> c.weight;
    display(c);
}