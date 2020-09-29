#include <iostream>

using namespace std;

void magicSquare(int** arr, int n){
    int r = 0;
    int c = (n-1)/2;
    arr[r][c] = 1;

    while(1){
        if( arr[r][c] == n*n){
            break;
        }

        else if( arr[r][c] % n == 0){
            int temp1 = arr[r][c];
            r++;
            arr[r][c] = temp1 + 1;
            continue;
            }
        else if(r == 0){
            int temp2 = arr[r][c];
            r = n-1;
            c++;
            arr[r][c] = temp2 + 1;
            continue;

        }
        else if(c == n-1){
            int temp3 = arr[r][c];
            r--;
            c = 0;
            arr[r][c] = temp3 + 1;
            continue;
            }
        int temp4 = arr[r][c];
        r--;
        c++;
        arr[r][c] = temp4 + 1;
        
    }
    return;
}


int main(int argc, char* argv[]){
    int n = atoi(argv[argc-1]);
    if( n%2 == 1 && n >= 3){        
        int** arr = new int*[n];
        for(int i = 0; i < n; i++){
            arr[i] = new int[n];
        }
    
        magicSquare(arr,n);            
        
        for(int i = 0; i < n; i++){
            for(int k = 0; k < n; k++){
                cout << arr[i][k] << " ";
        }
            cout << endl;
    }
        
        for(int i = 0; i < n; i++){
            delete[] arr[i];
        }
        delete[] arr;
        
        return 0;
    }
}
