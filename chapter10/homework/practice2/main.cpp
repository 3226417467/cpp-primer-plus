#include "Person.h"

int main(){
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "sam");
    one.Show();
    one.FormalShow();
    two.Show();
    two.FormalShow();
    three.Show();
    three.FormalShow();
    return 0;
}