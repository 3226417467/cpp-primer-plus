#include <iostream>

int ARR_SIZE = 10;

double * fill_array(double* begin, double* end){
    double* p = begin;
    while(std::cin >> *p && begin <= end){
        p++;
    }
    p--;
    return p;
}

void show_array(double* begin, double* end){
    for(double*p = begin; p<=end; p++){
        std::cout << *p << " ";
    }
    std::cout << std::endl;
}

void revalue(double r, double* begin, double* end){
    for(double* p = begin; p<=end; p++){
        *p = r * *p;
    }
}

int main(){
    double arr[ARR_SIZE];
    double* end = fill_array(arr, arr+ARR_SIZE-1);
    show_array(arr, end);
    revalue(2.0, arr, end);
    show_array(arr, end);
}