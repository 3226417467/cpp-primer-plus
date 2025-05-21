#include <iostream>

const int ARR_SIZE = 10;

int input(int arr[]){
    int i;
    // 使用cin输入的技巧
    while(std::cin >> arr[i]) i++;
    return i;
}

void output(int arr[], int num){
    for(int i=0; i<num; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

double avg(int arr[], int num){
    double sum = 0;
    for(int i=0; i<num; i++){
        sum += arr[i];
    }
    double ret = sum / num;
    return ret;
}

int main(){
    int arr[ARR_SIZE];
    int n = input(arr);
    std::cout << "n: " << n << std::endl;
    output(arr, n);
    double a = avg(arr, n);
    std::cout << "avg: " << a << std::endl;
}