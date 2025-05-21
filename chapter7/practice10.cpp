#include <iostream>

typedef double (*func)(double, double);

double add(double x, double y){
    return x + y;
}

double sub(double x, double y){
    return x - y;
}

double mul(double x, double y){
    return x * y;
}

double div(double x, double y){
    return x / y;
}

double calculate(double x, double y, func f){
    return f(x, y);
}

int main(){
    func f[4] = {add, sub, mul, div};
    int x, y;
    std::cin >> x >> y;
    for(int i=0; i<4; i++){
        double r = calculate(x, y, f[i]);
        std::cout << r << std::endl;
    }
    return 0;
}



