#ifndef STOCK_H
#define STOCK_H
#include <string>
#include <iostream>

class Stock{
private:
    const static int num = 10;
    char * company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
    Stock();
    Stock(const std::string &co, long n = 0, double pr = 0.0);
    ~Stock();
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    const Stock & topval(const Stock & s) const;

    friend std::ostream& operator<<(std::ostream &os, const Stock & s);
};

#endif