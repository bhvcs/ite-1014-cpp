#include <iostream>

using namespace std;

void makeRows( string* prows, int x=0, int y = 0){
    (prows)[y][x] = '*';
    return;
}

void printPaintBox(string rows[]){
    for(int i = 0; i < 5; i++){
        cout << rows[i] << endl;
    }
    return;
}

int main(){
    
    string rows[5];
    for(int i =0; i < 5; i++){
        rows[i] = ".....";
    }
    int x, y;
    for(int i =0; i < 5; i++){
        cin >> x >> y;
        if( x<0 || y <0 || x>=5 || y>=5){
            break;
        }
        else{
            makeRows(rows, x, y);
            printPaintBox(rows);
        }
    }
}


