#include "stack.h"

Stack::Stack(int n){
    pitems = new Item[n];
    size = 0;
    top = 0;
}

Stack::Stack(const Stack & st){
    pitems = new Item[MAX];
    for(int i=0; i<st.size; i++){
        pitems[i] = st.pitems[i];
    }
    size = st.size;
    top = st.top;
}

Stack::~Stack(){
    delete [] pitems;
}

bool Stack::isempty() const{
    return size == 0;
}

bool Stack::isfull() const{
    return size == MAX;
}

bool Stack::push(const Item & item){
    if(isfull()) return false;
    pitems[top++] = item;
    size++;
    return true;
}

bool Stack::pop(Item & item){
    if(isempty()) return false;
    item = pitems[--top];
    size--;
    return true;
}

Stack & Stack::operator=(const Stack & st){
    if(this == &st) return *this;
    pitems = new Item[MAX];
    for(int i=0; i<st.size; i++){
        pitems[i] = st.pitems[i];
    }
    size = st.size;
    top = st.top;
    return *this;
}