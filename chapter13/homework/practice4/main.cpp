#include <iostream>
#include "vintageport.h"

int main(){
    Port *p = new VintagePort("Gallo", 23, "name", 11);
    p->show(); 
    cout << *p;

    *p+=3;
    *p-=1;
    cout << p->BottleCount() << endl;
    p->show();

    VintagePort p1 = VintagePort("Gallo", 23, "name", 100);
    VintagePort p2(p1);
    p2.show();
    return 0;
}