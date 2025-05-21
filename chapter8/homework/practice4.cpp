#include <iostream>
using namespace std;
#include <cstring>

const int NUM = 100;

struct stringy {
    char * str;
    int ct;
};

void set(stringy &s, char *c){
    s.str = new char[NUM];
    int n = 0;
    char* p = c, *q = s.str;
    while(*p != '\0'){
        *q = *p;
        n++;
        p++;
        q++;
    }
    s.ct = n;
}

void show(const stringy &s, int num = 1){
    for(int i=0; i<num; i++){
        cout << s.str << std::endl;
    }
}

void show(const char* s, int num = 1){
    for(int i=0; i<num; i++){
        cout << s << std::endl;
    }
}

int main(){
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}   