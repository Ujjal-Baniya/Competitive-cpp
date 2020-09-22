#include<bits/stdc++.h>
using namespace std;

string partner(int n){
    int x;
    if(n%8 == 7) return to_string(n+1) + "SU";
    else if(n%8 == 0) return to_string(n-1) + "SL";
    else{
        x = n % 8;
        string val;
        if(x == 1 || x==4) val ="LB";
        else if(x == 2 || x==5) val= "MB";
        else if(x == 3 || x==6) val= "UB";
        if(x>3) return to_string(n-3) + val;
        else return to_string(n+3) + val;
    }
}

int main(){
    int n,t;
    cin>>t;
    while(t--){
        cin >> n;
        cout<< partner(n)<<endl;
    }
}
