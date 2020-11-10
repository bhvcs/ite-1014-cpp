#include <iostream>
#include "animal.h"

using namespace std;

Animal::Animal(string name_, int age_){
    name = name_;
    age = age_;
}

Animal::~Animal(){}

void Animal::printInfo(){}

Zebra::Zebra(string name_, int age_, int numStripes_) :Animal(name_, age_){
    numStripes = numStripes_;
}

Zebra::~Zebra(){}

void Zebra::printInfo(){
    //print out the type, name, age, and number of stripes( or favofite toy)
    cout << "Zebra, Name: " << name << ", Age: " << age << ", Number of stripes: " << numStripes << endl;
}

Cat::Cat(string name_, int age_, string favoriteToy_) :Animal(name_, age_){
    favoriteToy = favoriteToy_;
}

Cat::~Cat(){}

void Cat::printInfo(){
    cout << "Cat, Name: " << name << ", Age: " << age << ", Favorite toy: " << favoriteToy << endl;
}

