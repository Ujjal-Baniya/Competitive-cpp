
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	vector<int> a(n);
    	bool res= false;
    	for(int i=0; i<n; i++){
    	    cin >> a[i];
    	    if(a[i]!=(i+1) && (((i+1)%a[i]!=0) || ((i+1)%a[i]==0 && (i+1)/a[i]>n))){
    	            res = true;
    	        }
    	}
    	if(res) cout<<"NO\n";
    	else cout<<"YES\n";
    }
    
}