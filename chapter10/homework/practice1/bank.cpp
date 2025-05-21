#include "bank.h"

void bank::init(std::string name, std::string account, double money){
    m_name = name;
    m_account = account;
    m_money = money;
}
void bank::show(){
    std::cout << "name: " << m_name << std::endl;
    std::cout << "account: " << m_account << std::endl;
    std::cout << "money: " << m_money << std::endl;
}

void bank::addAccount(double acc){
    m_money += acc;
}

void bank::subAccount(double acc){
    m_money -= acc;
}

