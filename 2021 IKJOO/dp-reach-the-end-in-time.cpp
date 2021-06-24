#include<bits/stdc++.h>
using namespace std;

void ifPossible(char** input, int m, int n, int maxTime) {
    int** output = new int* [m];
    for(int i=0; i<m; i++){
        output[i] = new int[n];
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(input[i][j]=='#'){
                output[i][j] = -1;
            }
            else{
                output[i][j] = 0;
            }
        }
    }
    output[m-1][n-1] = 0;
    bool a = false;
    int ans=1;
    for(int i=m-2; i>=0; i--){
        if(a){
            output[i][n-1] = -1;
            continue;
        }
        if(output[i][n-1]==-1){
            a = true;
            continue;
        }
        output[i][n-1] = ans;
        ans++;
    }
    a = false;
    ans = 1;
    for(int i=n-2; i>=0; i--){
        if(a){
            output[m-1][i] = -1;
            continue;
        }
        if(output[m-1][i]==-1){
            a = true;
            continue;
        }
        output[m-1][i] = ans;
        ans++;
    }
    for(int i=m-2; i>=0; i--){
        for(int j=n-2; j>=0; j--){
            if(output[i][j]==-1){
                continue;
            }
            if(output[i+1][j] == -1 && output[i][j+1] == -1){
                output[i][j] = -1;
            }
            else if(output[i+1][j] == -1){
                output[i][j] = output[i][j+1] + 1;
            }
            else if(output[i][j+1] == -1){
                output[i][j] = output[i+1][j]+1;
            }
            else{
                output[i][j] = min(output[i+1][j],output[i][j+1]);
            }
        }
    }
    if(maxTime>=output[0][0] && output[0][0]!=0){
        cout << "Minimum cost is: " <<output[0][0];
        cout << "\n YES IT IS POSSIBLE YOHOHOHOHO \n";
    }
    else{
        cout << "\n NOPE IT IS NOT POSSIBLE YOHOHOHOHO \n";
    }

}
int main(){
    char** arr = new char* [3];
    arr[0] = new char[4];
    arr[1] = new char[4];
    arr[2] = new char[4];

    arr[0][0] = '.';
    arr[0][1] = '.';
    arr[0][2] = '#';
    arr[0][3] = '#';

    arr[1][0] = '#';
    arr[1][1] = '.';
    arr[1][2] = '#';
    arr[1][3] = '#';

    arr[2][0] = '#';
    arr[2][1] = '.';
    arr[2][2] = '.';
    arr[2][3] = '.';

    int maxTime = 5;
    ifPossible(arr, 3, 4, maxTime);
    return 0;
}
