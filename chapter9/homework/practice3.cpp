#include <iostream>
#include <cstring>

struct chaff{
    char dross[20];
    int slag;
};

void setChaff(chaff &f, const char* d, int s){
    strcpy(f.dross, d);
    f.slag = s;
}

void show(chaff *c, int n){
    for(int i=0; i<n; i++){
        std::cout << c[i].dross << " " << c[i].slag << std::endl;
    }
}

char* c[200];

int main(){
    chaff* f1 = new (c) chaff[2];
    setChaff(f1[0], "hello", 20);
    setChaff(f1[1], "nihao", 30);
    show(f1, 2);

    char *c2 = new char[200];
    chaff * f2 = new (c2) chaff[2];
    setChaff(f2[0], "hello", 20);
    setChaff(f2[1], "nihao", 30);
    show(f1, 2);
    delete f2;
    return 0;
}
