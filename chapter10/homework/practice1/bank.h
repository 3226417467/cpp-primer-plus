#ifndef BANK_H
#define BANK_H
#include <iostream>

class bank{
private:
    std::string m_name;
    std::string m_account;
    double m_money;
public:
    void init(std::string name, std::string account, double money);
    void show();
    void addAccount(double acc);
    void subAccount(double acc);
};
#endif