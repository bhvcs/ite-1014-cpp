#ifndef __rect__
#define __rect__

#include <iostream>

using namespace std;

class Rectangle{
public:
    Rectangle(int width, int height);
    int getArea();
    int getPerimeter();
protected:
    int width;
    int height;

};

class Square: public Rectangle {
public:
    Square(int width);
    void print();
};

class NonSquare: public Rectangle {
public:
    NonSquare(int width, int height);
    void print();
};

#endif
