#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
            int a[1000000+5];
            int n;
            cin>>n;
            for (int i=0; i<n; i++)
            {
                cin>>a[i];
            }
            bool can=false;
            for (int i=1; i<n; i++)
            {
                if (a[i]>=a[i-1])
                {
                    can=true;
                    break;
                }
            }
            if (can) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
    }
}