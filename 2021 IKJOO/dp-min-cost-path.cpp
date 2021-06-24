#include<bits/stdc++.h>
using namespace std;

int minCost(int** input, int m, int n) {
    int **output = new int* [m];
    for(int i=0; i<m; i++){
        output[i] = new int[m];
    }
    output[m-1][n-1] = input[m-1][n-1];

    for(int i=m-2; i>=0; i--){
        output[i][n-1] = output[i+1][n-1] + input[i][n-1];
    }
    for(int i=n-2; i>=0; i--){
        output[m-1][i] = output[m-1][i+1] + input[m-1][i];
    }

    for(int i=m-2; i>=0; i--) {
        for(int j=n-2; j>=0; j--) {
            output[i][j] = input[i][j] + min(output[i][j+1], min(output[i+1][j], output[i+1][j+1]));
        }
    }
    int ans = output[0][0];
    delete [] output;
    return ans;
}

int main(){
    int** arr = new int* [3];
    arr[0] = new int[3];
    arr[1] = new int[3];
    arr[2] = new int[3];

    arr[0][0] = 4;
    arr[0][1] = 3;
    arr[0][2] = 2;

    arr[1][0] = 1;
    arr[1][1] = 8;
    arr[1][2] = 3;

    arr[2][0] = 1;
    arr[2][1] = 1;
    arr[2][2] = 8;

    cout << "Minimum cost is: "<< minCost(arr, 3, 3);
    delete [] arr[0];
    delete [] arr[1];
    delete [] arr[2];
    delete [] arr;
    return 0;
}
