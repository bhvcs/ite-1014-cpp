#include <iostream>
#include <string>
#include <vector>
#include "sorted.h"
#include <stdlib.h>

using namespace std;

int main(){
    SortedArray* sa = new SortedArray;
    int n;
    do{
        cin >> n;
        sa->AddNumber(n);
    }
    while (getc(stdin) == ' ');
    while(1){
        int k;
        string command;
        cin >> command;
        if( command == "ascend" ){
            sa->GetSortedAscending();
            for( int i = 0; i < (int)sa->GetSortedAscending().size(); ++i){
                cout << (sa->GetSortedAscending())[i] << ' ';
                }
            cout << endl;
         }
        else if( command == "descend" ){
            sa->GetSortedDescending();
            for( int i = 0; i < (int)sa->GetSortedDescending().size(); ++i){
                cout << (sa->GetSortedDescending())[i] << ' ';
            }
            cout << endl;
        }
        else if( command == "max" ){
            cout << sa->GetMax() << endl;
        }
        else if( command == "min" ){
            cout << sa->GetMin() << endl;
        }
        else if( command == "quit" ){
            break;
        }
        else{
            do{
                cin >> k;
                sa->AddNumber(k);
    }
            while (getc(stdin) == ' ');

        }
    }
   
    delete sa;

    return 0;
}
