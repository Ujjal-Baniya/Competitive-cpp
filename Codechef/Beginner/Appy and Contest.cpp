#include<bits/stdc++.h>

using namespace std;

long long int lcm(long long int a, long long int b){
    return (a*b)/__gcd(a, b);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n, a, b, k, x, y, z;
        cin >> n >> a >> b >> k;
        
        x = n/a;
        y = n/b;
        z = n/lcm(a, b);
        
        cout << (x + y - 2 * z >= k ? "Win\n" : "Lose\n");
    }
}