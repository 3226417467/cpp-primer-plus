#ifndef LIST_H
#define LIST_H

#include <iostream>

const int LEN = 10;

template <typename T>
class List{
private:
    T arr[LEN];
    int n;
public:
    List(){ n = 0; }
    void add(T t){
        arr[n] = t;
        n++;
    }

    bool isEmpty(){
        return n == 0;
    }

    bool isFull(){
        return n == LEN;
    }

    void visit(void(* pf)(T &)){
        for(int i=0; i<n; i++){
            pf(this->arr[i]);
        }
    }
};

#endif