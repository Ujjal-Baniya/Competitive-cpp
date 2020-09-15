#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int count = 0, result=0, n;
        cin >> n;
        while(sqrt(n)!=n){
            result = (int) sqrt(n);
            count++;
            n = n - result*result;
        }
        if(n==1){
            count+=1;
        }
        cout<<count<<endl;
    }
    

}