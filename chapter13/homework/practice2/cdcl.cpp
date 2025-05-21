#include "cdcl.h"
#include <iostream>

Cd::Cd(char * s1, char * s2, int n, double x){
    performers = new char[50];
    for(int i=0; i<50; i++){
        performers[i] = s1[i];
    }
    label = new char[20];
    for(int i=0; i<20; i++){
        label[i] = s2[i];
    }
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d){
    performers = new char[50];
    for(int i=0; i<50; i++){
        performers[i] = d.performers[i];
    }
    label = new char[20];
    for(int i=0; i<20; i++){
        label[i] = d.label[i];
    }
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd(){
    performers = new char[50];
    label = new char[20];
}

Cd::~Cd(){
    delete [] performers;
    delete [] label;
}

void Cd::Report() const{
    std::cout << "performers: " << performers << std::endl;
    std::cout << "label: " << label << std::endl;
    std::cout << "selections: " << selections << std::endl;
    std::cout << "playtime: " << playtime << std::endl;
}

Cd & Cd::operator=(const Cd & d){
    performers = new char[50];
    for(int i=0; i<50; i++){
        performers[i] = d.performers[i];
    }
    label = new char[20];
    for(int i=0; i<20; i++){
        label[i] = d.label[i];
    }
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic(char * w, char * s1, char * s2, int n, double x)
    :Cd(s1, s2, n, x){
        work = new char[20];
        for(int i=0; i<20; i++){
            work[i] = w[i];
        }
}

Classic::Classic(const Classic & c) : Cd(c){
    work = new char[20];
    for(int i=0; i<20; i++){
        work[i] = c.work[i];
    }
}

void Classic::Report() const{
    Cd::Report();
    std::cout << "work: " << work << std::endl;
}

Classic & Classic::operator=(const Classic & c){
    Cd::operator=(c);
    work = new char[20];
    for(int i=0; i<20; i++){
        work[i] = c.work[i];
    }
    return *this;
}