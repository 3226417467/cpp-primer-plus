#include "Sales.h"

int main(){
    double ar[] = {1, 5, 4, 34};
    SALES::Sales s(ar, 4);
    s.showSales();
    SALES::Sales s1(s);
    s1.showSales();
}