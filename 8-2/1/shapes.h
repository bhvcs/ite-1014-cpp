#ifndef __shapes__
#define __shapes__

#include <iostream>

using namespace std;

class Shape{
    public:
        Shape();
        Shape(int canvas_width, int canvas_height);

        double GetArea();
        int GetPerimeter();
        void Draw(int canvas_width, int canvas_height);

    protected:
        int canvas_width, canvas_height;
        char brush;
        int std_x, std_y;
};

class Rectangle: public Shape{
    public:
        Rectangle();
        Rectangle(int canvas_width, int canvas_height, int tlx, int tly, int width, int height, char brush);

        double GetArea();
        int GetPerimeter();
        void Draw();
        
        
    private:
        int width, height;
};
class Square: public Shape{
    public:
        Square();
        Square(int canvas_width, int canvas_height, int tlx, int tly, int os, char brush);

        double GetArea();
        int GetPerimeter();
        void Draw();
        
    private:
        int os;
};

class Diamond: public Shape{
    public:
        Diamond();
        Diamond(int canvas_width, int  canvas_height, int tcx, int tcy, int distance, char brush);
        
        double GetArea();
        int GetPerimeter();
        void Draw();
            
        
    private:
        int distance;
};

#endif
