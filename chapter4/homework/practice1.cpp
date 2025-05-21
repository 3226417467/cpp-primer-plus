#include <iostream>

struct Message{
    std::string first_name;
    std::string last_name;
    char grade;
    int age;
};

void inputMessage(Message& m){
    std::cout << "What is your first name? ";
    std::getline(std::cin, m.first_name);
    std::cout << "What is your last name? ";
    std::getline(std::cin, m.last_name);
    std::cout << "What letter grade do you deserve? ";
    std::cin >> m.grade;
    m.grade += 1;
    std::cout << "What is your age? ";
    std::cin >> m.age;
}

void outputMessage(const Message& m){
    std::cout << "Name: " << m.last_name << ", " << m.first_name << std::endl;
    std::cout << "Grade: " << m.grade << std::endl;
    std::cout << "Age: " << m.age << std::endl;
}   

int main(){
    Message m;
    inputMessage(m);
    outputMessage(m);
}