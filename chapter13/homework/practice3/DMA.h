#ifndef DMA_H
#define DMA_H
#include <iostream>

class ABC{
public:
    virtual void view() = 0;
};

class baseDMA : public ABC{
public:
    virtual void view(){
        std::cout << "BaseDMA" << std::endl;
    }
};

class lacksDMA : public ABC{
public:
    virtual void view(){
        std::cout << "lacksDMA" << std::endl;
    }
};

class hasDMA : public ABC{
public:
    virtual void view(){
        std::cout << "hasDMA" << std::endl;
    }
};

#endif