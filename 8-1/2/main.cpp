#include <iostream>
#include "rect.h"

using namespace std;

int main(){
    string command;
    int width, height;
    while( command != "quit" ){
        cin >> command;
        if( command == "nonsquare" ){
            cin >> width >> height;
            NonSquare nonSquare(width, height);
            nonSquare.print();
            cout << "Area: " << nonSquare.getArea() << endl;
            cout << "Perimeter: " << nonSquare.getPerimeter() << endl;
        }
        else if( command == "square" ){
            cin >> width;
            Square square(width);
            square.print();
            cout << "Area: " << square.getArea() << endl;
            cout << "Perimeter: " << square.getPerimeter() << endl;
        }
    }
    return 0;
}

