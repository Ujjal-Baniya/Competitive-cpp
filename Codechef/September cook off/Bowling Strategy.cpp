#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n,k,l;
	    cin >> n >> k >> l;
	    if((k==1 && n!=1) || (k*l<n)) {
	       cout<< "-1";
	    }
	    else{
	        int i=0, j=0;
	        while(i<n){
	            for(j=1; j<=k; j++){
	                if(i==n) break;
	                cout<<j<<" ";
	                i++;
	            }
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
