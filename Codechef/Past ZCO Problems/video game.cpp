#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll n,h;
	cin >> n >> h;
	ll a[n],k[100000001];
	for(int i=0; i<n; i++) cin >> a[i];
	ll ind = 0;
	while(true){
	    cin >> k[ind];
	    if(k[ind]==0) break;
	    ind++;
	}
	bool incrane = false;
	int j = 0;
	for(int i=0; i<ind; i++){
	    if(k[i]==1){
	        if(j>0) j--;
	    }
	    else if(k[i]==2){
	        if(j<n-1) j++;
	    }
	    else if(k[i]==3){
	        if(a[j]>0 and !incrane) {
	            a[j]--;
	            incrane = true;
	        }
	    }
	    else if(k[i]==4){
	        if(a[j]<h and incrane){
	            incrane = false;
	            a[j]++;
	        }
	    }
	}
	for(int each: a) cout<< each <<" ";
	cout<<"\n";
	return 0;
}
