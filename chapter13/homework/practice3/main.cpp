#include "DMA.h"


int main(){
    baseDMA b;
    lacksDMA l;
    hasDMA h;
    ABC* a[3] = {&b, &l, &h};
    for(int i=0; i<3; i++){
        a[i]->view();
    }
    return 0;
}
