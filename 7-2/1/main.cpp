#include <iostream>
#include "message.h"
#include <map>
#include <vector>
#include <string>

using namespace std;

int main(){
    MessageBook mb;
    string command;
    int phoneNum;
    string message;

    while(1){
        cin >> command;

        if( command == "quit" ){
            break;
        }
        else if( command == "add" ){
            cin >> phoneNum;
            getline(cin, message);
            message = message.substr(1);
            mb.AddMessage(phoneNum, message);
        }
        else if( command == "delete" ){
            cin >> phoneNum;
            mb.DeleteMessage(phoneNum);
        }
        else if( command == "print" ){
            cin >> phoneNum;
            cout << mb.GetMessage(phoneNum) << endl;
        }
        else if( command == "list" ){
            int len = mb.vp.size();
            for(int i = 0; i < len; i++){
                cout << mb.GetNumbers()[i] << ": " << mb.GetMessage(mb.GetNumbers()[i]) << endl;
            }
        }
    }
    return 0;
}

