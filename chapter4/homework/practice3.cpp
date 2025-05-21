#include <iostream>
#include <cstring>

/*
    这里注意什么时候需要使用一级指针，什么时候需要使用二级指针：
    1、如果我们需要改变的是指针指向的内存的值，那么使用一级指针就可以，因为实参和实参的拷贝指向的是同一块内存
    两者存储的内容是一样的，都可以改变那块内存的值，同样通过这两个指针都可以访问这个值。
    2、如果我们需要改变指针的指向，那么需要使用二级指针，或者使用指针的引用。
    比如下面这个例子，传入的形参其实是一个野指针，传给形参之后得到的是实参的一个拷贝，我们用这个拷贝的指针开辟一段
    内存，这个指针就指向了另一个空间，那么原始指针和这个指针就指向两块内存，自然通过原始指针不能访问这个新创建
    的内存了。
*/

void test(char* &name){
    char first_name[20];
    char last_name[20];
    std::cout << "Enter your first name: ";
    std::cin.getline(first_name, 20);
    std::cout << "Enter your last name: ";
    std::cin.getline(last_name, 20);
    int len = strlen(first_name) + strlen(last_name) + 3;
    name = new char[len];
    strcpy(name, last_name);
    char* p = name + strlen(last_name);
    p[0] = ',';
    p[1] = ' ';
    p += 2;
    strcpy(p, first_name);
    p += strlen(first_name);
    p[0] = '\0';
    // std::cout << name << std::endl;
}

int main(){
    char* name;
    test(name);
    std::cout << "Here's the information in a single string: " << name << std::endl;
    delete name;
}