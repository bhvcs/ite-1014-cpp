#include "shapes.h"
Circle::Circle(int x, int y, int radius){
    this->x = x;
    this->y = y;
    this->radius = radius;
}
double Circle::areaC(){
    double area;
    area = pi*(this->radius)*(this->radius);
    return area;
}
double Circle::perimeterC(){
    double perimeter;
    perimeter = 2*radius*pi;
    return perimeter;
}

Rectangle::Rectangle(int x1, int y1, int x2, int y2){
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
}
int Rectangle::areaR(){
    int width = this->x2 - this->x1;
    int height = this->y1 - this->y2;
    int area = width*height;
    return area;
}
int Rectangle::perimeterR(){
    int width = this->x2 - this->x1;
    int height = this->y1 - this->y2;
    int perimeter = (width+height)*2;
    return perimeter;
}

