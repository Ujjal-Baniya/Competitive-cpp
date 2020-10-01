#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
    	int n,first;
    	cin >> n;
    	vector <int> a(n), b(n), c(n);
    	for(int i=0; i<n; i++) {
			cin >> a[i];
			cout << a[i];
		}
    	for(int i=0; i<n; i++) {
			cin >> b[i];
		}
    	for(int i=0; i<n; i++) {
			cin >> c[i];
		}
    	first = a[0];
    	cout << first << " ";
    	int prev = first;
    	for(int i=1; i<n; i++){
    	    if(i==n-1){
    	        if(a[i]!= first && a[i] != prev){
    	           cout << a[i] << endl;
    	           break;
    	        } 
    	        else if(b[i]!= first && b[i] != prev){
    	           cout << b[i] << endl; 
    	           break;
    	        } 
    	        else if(c[i]!= first && c[i] != prev){
    	            cout << c[i] << endl;
    	            break;
    	        } 
    	    }
    	    if(a[i]!= prev){
    	        cout << a[i] <<" ";
    	        prev = a[i];
    	    } 
    	    else if(b[i]!= prev){
    	        cout << b[i] <<" ";
    	        prev = b[i];
    	    } 
    	    else if(c[i]!= prev){
    	        cout << c[i] <<" ";
    	        prev = c[i];
    	    } 
    	}
    }
	return 0;
}
