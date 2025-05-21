#include <iostream>

void func(const int &a, const int &b){
    std::cout << a << " " << b << std::endl;
}

int main(){
    int a = 10, b = 20;
    func(a, b);
    func(10, 20);
}