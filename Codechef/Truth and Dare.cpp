#include<bits/stdc++.h>
using namespace std;

vector <int> assign(int n){
    vector <int> a;
    int x;
    for(int i = 0; i < n; i++)
    { 
        cin>>x;
        a.push_back(x);
    }
    return a;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        vector <int> tr, dr, ts, ds;
        bool result = true;

        cin >> a;
        tr = assign(a);
        cin >> b;
        dr = assign(b);
        cin >> c;
        ts = assign(c); 
        cin >> d;
        ds= assign(d);
        
        for(int v: ts){
            auto it = find(tr.begin(), tr.end(), v);
            if(*it != v) result = false;
        }

        for(int v: ds){
            auto it = find(dr.begin(), dr.end(), v);
            if(*it != v) result = false;
            
        }

        if(result == true) cout << "yes" << endl;
        else cout <<"no" << endl;
    }


}