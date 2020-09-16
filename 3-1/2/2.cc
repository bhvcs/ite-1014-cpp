#include <iostream>
#include <string>

using namespace std;

int main(){
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;
    string str3 = str1 + str2;
    int len = str3.length();
    cout << str3 << endl;
    cout << str3[0] << endl;
    cout << str3[len-1] << endl;

    return 0;
}
