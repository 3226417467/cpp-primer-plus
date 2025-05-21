#include <iostream>

void print(char *s, int n = 0){
    static int num = 0;
    num++;
    if(n == 0){
        std::cout << "----" << std::endl;
        std::cout << s << std::endl;
    }else{
        std::cout << "--- print " << num << "times" << std::endl;
        for(int i=0; i<num; i++){
            std::cout << s << std::endl;
        }
    }
}

int main(){
    char s[20];
    std::cin >> s;
    print(s);
    print(s, 1);
    print(s, 2);
    print(s);
}