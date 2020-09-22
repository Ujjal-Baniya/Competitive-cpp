#include <bits/stdc++.h>
 
using namespace std;
 
int solve1(string s, int k) {
	if(k < 0) {
		return 1e7;
	}
	
	vector <int> v;
 
	int cnt = 0;
 
	for(char i:s) {
		if(i == '1') {
			if(cnt > 0)
				v.push_back(cnt);
 
			cnt = 0;
		} else {
			cnt++;
		}
	}
 
	sort(v.begin(), v.end());
 
	while(k > 1 && v.size() > 0) {
		v.pop_back();
		k -= 2;
	}
 
	int ans = 0;
 
	for(int i:v)
		ans += i;
 
	return ans;
}
 
int solve(string s, int k) {
	string s1;
	bool flag = true;
	int cnt1,cnt2;
	cnt1 = cnt2 = 0;
 
	for(char i:s) {
		if(flag && i == '0') {
			cnt1++;
			continue;
		}
		else {
			flag = false;
			s1.push_back(i);
		}
	}
 
	while(s1.back() == '0') {
		cnt2++;
		s1.pop_back();
	}
 
	return min(solve1(s1, k) + cnt1 + cnt2, min(solve1(s1, k-1) + cnt1, min(solve1(s1, k-1) + cnt2, solve1(s1, k-2))));
 
}
 
int main() {
	int t;
	cin >> t;
 
	while(t--) {
		int n,k;
		cin >> n >> k;
 
		string s;
		cin >> s;
 
		int cnt = 0;
 
		for(char i:s) {
			if(i == '1')
				cnt++;
		}
 
		if(cnt == n || cnt == 0) {
			cout << 0 << endl;
		} else {
			cout << solve(s, k) << endl;
		}
	}
}