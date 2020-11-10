#include <iostream>
#include "animal.h"
#include <vector>

using namespace std;

int main(){
    vector<Animal*> animals;
    
    string name;
    int age;
    while(1){
        char command;
        cin >> command;
        if( command == 'z' ){
            int numStripes;
            cin >> name >> age >> numStripes;
            animals.push_back(new Zebra(name, age, numStripes));
        }
        else if( command == 'c' ){
            string favoriteToy;
            cin >> name >> age >> favoriteToy;
            animals.push_back(new Cat(name, age, favoriteToy));
        }
        else if( command == '0' ){
            break;
        }
    }
    for( int i = 0; i < animals.size(); i++){
        animals[i]->printInfo();
    }
    
    for( int i = 0; i < animals.size(); i++){
        delete animals[i];
    }

    return 0;
}

            
