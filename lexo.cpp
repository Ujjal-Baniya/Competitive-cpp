#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	string s = "abcdefghijklmnopqrstuvwxyz";
	std::vector<char> v;
	int x;
	for(int i=0; i<26; i++){
	    cin >> x;
	    v[s[i]] = x;
	}
	
	int sum;
	cin >> sum;
	int i = 25;
	int rem;
	string ans ="";
	auto it = min(v.begin(), v.end());
	while(i!=0 && sum>0){
	    rem = sum/v[i];
	    sum -= rem * v[i];
	    if(rem<1){
	        rem--;
	    }
	    if(rem>0){
	        string stuff(rem, s[i]);
	        s += stuff;
	    }
	    i--;
	}
	return 0;
}
