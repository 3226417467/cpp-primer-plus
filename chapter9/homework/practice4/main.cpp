#include "sales.h"

int main(){
    SALES::Sales s;
    SALES::setSales(s);
    SALES::showSales(s);

    using namespace SALES;
    double ar[QUARTERS] = {2.1, 3.2, 9.8, 7.3};
    Sales s1;
    setSales(s1, ar, QUARTERS);
    showSales(s1);
}