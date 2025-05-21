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
    CandyBar *c = new CandyBar[3];
    c[0] = {"brand1", 12.0, 20};
    c[1] = {"brand2", 13.0, 21};
    c[2] = {"brand3", 14.0, 22};
    for(int i=0; i<3; i++){
        show(c[i]);
    }
}