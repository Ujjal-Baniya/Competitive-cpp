#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,x,y,k,X;
	    bool flag = true;
	    cin >> n >> k >> x >> y;
	    if(x==y) cout<<"YES\n";
	    else{
    	    X=(x+k)%n;
            while(X!=x)
            {
                if(X == y){
                    cout<<"YES"<<endl;
                    flag = false;
                }
                X=(X+k)%n;
            }
        if(flag)cout<<"NO"<<endl;
	    }
	}
	return 0;
}
