#include "cstack.h"
#include <cstring>

int main(){
    customer c1;
    strcpy(c1.fullname, "name1");
    c1.payment = 20;
    customer c2;
    strcpy(c2.fullname, "name2");
    c2.payment = 30;
    customer c3;
    strcpy(c3.fullname, "name3");
    c3.payment = 10;

    cstack cst;
    cst.input(c1);
    cst.input(c2);
    cst.input(c3);

    cst.output();
    cst.output();

    std::cout << cst.getSum() << std::endl;
    return 0;
}