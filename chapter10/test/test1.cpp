#include <iostream>

enum class COLOR {RED, BLUE, YELLOW};

int main(){
    std::cout << int(COLOR::BLUE) << std::endl;
}