#include <iostream>
#include "minmax.h"

using namespace std;

int main(int argc, char** argv){
    int N = argc-1;
    int* array = new int[N];
    for(int i = 0; i < N; i++){
        array[i] = atoi(argv[i+1]);
    }
    int min = array[0];
    int max = array[0];
    getMinMax( array, N, min, max);
    cout << "min: " << min << endl;
    cout << "max: " << max << endl;

    delete[] array;

    return 0;
}
