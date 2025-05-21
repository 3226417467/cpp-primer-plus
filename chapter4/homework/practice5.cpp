#include <iostream>

struct CandyBar{
    std::string brand;
    float weight;
    int calorie;
};

void show(const CandyBar& c){
    std::cout << "brand: " << c.brand << std::endl;
    std::cout << "weight: " << c.weight << std::endl;
    std::cout << "calorie: " << c.calorie << std::endl;
}

int main(){
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    show(snack);
}