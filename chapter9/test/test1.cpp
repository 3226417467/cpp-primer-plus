#include <iostream>
#include <new>

char buff[300];

int main(){
    int *p = new (buff)int[20];
    for(int i=0; i<20; i++){
        p[i] = i;
    }

    for(int i=0; i<20; i++){
        std::cout << p[i] << " ";
    }
    std::cout << std::endl;
}