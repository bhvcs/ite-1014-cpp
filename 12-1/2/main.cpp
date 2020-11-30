#include <iostream>
#include "my_container.h"

using namespace std;

int main(){
    int len;

    cin >> len;
    MyContainer<int> m1(len);
    cin >> m1;
    cout << m1 << endl;

    cin >> len;
    MyContainer<double> m2(len);
    cin >> m2;
    cout << m2 << endl;

    cin >> len;
    MyContainer<string> m3(len);
    cin >> m3;
    cout << m3 << endl;

    return 0;
}
