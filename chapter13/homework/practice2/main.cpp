#include <iostream>
using namespace std;
#include "cdcl.h"
void Brovo(const Cd & disk);

int main(){
    Cd c1("Beatles", "Capitol", 14, 35.5);
    Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C", "Alfred Brendel", "Philips", 2, 57.17);
    Cd *pcd = &c1;

    cout << "Using object directly:\n";
    c1.Report();
    c2.Report();

    cout << "Using type cd * pointer to objects:\n";
    pcd->Report();
    pcd = &c2;
    pcd->Report();

    cout << "Calling a function with a Cd reference argument:\n";
    Brovo(c1);
    Brovo(c2);

    cout << "Testing assignment: ";
    Classic copy;
    copy = c2;
    copy.Report();

    return 0;
}

void Brovo(const Cd & disk){
    disk.Report();
}