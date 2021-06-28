#include<bits/stdc++.h>
using namespace std;

int* callAns(int** input, int*qr, int m, int n, int q){
    int cnt;
    int* ans = new int[q];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(input[i][j]==1){
                cnt++;
            }
        }
    }
}

int main(){
    int n,m;
    cin >> n >>m;
    int** arr = new int* [m];
    for(int i=0; i<m; i++){
        arr[i] = new int[n];
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j]
        }
    }
    int q;
    cin >> q;
    int* qr = new int[q];
    for(int i=0; i<q; i++){
        cin >> qr[i];
    }
    int* ans = new int[q];
    ans = callAns(arr,qr,m,n,q);
    return 0;

}
