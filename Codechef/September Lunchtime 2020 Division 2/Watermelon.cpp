#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	int num, sum=0;
    	for(int i=1; i<=n; i++){
    	    cin >> num;
    	    sum += (num-i);
    	}
    	if(sum!=0) cout << "NO\n";
    	else cout << "YES\n";
    }
	return 0;
}
