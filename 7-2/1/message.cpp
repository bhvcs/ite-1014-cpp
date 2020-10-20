#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include "message.h"
#include <string>

using namespace std;

MessageBook::MessageBook(){}
MessageBook::~MessageBook(){}

void MessageBook::AddMessage(int number, const string& message){
    vp.push_back(number);

    messages_.insert(make_pair(number, message));
    return;
}
void MessageBook::DeleteMessage(int number){
    messages_.erase(number);
    vector<int>::iterator aiter, biter;
    for(aiter = vp.begin(); aiter != vp.end(); aiter ++){
        if( *aiter == number){
            biter = aiter;
            break;
        }
    }
    vp.erase(biter);
    return;
}
vector<int> MessageBook::GetNumbers(){
    return vp;
}

const string& MessageBook::GetMessage(int number){
    
    map<int, string>::iterator it;
    for(it =messages_.begin(); it !=messages_.end(); it++){
        if(it->first == number){
            return it->second;
        }    
}
}
