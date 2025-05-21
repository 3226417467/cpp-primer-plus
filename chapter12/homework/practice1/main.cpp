#include "cow.h"

int main(){
    Cow c1("name1", "hobby1", 23);
    Cow c2("name2", "hobby2", 21);
    c1.ShowCow();
    c2.ShowCow();
    c2 = c1;
    c2.ShowCow();
    return 0;
}