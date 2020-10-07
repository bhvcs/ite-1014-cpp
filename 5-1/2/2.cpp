#include <iostream>
#include <string>

using namespace std;

struct Person{
    string name;
    double score;
};

int main(int argc, char** argv){
    int N = (argc - 1)/2;
    Person* persons = new Person[N];
    for(int i = 0; i < N; i++){
        persons[i].name = argv[2*i + 1];
        persons[i].score = stod(argv[2*i + 2]);
    }

    for( int i = 0; i < N; i++){
        cout << "Name:" << persons[i].name << ", Score:" << persons[i].score << endl;
    }

    delete[] persons;

    return 0;
}

