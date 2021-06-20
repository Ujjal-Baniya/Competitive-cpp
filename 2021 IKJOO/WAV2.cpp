#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q, r;
    cin >>n>>q;
    vector<int>v;
    for(int i=0; i<n; i++){
        cin >> r;
        v.push_back(r);
    }
    sort(v.begin(), v.end());
    while(q--){
        cin >> r;
        auto re = lower_bound(v.begin(), v.end(), r);
        int rem = re - v.begin();
        if(rem==0) cout<<"POSITIVE\n";
        else if(v[rem]==r) cout<<"0\n";
        else{
            if((n-rem)%2==0) cout<<"POSITIVE\n";
            else cout<<"NEGATIVE\n";
        }
    }
}
