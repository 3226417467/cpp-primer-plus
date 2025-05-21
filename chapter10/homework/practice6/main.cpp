#include "move.h"

int main(){
    Move m(5, 4);
    m.showmove();
    Move m1(1, 2);
    m.add(m1);
    m.showmove();
}