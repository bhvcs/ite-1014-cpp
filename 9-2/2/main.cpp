#include <iostream>
#include "canvas.h"
#include <vector>

using namespace std;

int main(){
    int r, c;
    cin >> r >> c;
    Canvas* canvas = new Canvas(r,c);//delete
    (*canvas).Clear();
    (*canvas).Print();
    string command;
    string c_shape;
    vector<Shape*>shapes;

    while(command != "quit"){
        cin >> command;
        if( command == "add" ){
            cin >> c_shape;
            if(c_shape == "rect"){
                int std_x, std_y, width, height;
                char brush;
                cin >> std_x >> std_y >> width >> height >> brush;
                Rectangle* rect = new Rectangle(std_x, std_y, width, height, brush);
                shapes.push_back(rect);//check

            }
            else if(c_shape == "tri_down"){
                int std_x, std_y, height;
                char brush;
                cin >> std_x >> std_y >> height >> brush;
                DownTriangle* downTri = new DownTriangle(std_x, std_y, height, brush);
                shapes.push_back(downTri);//check
            }
            else if(c_shape == "tri_up"){
                int std_x, std_y, height;
                char brush;
                cin >> std_x >> std_y >> height >> brush;
                UpTriangle* upTri = new UpTriangle(std_x, std_y, height, brush);
                shapes.push_back(upTri);//check
            }
            else if(c_shape == "diamond"){                
                int std_x, std_y, distance;
                char brush;
                cin >> std_x >> std_y >> distance >> brush;
                Diamond* dia = new Diamond(std_x, std_y, distance, brush);
                shapes.push_back(dia);
            }

        }
        else if( command == "draw"){
            (*shapes.back()).Draw(canvas);
        }
        
    }

    
    return 0;
}   


