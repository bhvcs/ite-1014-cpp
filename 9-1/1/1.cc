#include <iostream>
#include <vector>

using namespace std;

class A{
    public:
        virtual ~A(){}
        virtual string test(){
            return "A::test()";
        }
};
class B: public A{
    public:
        virtual ~B(){}
        virtual string test(){
            return "B::test()";
        }
};
class C: public B{
    public:
        virtual ~C(){}
        virtual string test(){
            return "C::test()";
        }
};

int main(){
    vector<A*> arr;
    arr.push_back(new A);
    arr.push_back(new B);
    arr.push_back(new C);
    
    for( int i = 0 ; i < arr.size(); i++){
        cout << arr[i]->test() << endl;
    }

    for( int i = 0; i < arr.size(); i++){
        delete arr[i];
    }
    return 0;
}
