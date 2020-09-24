#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
        ll n;
        cin >> n;
        ll arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        long long int ans = 0, m = -1;
        for(int i=0; i<n; i++){
            ans = arr[i]*(n-i);
            if(m<ans) m=ans;
        }
        cout<< m<<endl;
}