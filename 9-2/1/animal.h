#ifndef __animal__
#define __animal__

#include <iostream>

using namespace std;

class Animal{
    public:
        Animal(string name_, int age_);
        virtual ~Animal();
        virtual void printInfo();
    protected:
        string name;
        int age;
};

class Zebra: public Animal{
    public:
        Zebra(string name_, int age_, int numStripes_);
        virtual ~Zebra();
        virtual void printInfo();
    private:
        int numStripes;
};

class Cat: public Animal{
    public:
        Cat(string name_, int age_, string favoriteToy_);
        virtual ~Cat();
        virtual void printInfo();
    private:
        string favoriteToy;
};

#endif
