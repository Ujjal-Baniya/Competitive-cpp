#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        cout << s[0];
        for(int i=1; i<n-1; i++){
            cout<< s[i];
            i++;
        }
        cout<< s[n-1] <<"\n";
    }
    
}