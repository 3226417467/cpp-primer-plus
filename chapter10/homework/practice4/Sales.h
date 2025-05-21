#include <iostream>

namespace SALES{
    class Sales{
    private:
        const static int QUARTERS = 4;
        double sales[QUARTERS];
        double average;
        double max;
        double min;

    public:
        Sales(const double ar[], int n);
        Sales(const Sales& s);
        void showSales();
    };
}

