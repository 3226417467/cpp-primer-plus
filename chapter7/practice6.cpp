#include <iostream>

const int ARRAY_SIZE = 10;

int Fill_array(double arr[], int n){
    int i=0;
    while(i<n && std::cin >> arr[i]) i++;
    return i;
}

void Show_array(double arr[], int n){
    for(int i=0; i<n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void Reverse_array(double arr[], int n){
    for(int i=0, j=n-1; i<j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main(){
    double arr[ARRAY_SIZE];
    int n = Fill_array(arr, 5);
    Show_array(arr, n);
    Reverse_array(arr, n);
    Show_array(arr, n);
    Reverse_array(arr+1, n-2);
    Show_array(arr, n);
}