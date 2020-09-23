#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int* array = new int[N];
    for(int i=0; i<N; i++){
        cin >> array[i];
    }
    int min = array[0];
    int max = array[0];
    for(int i=0; i<N; i++){
        if(min > array[i]){
            min = array[i];
        }
        if(max < array[i]){
            max = array[i];
        }
    }
    cout << "min: " << min << endl;
    cout << "max: " << max << endl;
}
