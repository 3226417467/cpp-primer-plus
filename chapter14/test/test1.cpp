#include <iostream>

template <typename T>
class Stack{

};

// 正常的T只能是一个普通的类型，如果这里的T可以变成一个模板
template <template <typename T1> class T>
class Crab{
private: 
    T<int> s;
    T<float> f;
    // T s;
public:
    Crab(){}
    void push(int i){
        s.push(i);
    }
};

int main(){
    Crab<Stack> c;
    // Crab<Stack<int>> c;
}