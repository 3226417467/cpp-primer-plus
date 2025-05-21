#include <iostream>
#include "golf.h"

const int L = 10;

int main(){
    golf g[L];
    int k = 0;
    for(int i=0; i<L; i++){
        int ret = setgolf(g[i]);
        if(ret == 0) break;
        k++;
    }

    for(int i=0; i<k; i++){
        showgolf(g[i]);
    }

    handicap(g[0], 90);

    for(int i=0; i<k; i++){
        showgolf(g[i]);
    }
    return 0;
}