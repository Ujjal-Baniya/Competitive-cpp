#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--){
	   vector<int> a, b ;
	   bool ans = true;
	    int n, c;
	    cin >> n >> c;
	    for(int i=0; i<n; i++){
	        int x;
	        cin >> x;
	        a.push_back(x);
	    }
	    for(int i=0; i<n; i++){
	        int x;
	        cin >> x;
	        b.push_back(x);
	    }
	    sort(a.begin(), a.end());
	    sort(b.begin(), b.end(), std::greater<>());
	    for(int i=0; i<n; i++){
	        if(a[i]+b[i]>c){
	            ans = false;
	            break;
	        }
	    }
	    if(ans) cout<<"Yes\n";
	    else cout<<"No\n";
	}
	return 0;
}