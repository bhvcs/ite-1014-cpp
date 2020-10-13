#include <iostream>
#include "shapes.h"
#include <string>


using namespace std;

int main(){
    
    string info;
    while(1){
        string info;
        cout << "shape?" << endl;
        getline(cin, info);
        int N = (info.length()-1)/2;
        int* arr2 = new int[N];
        for(int i = 1; i < N+1; i++){
            arr2[i-1] = (int)(info[2*i]-48);
        }
        

        if( info[0] == 'C'){
            Circle* circle = new Circle(arr2[0], arr2[1], arr2[2]);
            cout << "area: " << circle->areaC() <<", perimeter: " << circle->perimeterC() << endl;
            continue;
        }
        else if( info[0] == 'R'){
            Rectangle* rectangle = new Rectangle(arr2[0], arr2[1], arr2[2], arr2[3]);
            cout << "area: " << rectangle->areaR() << ", perimeter: " << rectangle->perimeterR() << endl;
            continue;
        }
        else if( info[0] == 'Q'){
            break;
        }
        delete[] arr2;
    }
    return 0;

}
