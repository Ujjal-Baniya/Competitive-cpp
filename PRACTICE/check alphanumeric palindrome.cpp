#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, cleaned="";
    bool val = true;
    cin >> s;
    int i = 0, n = s.length();

    for(char each: s){
       if(isalnum(each)){
        	cleaned += each;
        }
    }
    cout << cleaned;
    n = cleaned.length();
    for(int i=0; i<n; i++){
        if(cleaned[i]!=cleaned[n-1-i]){
            val = false;
            break;
        }
    }
    if(val) cout<<"YES";
    else cout<<"NO";
    return 0;
}