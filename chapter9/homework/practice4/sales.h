#ifndef SALES_H
#define SALES_H

namespace SALES{
    const int QUARTERS = 4;
    struct Sales{
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };

    void setSales(Sales &s, const double ar[], int n);

    void setSales(Sales &s);

    const void showSales(const Sales & s);
}

#endif