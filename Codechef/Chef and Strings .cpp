#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, arr[n], result=0;
        cin>> n;
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        for(int i = 0; i<n; i++){
            if(i+1==n) continue;
            else{
                result += abs(arr[i]-arr[i+1])-1;
                
            }
        }
        cout<<result<<endl;
    }
}   