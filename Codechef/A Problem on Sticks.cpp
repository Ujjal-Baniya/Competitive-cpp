#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int t;
    cin >>t;
    while(t--){
        set <int> s;
        int n;
        cin >> n;
        
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            if(x>0) s.insert(x);
        }
        
        cout << s.size() << "\n";
    }
}