#pragma once
#define pi 3.14

class Circle{
public:
    double areaC();
    double perimeterC();
    Circle( int x, int y, int radius);


private:
    int x;
    int y;
    int radius;
};

class Rectangle{
public:
    int areaR();
    int perimeterR();
    Rectangle( int x1, int y1, int x2, int y2);

private:
    int x1;
    int y1;
    int x2;
    int y2;
};
