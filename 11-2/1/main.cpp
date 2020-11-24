#include <iostream>
#include "my_vector.h"

using namespace std;

int main(){
    int len, num;
    string command;
    string  ob1, ob2, op;
    MyVector m;
    cin >> command;

    if( command == "new" ){
        cin >> len;
    }
    MyVector a(len);
    MyVector b(len);
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
                    m = a + b;
                    cout << m << endl;
                }
                else{
                    num = atoi(ob2.c_str());
                    m = a + num;
                    cout << m << endl;
                }
            }
            else if( op == "-" ){
                cin >> ob2;
                if( ob2 == "b" ){
                    m = a - b;
                    cout << m << endl;
                }
                else{
                    num = atoi(ob2.c_str());
                    m = a - num;
                    cout << m << endl;
                }
            }
        }
        else if( ob1 == "quit" ){
            break;
        }
    }
    return 0;
}


            
