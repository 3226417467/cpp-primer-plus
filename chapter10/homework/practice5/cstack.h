#include <iostream>
#include <stack>

struct customer{
    char fullname[35];
    double payment;
};

class cstack{
private:
    std::stack<customer> s;
    double sum;
public:
    void input(customer c);
    void output();
    double getSum(){
        return sum;
    }
};