#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    std::set<long long int>s;
	    long long int x;
	    for(int i=0; i<n; i++){
	        cin >> x;
	        s.insert(x);
	    }
	    if(n-s.size()>0) cout<<"YES";
	    else cout<<"NO";
	    cout<<endl;
	}
	return 0;
}
