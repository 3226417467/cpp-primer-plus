#include <iostream>
#include <array>

int main(){
    std::array<float, 3> a;
    float sum = 0;
    for(int i=0; i<a.size(); i++){
        std::cin >> a[i];
        sum += a[i];
    }
    float avg = sum / 3;
    std::cout << "num: " << a.size() << ", " << "avg: " << avg << std::endl;
}