#include <iostream>

using namespace std;

struct Person{
    string name;
    int age;
};

int main(){
    int N;
    cin >> N;
    Person* person = new Person[N];
    for(int i = 0; i < N; i++){
        cin >> person[i].name >> person[i].age;
    }
    for(int i = 0; i < N; i++){
        cout << "Name:" << person[i].name << ", Age:" << person[i].age << endl;
    }

    delete[] person;

    return 0;
}

