#include<bits/stdc++.h>

using namespace std;

int power(int a,int n){
    if(n==1) return a;
    return a*power(a,n-1);
}
int main(){
    int n;
    cin >> n;
    int ans = power(10,n);
    cout << ans;
}
