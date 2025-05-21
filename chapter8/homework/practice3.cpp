#include <iostream>
#include <cstring>

void change(std::string &s){
    for(int i = 0; i<s.length(); i++){
        s[i] = toupper(s[i]);
    }
}

int main(){
    std::string s;
    while(1){
        std::getline(std::cin, s);
        if(s == "q"){
            std::cout << "Bye." << std::endl;
            break;
        }
        change(s);
        std::cout << s << std::endl;
    }
    return 0;
}