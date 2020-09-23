#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >>t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int end = n/2, end1 = end;
        if(n%2) end1++;

        string first, second;
        first = s.substr(0,end);
        second = s.substr(end1,n);
        
        sort(first.begin(),first.end());
        sort(second.begin(),second.end());
        if(first == second){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        } 
    }
    return 0;
}