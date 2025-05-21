#include <iostream>

struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volumn;
};

void show(const box b){
    std::cout << "maker: " << b.maker  << ", "
              << "height: " << b.height << ", "
              << "length: " << b.length << ", "
              << "volumn: " << b.volumn << std::endl;
}

void calculateVolumn(box *b){
    (*b).volumn = (*b).height * (*b).length * (*b).width;
}

int main(){
    box b = {"name1", 23, 43, 45, 0};
    calculateVolumn(&b);
    show(b);
}