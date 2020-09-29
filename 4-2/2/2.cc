#include <iostream>

using namespace std;

void sortArray(int* arr, int N){
    for(int i =0; i < N-1; i++){
        for(int j = 0 ; j < N-1; j++){
            if( arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return;
}
                
int main(){

    int N;
    cin >> N;
    if( N > 0){
        int* array = new int[N];
        for(int i = 0; i < N; i++){
            cin >> array[i];
        }
        sortArray(array, N);
        for(int i = 0; i < N; i++){
            cout << array[i] << " ";
        }
        cout << endl;

        delete[] array;
    }


    return 0;
}
