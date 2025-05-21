#include <iostream>
using namespace std;

union chose
{
    int id_int;
    double id_double;
};

int main(){
    chose c;
    c.id_double = 10.1;
    cout << c.id_double << endl;

    c.id_int = 10;
    cout << c.id_int << endl;
    return 0;
}
