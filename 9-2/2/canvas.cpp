#include <iostream>
#include "canvas.h"
#include <vector>

using namespace std;

Canvas::Canvas(size_t row, size_t col){
    row_ = row;
    col_ = col;
}
int Canvas::getRow(){
    return row_;
}
int Canvas::getCol(){
    return col_;
}

void Canvas::Print(){
    vector<int>x_axis;
    vector<int>y_axis;
    for(int i = 0; i < col_; i++){
        x_axis.push_back(i);
    }
    for(int i = 0; i < row_; i++){
        y_axis.push_back(i);
    }
    cout << " ";
    for(int i = 0; i < col_; i++){
        cout << x_axis[i] << "";
    }
    cout << endl;
    for(int i = 0; i < row_; i++){
        cout << y_axis[i] << "";
        for(int j = 0; j < col_; j++){
            cout << pstate[i][j] << "";
                }
        cout << endl;
    }
}
void Canvas::Clear(){
    p.assign(col_, '.');
    for( int i = 0; i < row_; i++){
        pstate.push_back(p);
    }
}
bool Canvas::DrawPixel(int x, int y, char brush){
    pstate[x][y] = brush;
    return true;
}
void Shape::Draw(Canvas* canvas){
    return;
}
void Rectangle::Draw(Canvas* canvas){
    for( int i = std_y; i < std_y + height; i++){
        for( int j = std_x; j < std_x + width; j++){
            if( i < 0|| i > canvas->getRow() || j < 0 || j > canvas->getCol()){
                continue;
            }
            else{
                canvas->DrawPixel(i, j, brush);
            }
        }
    }
    canvas->Print();
}
Rectangle::Rectangle(int std_x, int std_y, int width, int height, char brush){
    this-> std_x = std_x;
    this-> std_y = std_y;
    this-> width = width;
    this-> height = height;
    this-> brush = brush;
}
DownTriangle::DownTriangle(int std_x, int std_y, int height, char brush){
    this-> std_x = std_x;
    this-> std_y = std_y;
    this-> height = height;
    this-> brush = brush;
}
void DownTriangle::Draw(Canvas* canvas){
    for( int i = 0; i < height; i++){
        for( int j = std_x - i; j < std_x + i + 1; j++){
            if( std_y - i < 0 || std_y -i > canvas->getRow() || j < 0 || j> canvas->getCol()){
                continue;
            }
            else{
                canvas->DrawPixel(std_y - i, j, brush);
            }
        }
    }
    canvas->Print();
}
UpTriangle::UpTriangle(int std_x, int std_y, int height, char brush){
    this-> std_x = std_x;
    this-> std_y = std_y;
    this-> height = height;
    this-> brush = brush;
}
void UpTriangle::Draw(Canvas* canvas){
    for( int i = 0; i < height; i++){
        for( int j = std_x - i; j < std_x + i + 1; j++){
            if( std_y + i < 0 || std_y + i > canvas->getRow() || j < 0 || j> canvas->getCol()){
                continue;
            }
            else{
                canvas->DrawPixel(std_y + i, j, brush);
            }
        }
    }
    canvas->Print();
}
Diamond::Diamond(int std_x, int std_y, int distance, char brush){
    this-> std_x = std_x;
    this-> std_y = std_y;
    this-> distance = distance;
    this-> brush = brush;
}

void Diamond::Draw(Canvas* canvas){
    for( int i = std_y; i < std_y + distance + 1; i++){
        for( int j = std_x + std_y - i; j < std_x - std_y+i+1; j++){
            if( i < 0|| i > canvas->getRow() || j < 0 || j > canvas->getCol()){
                continue;
            }
            else{
                canvas->DrawPixel(i, j, brush);
            }
        }
    }
    for( int i = std_y + distance + 1; i < std_y + 2*distance + 1; i++){
        for( int j = std_x - (std_y + 2*distance - i); j < std_x + (std_y + 2*distance - i) + 1; j++){
            if( i < 0|| i > canvas->getRow() || j < 0 || j > canvas->getCol()){
                continue;
            }
            else{
                canvas->DrawPixel(i, j, brush);
            }
        }
    }
    canvas->Print();
}
void Diamond::Dump(){
    cout << "diamond" << std_x<< std_y<< distance<< brush << endl;
}
void UpTriangle::Dump(){
    cout << "tri_up "<<std_x<< std_y << height<< brush << endl;
}
void DownTriangle::Dump(){
    cout << "tri_down "<<std_x<< std_y << height<< brush << endl;
}
void Rectangle::Dump(){
    cout << "rect" << std_x<< std_y<<width<<height<< brush << endl;
}


