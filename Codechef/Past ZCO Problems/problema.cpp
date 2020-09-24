#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        vector <ll> s, v;
        ll x;
        int n;
        cin >> n;
        for(int i=0; i<n;i++){
            cin >> x;
            s.push_back(x);
        }
        bool res = true;
        int cnt = 0, limit = (n*(n-1)/2)-1;
        for(int i=0; i<n; i++){
            if(cnt<limit){
                for(int j=i+1; j<n; j++){
                    if(cnt>limit){
                        res = false;
                        break;
                    }
                    if(s[j]<s[i]) cnt++;
                }
            }
            else {
                res = false;
                break;
            }
        }
        if(res) cout<<"YES\n";
        else cout <<"NO\n";
    }
}

