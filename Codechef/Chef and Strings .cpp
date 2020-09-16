#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>> n;
        
        long long result=0;
        long long int arr[n];
        
        for(int i = 0; i<n; i++) cin>>arr[i];
        for(int i = 1; i<n; i++) result += abs(arr[i]-arr[i-1])-1;
        
        cout<<result<<endl;
    }
}   