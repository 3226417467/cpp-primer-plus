#include <iostream>

template <typename T>
T max(T arr[]){
    T max = arr[0];
    for(int i = 1; i<5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int a[5] = {3, 6, 78, 6, 45};
    double b[5] = {3.0, 2.9, 8.0, 7.8, 0};
    std::cout << max(a) << std::endl;
    std::cout << max(b) << std::endl;
    return 0;
}