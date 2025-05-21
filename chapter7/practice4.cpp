#include <iostream>

long double calulate(int n, int k, int m){
    long double ret = 1.0;
    for(int i=n, j=k; j>0; i--, j--){
        ret = ret * i / j;
    }
    ret = ret * m;
    return ret;
}

int main(){
    std::cout << "please input: " << std::endl;
    int n, k, m;
    std::cin >> n >> k >> m;
    std::cout << calulate(n, k, m) << std::endl;
    return 0;
}