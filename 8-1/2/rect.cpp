#include <iostream>
#include "rect.h"

using namespace std;

Rectangle::Rectangle(int width, int height){
    this->width = width;
    this->height = height;
}
int Rectangle::getArea(){
    return width * height;
}
int Rectangle::getPerimeter(){
    return 2 * ( width + height );
}

Square::Square(int width): Rectangle::Rectangle(width, width){
    this->width = width;
    this->height = width;
}
void Square::print(){
    cout << width << "x" << width << " Square" << endl;
}

NonSquare::NonSquare(int width, int height):Rectangle::Rectangle(width, height){
    this->width = width;
    this->height = height;
}
void NonSquare::print(){
    cout << width << "x" << height << " NonSquare" << endl;
}

