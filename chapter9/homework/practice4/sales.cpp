#include <iostream>
#include <limits>
#include "sales.h"

namespace SALES{

    void setSales(Sales &s, const double ar[], int n){
        double sum = ar[0];
        double max = ar[0];
        double min = ar[0];
        s.sales[0] = ar[0];
        for(int i=1; i<n; i++){
            s.sales[i] = ar[i];
            sum += ar[i];
            if(ar[i] > max) max = ar[i];
            if(ar[i] < min) min = ar[i];
        }
        s.max = max;
        s.min = min;
        s.average = sum / n;
    }

    void setSales(Sales &s){
        double max = std::numeric_limits<double>::min(); 
        double min = std::numeric_limits<double>::max(); 
        int sum = 0;
        for(int i=0; i<QUARTERS; i++){
            std::cin >> s.sales[i];
            sum += s.sales[i];
            if(s.sales[i] > max) max = s.sales[i];
            if(s.sales[i] < min) min = s.sales[i];
        }
        s.max = max;
        s.min = min;
        s.average = sum / QUARTERS;
    }

    const void showSales(const Sales & s){
        std::cout << "sales: " << std::endl;
        for(int i=0; i<QUARTERS; i++){
            std::cout << s.sales[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "average: " << s.average << std::endl;
        std::cout << "max: " << s.max <<  std::endl;
        std::cout << "min: " << s.min << std::endl;
    }
}