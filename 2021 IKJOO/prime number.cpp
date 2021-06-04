#include<iostream>
using namespace std;

bool checkPrime(int n){
    int cnt = 0;
    for(int i=0; i*i<=n; i++){
        if(n%i==0){
            if(i*i==n){
                cnt+=1;
            }
            else{
                cnt+=2;
            }
        }
    }
    if(cnt==2){
        return true;
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    int count = 0;
    for(int i=1; i<=n; i++){
        if(checkPrime(i)==true){
            count++;
        }
    }
    cout << count;
    return 0;
}
