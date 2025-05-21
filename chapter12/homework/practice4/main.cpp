#include <iostream>
#include "stack.h"

int main(){
    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    Stack s2(s1);
    Item i;
    s1.pop(i); std::cout << i << std::endl;
    s1.pop(i); std::cout << i << std::endl;
    s1.pop(i); std::cout << i << std::endl;

    s2.pop(i); std::cout << i << std::endl;
    s2.pop(i); std::cout << i << std::endl;
    s2.pop(i); std::cout << i << std::endl;
    s2.pop(i); std::cout << i << std::endl;
    s2.pop(i); std::cout << i << std::endl;
    s2.pop(i); 

    s2 = s1;
    // std::cout << "---" << s2.isempty() << std::endl;
    s2.pop(i); std::cout << i << std::endl;
    s2.pop(i); std::cout << i << std::endl;

    return 0;
}