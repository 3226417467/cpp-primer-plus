#include "List.h"

void print(double &d){
    std::cout << d << std::endl;
}

int main(){

    List<double> l;
    std::cout << "空：" << l.isEmpty() << std::endl;
    l.add(3.14);
    l.add(4.21);
    l.add(9.01);
    std::cout << "空：" << l.isEmpty() << std::endl;
    l.visit(print);
    return 0;
}   
