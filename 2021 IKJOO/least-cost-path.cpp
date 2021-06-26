#include<bits/stdc++.h>
using namespace std;

void minPath(int** input, int m, int n) {
    int** output = new int* [m];
    for(int i=0; i<m; i++){
        output[i] = new int[n];
    }
    cout << endl;
    output[m-1][n-1] = input[m-1][n-1];
    for(int i=n-2; i>=0; i--){
        output[m-1][i] = input[m-1][i] + output[m-1][i+1];
    }
    for(int i=m-2; i>=0; i--){
        output[i][n-1] = input[i][n-1] + output[i+1][n-1];
    }

    for(int i=m-2; i>=0; i--){
        for(int j=n-2; j>=0; j--){
            output[i][j] = input[i][j] + max(output[i+1][j], output[i][j+1]);
        }
    }
    cout << "Maximum health with least cost path to reach destination is: "<< output[0][0];
    delete [] output;
}

int main() {
    int** arr = new int* [3];
    arr[0] = new int[3];
    arr[1] = new int[3];
    arr[2] = new int[3];

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << "Enter the value at "<<i<<j<<": ";
            cin >> arr[i][j];
            cout << endl;
        }
    }
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
    minPath(arr, 3, 3);
    return 0;
}
