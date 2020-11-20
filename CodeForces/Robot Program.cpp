#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--){
	    int a=0, b, c;
	    cin >> b >> c;
	    a = 2*(min(b,c)) + ( 2*(max(b, c) - min(b, c)) - ((max(b, c) - min(b, c)) !=0) );
	    cout << a;
	    cout << "\n";
	}
	return 0;
}