#include "stonewt.h"

int main(){
    using namespace std;
    Stonewt s(19.6);
    cout << s << endl;
    s.setType(Stonewt::s_p);
    cout << s << endl;

    Stonewt s1(20.1);
    cout << "s + s1: " << s + s1 << endl;
    cout << "s1 - s: " << s1 - s << endl;
    Stonewt s2 = 2 * s;
    s2.setType(Stonewt::s_p);
    cout << s2 << endl;
    return 0;
}