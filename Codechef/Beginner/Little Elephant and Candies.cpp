#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int c, sum=0;
        int n, x;
        cin >> n >> c;
        for(int i=0; i<n; i++) 
        {
            cin >> x;
            sum += x;
        }
        if(sum<=c) cout<<"Yes";
        else cout<<"No";
        cout<<endl;
    }
}