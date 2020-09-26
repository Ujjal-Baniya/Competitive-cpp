#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(s.size()==0)return 0;
     
        vector <char> v(326,0);
        int i, j;
        i=0; j=0;
        v[s[0]]++;

        int ans = 1;
        while(j!=n-1){
            if(v[s[j+1]] == 0) j++,  v[s[j]]++, ans = max(ans, j-i+1);
            else v[s[i]]-- , i++;
        }
        return ans;
    }

int main(){
    string s;
    cin >> s;
    cout << lengthOfLongestSubstring(s) << endl;
}