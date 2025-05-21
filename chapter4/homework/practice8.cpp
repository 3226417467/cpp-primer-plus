#include <iostream>

/*
    这道题需要注意的是cin和cin.getline的区别
    其中cin遇到空格、回车、制表符会结束输入，cin.getline会读取一行的内容
    而且cin会跳过上面三种符号，但是cin.getline不同，
    因为std::cin >> p->diameter;会输入一个整数和一个回车，这个回车会留在输入缓冲区中，那么cin.getline
    直接读取这个换行结束，因此需要使用cin.get，如果下面使用的是cin就不会出现这个问题，因为他会跳过。
    但是这个输入的字符串可能中间包含空格，用cin做不到输入带有空格的字符串，所以只能使用cin.getline
*/

struct company{
    char name[20];
    float diameter;
    float weight;
};

void display(const company &c){
    std::cout << "name: " << c.name << ","
    << "diameter: " << c.diameter << "," 
    << "weight: " << c.weight << std::endl;
}

int main(){
    company *p = new company;
    std::cin >> p->diameter;
    std::cin.get();             // 注意
    std::cin.getline(p->name, 20);
    std::cin >> p->weight;
    display(*p);
}