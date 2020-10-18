#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    bool f = false;
	    char B= s[n-1];
	    for(int i=0; i<n-1; i++){
	        if(s[i]==B){
	            f = true;
	            break;
	        } 
	    }
	    if(f) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
