#include "cstack.h"
 
void cstack::input(customer c){
    s.push(c);
}

void cstack::output(){
    sum += s.top().payment;
    s.pop();
}