#include "move.h"

Move::Move(double a, double b){
    x = a;
    y = b;
}

void Move::showmove() const{
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
}

Move Move::add(const Move &m){
    x += m.x;
    y += m.y;
    return *this;
}

void Move::reset(double a, double b){
    x = a;
    y = b;
}