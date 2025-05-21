#include "Sales.h"

namespace SALES{
    Sales::Sales(const double ar[], int n){
        double ma = ar[0];
        double mi = ar[0];
        double sum = 0;
        sales[0] = ar[0];
        for(int i=1; i<n; i++){
            sales[i] = ar[i];
            sum += ar[i];
            if(ar[i] > ma) ma = ar[i];
            if(ar[i] < mi) mi = ar[i];
        }
        max = ma;
        min = mi;
        average = sum / n;
    }

    Sales::Sales(const Sales& s){
        for(int i=0; i<QUARTERS; i++){
            sales[i] = s.sales[i];
        }
        average = s.average;
        max = s.max;
        min = s.min;
    }

    void Sales::showSales(){
        std::cout << "sales: " << std::endl;
        for(int i=0; i<QUARTERS; i++){
            std::cout << sales[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "max: " << max << std::endl;
        std::cout << "min: " << min << std::endl;
        std::cout << "average: " << average << std::endl;
    }
}