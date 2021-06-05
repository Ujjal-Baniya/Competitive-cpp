#include<iostream>

using namespace std;

bool checkPrime(int n){
    int cnt=0;
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    for(int i=2; i<=n; i++){
        if(checkPrime(i) == true){
            cnt++;
        }
    }
    cout <<"Number of primes upto "<< n <<" is "<<cnt<<".";
    return 0;
}
