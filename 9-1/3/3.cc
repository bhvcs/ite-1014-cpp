#include <iostream>
#include <vector>

using namespace std;

class A{
    public:
        A(int mA){
            memberA = new int;
            *memberA = mA;
            cout << "new memberA" << endl;
        }
        virtual ~A(){
            delete memberA;
            cout << "delete memberA" << endl;
        }
        virtual void print(){
            cout << "*memberA " << *memberA << endl;
        }

    private:
        int* memberA;
};
class B: public A{
    public:
        B(double mB): A(1){
            memberB = new double;
            *memberB = mB;
            cout << "new memberB" << endl;
        }
        virtual ~B(){
            delete memberB;
            cout << "delete memberB" << endl;
        }
        virtual void print(){
            A::print();
            cout << "*memberB " << *memberB << endl;
        }

    private:
        double* memberB;
};

class C: public B{
    public:
        C(const string& mC): B(1.1){
            memberC = new string;
            *memberC = mC;
            cout << "new memberC" << endl;
        }
        virtual ~C(){
            delete memberC;
            cout << "delete memberC" << endl;
        }
        virtual void print(){
            B::print();
            cout << "*memberC " << *memberC << endl;
        }

    private:
        string* memberC;

};

int main(){
    int a;
    double b;
    string c;

    cin >> a >> b >> c;

    vector<A*> arr;
    arr.push_back(new A(a));
    arr.push_back(new B(b));
    arr.push_back(new C(c));

    for( int i = 0; i < arr.size(); i++){
        arr[i]->print();
    }
    
    for( int i =0; i < arr.size(); i++){
        delete arr[i];
    }
    
    return 0;
}
