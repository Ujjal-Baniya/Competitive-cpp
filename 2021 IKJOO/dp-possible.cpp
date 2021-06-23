#include<bits/stdc++.h>
using namespace std;

int countPossible(int s, int* arr){
    int* a = new int[s+1];
    a[0] = 1;
    a[1] = 1;
    for(int i=2; i<=s; i++){
        a[i] = a[i-1];
        if(arr[i-2]*10 + arr[i-1] <= 26){
            a[i] += a[i-2];
        }
    }
    int ans = a[s];
    delete [] a;
    return ans;
}
int repos(int s, int* arr){
    if(s==1 || s==0) {
        return 1;
    }
    int output = repos(s-1, arr);
    if((arr[s-2]*10 + arr[s-1])<=26) {
        output += repos(s-2, arr);
    }
    return output;
}

int main(){
    int s;
    cin >> s;
    int* arr = new int[s+1];
    for(int i=0; i<s; i++){
        cin >> arr[i];
    }
    int ans = countPossible(s, arr);
    cout <<"Number of possible combination: " << ans;
    return 0;
}
