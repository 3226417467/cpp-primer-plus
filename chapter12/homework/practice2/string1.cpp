#include "string1.h"
#include <cstring>
using std::cin;
using std::cout;

int String::num_strings = 0;

String::String(const char * s){
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
}

String::String(){
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}

String::String(const String & st){
    num_strings++;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
}

String::~String(){
    --num_strings;
    delete [] str;
}

String & String::operator=(const String & st){
    if(this == &st) return *this;
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

String & String::operator=(const char * s){
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

char & String::operator[](int i){
    return str[i];
}

const char & String::operator[](int i) const{
    return str[i];
}

bool operator<(const String &st1, const String &st2){
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2){
    return st2 < st1;
}

bool operator==(const String &st1, const String &st2){
    return (std::strcmp(st1.str, st2.str) == 0);
}

ostream & operator<<(ostream & os, const String & st){
    os << st.str;
    return os;
}

istream & operator>>(istream & is, String & st){
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if(is) st = temp;
    while(is && is.get() != '\n') continue;
    return is;
}

int String::HowMany(){
    return num_strings;
}

String String::operator+(const String &s) {
    int n = length() + s.length() + 1;
    char * str = new char[n];
    strcpy(str, getStr());
    strcpy(str + length(), s.getStr());
    str[n - 1] = '\0';
    String st(str);
    return st;
}

String operator+(const String &s1, const String &s2){
    int n = s1.length() + s2.length() + 1;
    char * str = new char[n];
    strcpy(str, s1.getStr());
    strcpy(str + s1.length(), s2.getStr());
    str[n - 1] = '\0';
    String st(str);
    return st;
}

void String::stringlow(){
    for(int i=0; i<length(); i++){
        str[i] = std::tolower(str[i]);
    }
}

void String::stringup(){
    for(int i=0; i<length(); i++){
        str[i] = std::toupper(str[i]);
    }
}

int String::has(char c){
    int num = 0;
    for(int i=0; i<length(); i++){
        if(str[i] == c) num++;
    }
    return num;
}