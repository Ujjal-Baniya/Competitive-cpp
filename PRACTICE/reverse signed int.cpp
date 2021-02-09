#include<bits/stdc++.h>
using namespace std;
int reverse_integer(int n){
    int rem = 0;
    while (n!=0)
    {
        rem = rem*10 + n%10;
        n = n/10;
    }
    return rem;   
}
int main(){
    signed int n;
    cin >> n;
    cout << reverse_integer(n);
}