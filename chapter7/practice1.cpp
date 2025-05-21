#include <iostream>

double avg(int x, int y){
    double ret = 2.0 * x * y / (x + y);
    return ret;
} 

int main(){
    int x, y;
    while(std::cin >> x >> y){
        if(x == 0 || y == 0){
            return 0;
        }
        double ret = avg(x, y);
        std::cout << "result: " << ret << std::endl;
    }
    return 0;
}