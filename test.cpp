#include<bits/stdc++.h>
using namespace std;

int main(){
    map <char, int> m;
    int n,s;
    cin >>n;
    s= (n*(n-1)/2);
    string t = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(char each: t) m[each] = 0;
    while(s--){
        char A, B;
        string s;
        cin >> A >> B >> s;
        if(s[0]>s[2]) m[s[0]] += 3;
        else if(s[0]<s[2]) m[s[2]] +=3;
        else{
            m[s[0]]++;
            m[s[1]]++;
        }
        
        int ma=0,j=1;
        char c;
        for(auto x= m.begin(); x!=m.end(); x++){
            if(j==n) break;
            if(x->second > ma){
                ma = x->second;
                c = x->first;
            }
            j++;
        }
        cout << c << endl;
        cout << ma << endl;
    }
}