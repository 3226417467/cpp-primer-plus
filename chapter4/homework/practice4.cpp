#include <iostream>
#include <string>

void test(std::string &s){
    std::string first_name;
    std::string last_name;
    std::cout << "Enter your first name: ";
    getline(std::cin, first_name);
    std::cout << "Enter your last name: ";
    getline(std::cin, last_name);
    s = last_name + ", " + first_name;
}

int main(){
    std::string s;
    test(s);
    std::cout << s << std::endl;
}