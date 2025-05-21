#include <iostream>

#define TEST2
#ifdef TEST1

const int Seasons = 4;
const char Sname[Seasons][10] = {
    "Spring", 
    "Summer",
    "Fall",
    "Winter"
};

void fill(double* pa){
    for(int i=0; i<Seasons; i++){
        std::cout << "Enter " << Sname[i] << " expenses: ";
        std::cin >> pa[i];
    }
}

void show(double* pa){
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for(int i=0; i<Seasons; i++){
        std::cout << Sname[i] << ":$" << pa[i] << std::endl;
        total += pa[i];
    }
    std::cout << "Total Expenses: $" << total << std::endl;
}

int main(){
    double pa[Seasons];
    fill(pa);
    show(pa);
    return 0;
}
#endif

#ifdef TEST2

const int Seasons = 4;
const char Sname[Seasons][10] = {
    "Spring", 
    "Summer",
    "Fall",
    "Winter"
};

struct s_pa{
    double pa[Seasons];
};

void fill(s_pa* pa){
    for(int i=0; i<Seasons; i++){
        std::cout << "Enter " << Sname[i] << " expenses: ";
        std::cin >> pa->pa[i];
    }
}

void show(s_pa* pa){
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for(int i=0; i<Seasons; i++){
        std::cout << Sname[i] << ":$" << pa->pa[i] << std::endl;
        total += pa->pa[i];
    }
    std::cout << "Total Expenses: $" << total << std::endl;
}

int main(){
    s_pa pa;
    fill(&pa);
    show(&pa);
    return 0;
}

#endif