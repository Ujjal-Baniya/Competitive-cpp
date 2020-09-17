#include<bits/stdc++.h>
using namespace std;

#define ll long long
    

int main(){
    ll int t;
    cin>>t;
    
    while(t--){
        ll int n, sum=0,x;
        cin >> n;
        vector<ll int> v(n);
        
        for(int i = 0; i<n; i++){
            cin >> v[i];
            sum += v[i];
        }
        
        auto mean =(long double)sum/n;
        auto elem = (sum - (n-1) * mean);
        auto it = find(v.begin(), v.end(), elem);
        
        if(it!=v.end()) cout<<distance(v.begin(),it)+1;
        else cout<<"Impossible";
        cout<<endl;
    }
}