#include <iostream>
#include "my_vector2.h"

using namespace std;

int main(){
    int len, num;
    string command;
    string  ob1, ob2, op;
    cin >> command;

    if( command == "new" ){
        cin >> len;
    }
    MyVector2 a(len);
    MyVector2 b(len);
    cout << "enter a" << endl;
    cin >> a;
    cout << "enter b" << endl;
    cin >> b;

    while(1){
        cin >> ob1;
        if( ob1 == "a" ){
            cin >> op;
            if( op == "+" ){
                cin >> ob2;
                if( ob2 == "b" ){
                    MyVector2 m1(a + b);
                    cout << m1 << endl;
                }
                else{
                    num = atoi(ob2.c_str());
                    MyVector2 m2 = a + num;
                    cout << m2 << endl;
                }
            }
            else if( op == "-" ){
                cin >> ob2;
                if( ob2 == "b" ){
                    MyVector2 m3 = a - b;
                    cout << m3 << endl;
                }
                else{
                    num = atoi(ob2.c_str());
                    MyVector2 m4 = a - num;
                    cout << m4 << endl;
                }
            }
        }
        else if( ob1 == "quit" ){
            break;
        }
    }
    return 0;
}

