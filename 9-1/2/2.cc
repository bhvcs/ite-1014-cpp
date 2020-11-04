#include <iostream>
#include <vector>

using namespace std;

class A{
    public:
        virtual string getTypeInfo(){
            return "This is an instance of class A";
        }
        virtual ~A(){}

};
class B: public A{
    public: 
        virtual string getTypeInfo(){
            return "This is an instance of class B";        
        }
        virtual ~B(){}

};
class C: public B{
    public:
        virtual string getTypeInfo(){
            return "This is an instance of class C";
        }
        virtual ~C(){}
};

void printObjectTypeInfo1(A* object){
    cout << object->getTypeInfo() <<  endl;
}

void printObjectTypeInfo2(A& object){
    cout << object.getTypeInfo() << endl;
}

int main(){
    vector<A*> arr;
    arr.push_back(new A);
    arr.push_back(new B);
    arr.push_back(new C);

    for( int i = 0; i < arr.size(); i++){
        printObjectTypeInfo1(arr[i]);
        printObjectTypeInfo2(*arr[i]);
    }
    for( int i = 0; i < arr.size(); i++){
        delete arr[i];
    }
    
    return 0;
}
