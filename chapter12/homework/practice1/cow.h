#ifndef COW_H
#define COW_H

class Cow {
    char name[20];
    char * hobby;
    double weight;
public:
    Cow();
    Cow(const char * nm, const char * ho, double wt);
    ~Cow();
    Cow & operator=(const Cow & c);
    void ShowCow() const;
};

#endif