#include <iostream>
#include <cstring>

template <typename T>
T maxn(T arr[], int n){
    if(n == 0) return 0;
    T max = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

template<>
const char* maxn(const char* c[], int n){
    if(n == 0) return 0;
    int max = strlen(c[0]);
    // 可以这么理解：数组里的每一个值都是const char*，因此数组里的指针指向的值不能改变，但是指针的指向可以改变
    const char * maxstr = c[0];
    for(int i = 1; i<n; i++){
        if(strlen(c[i]) > max){
            max = strlen(c[i]);
            maxstr = c[i];
        }
    }
    return maxstr;
}

int main(){
    int arr1[6] = {3, 4, 5, 6, 4, 8};
    double arr2[4] = {4.5, 6.9, 9.8, 3.2};
    const char* arr3[4] = {"fsdfsd", "fds", "ffffff", "fs"};
    std::cout << maxn(arr1, 6) << std::endl;
    std::cout << maxn(arr2, 4) << std::endl;
    std::cout << maxn(arr3, 4) << std::endl;
    return 0;
}