#ifndef CDCL_H
#define CDCL_H

class Cd{
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;
public:
    Cd(char * s1, char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    ~Cd();
    virtual void Report() const;
    Cd & operator=(const Cd & d);
};

class Classic : public Cd{
private:
    char work[20];
public:
    Classic(char * w, char * s1, char * s2, int n, double x);
    Classic(const Classic & c);
    Classic() {}
    ~Classic() {}
    virtual void Report() const;
    Classic & operator=(const Classic & c);
};

#endif