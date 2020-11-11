#include <iostream>
#include <vector>

using namespace std;

class B{
public:
    virtual ~B(){}
};
class C : public B{
public:
    void test_C(){
        cout << "C::test_C()" << endl;
    }
};
class D : public B{
public:
    void test_D(){
        cout << "D::test_D()" << endl;
    }
};

int main(){
    string command;
    vector<B*>arr;
    C c;
    D d;
    C* pc = &c;
    D* pd = &d;


    while(1){
        cin >> command;
        if( command == "B" ){
            arr.push_back(new B);
        }
        else if( command == "C" ){
            arr.push_back(new C);
        }
        else if( command == "D" ){
            arr.push_back(new D);
        }
        
        else if( command == "0" ){
            for( int i = 0; i < arr.size(); i++){
                pc = dynamic_cast<C*>(arr[i]);
                pd = dynamic_cast<D*>(arr[i]);
                
                if(pc){
                    pc->test_C();
                }
                if(pd){
                    pd->test_D();
                }
            }
            break;
        }
    }
    for( int i=0; i <arr.size(); i++){
        delete arr[i];
    }
    return 0;
}
