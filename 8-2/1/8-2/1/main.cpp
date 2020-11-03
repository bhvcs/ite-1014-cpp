#include <iostream>
#include "shapes.h"

using namespace std;

int main(){
    string command;
    int canvas_width, canvas_height;
    cin >> canvas_width >> canvas_height;
    

    while( command != "quit" ){
        cin >> command;
        if( command == "rect" ){
            int tlx, tly, width, height;
            char brush;

            cin >> tlx >> tly >> width >> height >> brush;
            Rectangle rectangle(canvas_width, canvas_height, tlx, tly, width, height, brush);
            
            cout << endl;
            cout << "Area: " << rectangle.GetArea() << endl;
            cout << endl; 
            cout << "Perimeter: " << rectangle.GetPerimeter() << endl;
            rectangle.Draw();
        }
        else if( command == "square" ){
            int tlx, tly, os;
            char brush;

            cin >> tlx >> tly >> os >> brush;
            Square square(canvas_width, canvas_height, tlx, tly, os, brush);

            cout << endl;
            cout << "Area: " << square.GetArea() << endl;
            cout << endl;
            cout << "Perimeter: " << square.GetPerimeter() << endl;
            square.Draw();
        }
        else if( command == "diamond" ){
            int tcx, tcy, distance;
            char brush;
            
            cin >> tcx >> tcy >> distance >> brush;
            Diamond diamond(canvas_width, canvas_height, tcx, tcy, distance, brush);

            cout << endl;
            cout << "Area: " << diamond.GetArea() << endl;
            cout << endl;
            cout << "Perimeter: " << diamond.GetPerimeter() << endl;
            diamond.Draw();
        }

    }
    return 0;
}
