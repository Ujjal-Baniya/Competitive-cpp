#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    for(int i=0 ; i<n; i++){
	        cout<<"1";
	        if(i!=n-1) cout<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
