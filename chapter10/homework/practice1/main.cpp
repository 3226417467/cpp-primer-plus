#include <iostream>
#include "bank.h"

int main(){
    bank b;
    b.init("sunchi", "1122233", 100000000);
    b.show();
    std::cout << "---------------------" << std::endl;
    b.addAccount(300000);
    b.show();
    std::cout << "---------------------" << std::endl;
    b.subAccount(9.9);
    b.show();
    std::cout << "---------------------" << std::endl;
}