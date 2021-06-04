#include<iostream>
#include<cmath>
using namespace std;

bool checkPrime(int n){
    double r = sqrt((double) n);
    cout << r;
    int cnt=0;
    for(int i=0; i<r; i++){
        if(i*i==n) cnt+=1;
        else if(n%i==0) cnt+=2;
        if(cnt==2) return true;
    }
}

int main(){
    int n,cnt=0;
    cin >> n;
    for(int i=0; i<=n; i++){
        if(checkPrime(i)) cnt++;
    }
    cout << cnt;
}
