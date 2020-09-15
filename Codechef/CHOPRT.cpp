#include <iostream>
using namespace std;

int main() {
	int n1, n2, t;
	cin>>t;
	while(t--){
	    cin >> n1 >> n2;
	    if(n1 > n2) {
	        cout<<">"<<endl;
	        
	    }
	    else if(n1 < n2) cout<<"<"<<endl;
	    else cout<<"="<<endl;
	}
	return 0;
}
