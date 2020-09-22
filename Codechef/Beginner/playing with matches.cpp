#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]= {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int t;
    cin>>t;
    while(t--){
        int n1,n2,result=0;
        cin >>n1>>n2;
        string sum = to_string(n1+n2); 
        for(char x: sum){
            result += arr[x -'0'];
        }
        cout<<result<<endl;
    }
    return 0;
}