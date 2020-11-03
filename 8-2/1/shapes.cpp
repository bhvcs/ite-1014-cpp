#include <iostream>
#include "shapes.h"

using namespace std;

Shape::Shape(){};
Shape::Shape(int canvas_width, int canvas_height){
    this->canvas_width = canvas_width;
    this->canvas_height = canvas_height;
}

double Shape::GetArea(){
    return 0.0;
}
int Shape::GetPerimeter(){
    return 0;
}
void Shape::Draw(int canvas_width, int canvas_height){
    return;
}
Rectangle::Rectangle(){};
Rectangle::Rectangle(int canvas_width, int canvas_height, int tlx, int tly, int width, int height, char brush):Shape(canvas_width, canvas_height){
    this->std_x = tlx;
    this->std_y = tly;
    this->width = width;
    this->height = height;
    this->brush = brush;
}
double Rectangle::GetArea(){
    return width * height;
}
int Rectangle::GetPerimeter(){
    return 2 * ( width + height );
}
void Rectangle::Draw(){
    char** canvas;    
    canvas = new char*[canvas_height+1];
    for(int i = 0; i < canvas_height+1; i++){
        canvas[i] = new char[canvas_width+1];
    }

    int* stdx = new int[canvas_width+1];
    int* stdy = new int[canvas_height+1];

    for( int i = 0; i < canvas_width; i++){
        (stdx[i]) = i;
    }
    for( int i = 0; i < canvas_height; i++){
        stdy[i] = i;

    }


    for(int i = 0; i < canvas_height; i++){
        for(int j = 0; j < canvas_width; j++){
            canvas[i][j] = '.';
        }
    }

    for( int i = std_y; i < std_y + height; i++){
        for( int j = std_x; j < std_x + width; j++){
            if( i < 0 || i > canvas_height || j < 0 || j > canvas_width){
                continue;
            }
            else{
                canvas[i][j] = brush;
            }
        }
    }
    
    cout << " ";
    for( int i = 0; i < this->canvas_width; i++){
        cout << (stdx[i]);
    }
    cout << endl;
    for( int i = 0; i < this->canvas_height; i++){
        cout << stdy[i];
        for( int j =0; j < canvas_width; j++){
            cout << canvas[i][j];
        }
        cout << endl;
    }
    for ( int i =0; i < canvas_height+1; i++)
        delete[] canvas[i];
    delete[] canvas;

}
Square::Square(){};
Square::Square(int canvas_width, int canvas_height, int tlx, int tly, int os, char brush):Shape( canvas_width, canvas_height){
    this->std_x = tlx;
    this->std_y = tly;
    this->os = os;
    this->brush = brush;
}
double Square::GetArea(){
    return os * os;
}
int Square::GetPerimeter(){
    return 4 * os;
}
void Square::Draw(){
    char** canvas;
    canvas = new char*[canvas_height+1];
    for(int i = 0; i < canvas_height+1; i++){
        canvas[i] = new char[canvas_width+1];
    }

    int* stdx = new int[canvas_width+1];
    int* stdy = new int[canvas_height+1];

    for( int i = 0; i < canvas_width; i++){
        (stdx[i]) = i;
    }
    for( int i = 0; i < canvas_height; i++){
        stdy[i] = i;

    }


    for(int i = 0; i < canvas_height; i++){
        for(int j = 0; j < canvas_width; j++){
            canvas[i][j] = '.';
        }
    }
    for( int i = std_y; i < std_y + os; i++){
        for( int j = std_x; j < std_x + os; j++){
            if( i < 0 || i > canvas_height || j < 0 || j > canvas_width){
                continue;
            }
            else{
                canvas[i][j] = brush;
            }
        }
    }

    cout << " ";
    for( int i = 0; i < this->canvas_width; i++){
        cout << (stdx[i]);
    }
    cout << endl;
    for( int i = 0; i < this->canvas_height; i++){
        cout << stdy[i];
        for( int j =0; j < canvas_width; j++){
            cout << canvas[i][j];
        }
        cout << endl;
    }
    for ( int i =0; i < canvas_height+1; i++)
        delete[] canvas[i];
    delete[] canvas;
}
Diamond::Diamond(){};
Diamond::Diamond(int canvas_width, int canvas_height, int tcx, int tcy, int distance, char brush):Shape(canvas_width, canvas_height){
    this->std_x = tcx;
    this->std_y = tcy;
    this->distance = distance;
    this->brush = brush;
}
double Diamond::GetArea(){
    return (double)( 2*distance +1 ) * ( 2*distance +1 ) / 2;
}
int Diamond::GetPerimeter(){
    return 4* ( distance +1 );
}
void Diamond::Draw(){
    char** canvas;
    canvas = new char*[canvas_height+1];
    for(int i = 0; i < canvas_height+1; i++){
        canvas[i] = new char[canvas_width+1];
    }

    int* stdx = new int[canvas_width+1];
    int* stdy = new int[canvas_height+1];

    for( int i = 0; i < canvas_width; i++){
        (stdx[i]) = i;
    }
    for( int i = 0; i < canvas_height; i++){
        stdy[i] = i;

    }


    for(int i = 0; i < canvas_height; i++){
        for(int j = 0; j < canvas_width; j++){
            canvas[i][j] = '.';
        }
    }
    
    for( int i = std_y; i < std_y + distance + 1; i++ ){
        for( int j = std_x + std_y - i; j < std_x - std_y + i+1; j++){
            if( i < 0 || i > canvas_height || j < 0 || j > canvas_width ){
                continue;
            }
            else{
                canvas[i][j] = brush;
            }
        }
    }
    for ( int i = std_y + distance + 1; i < std_y + 2*distance + 1; i++){
        for ( int j = std_x - (std_y + 2*distance - i) ; j < std_x + ( std_y + 2*distance - i) +1; j++){
            if( i < 0 || i > canvas_height || j < 0 || j > canvas_width ){
                continue;
            }
            else{
                canvas[i][j] = brush;
            }
        }
    }

    cout << " ";
    for( int i = 0; i < this->canvas_width; i++){
        cout << (stdx[i]);
    }
    cout << endl;
    for( int i = 0; i < this->canvas_height; i++){
        cout << stdy[i];
        for( int j =0; j < canvas_width; j++){
            cout << canvas[i][j];
        }
        cout << endl;
    }
    for ( int i =0; i < canvas_height+1; i++)
        delete[] canvas[i];
    delete[] canvas;
}

