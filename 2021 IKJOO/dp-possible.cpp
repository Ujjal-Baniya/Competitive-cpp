#include<bits/stdc++.h>
using namespace std;

int countPossible(int size, int* arr){
    int* a = new int[size+1];
    a[0] = 1;
    a[1] = 1;
    for(int i=2; i<=size; i++){
        a[i] = a[i-1];
        if((arr[i-2]*10 + arr[i-1])<=26){
            a[i] += a[i-2];
        }
    }
    int ans = arr[size];
    delete [] arr;
    return ans;
}

int main(){
    int size;
    cin >> size;
    int* arr = new int[size+1];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    int ans = countPossible(size, arr);
    cout <<"Number of possible combination: " << ans;
    return 0;
}
