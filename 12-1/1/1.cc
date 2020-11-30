#include <iostream>

using namespace std;

template<typename T>
void myswap(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
    return;
}

int main(){
    int i1, i2;
    double d1, d2;
    string s1, s2;
    cin >> i1 >> i2;
    myswap<int>(i1, i2);
    cout << "After calling myswap(): " << i1 << " " << i2 << endl;
    cin >> d1 >> d2;
    myswap<double>(d1, d2);
    cout << "After calling myswap(): " << d1 << " " << d2 << endl;
    cin >> s1 >> s2;
    myswap<string>(s1, s2);
    cout << "After calling myswap(): " << s1 << " " << s2 << endl;

    return 0;
}

