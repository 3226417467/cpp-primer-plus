#include <iostream>

long int func(int n){
    if(n == 0 || n == 1) return 1;
    return n * func(n-1);
}

int main(){
    int n;
    while(std::cin >> n){
        std::cout << func(n) << std::endl; 
    }
    return 0;
}