#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>> n;
        bool result = true;
        
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int five = 0, ten = 0, fifteen = 0;
        for(int i=0; i<n; i++){
            if(arr[i]==5){
                five++;
            }
            else if(arr[i]==10){
                ten++;
                five--;
                if(five<=-1){
                    result = false;
                    break;
                }
            }
            else{
                fifteen++;
                if(ten>=1) ten--;
                else five-=2;
                if(ten<=-1 ||five<=-1){
                    result = false;
                    break;
                }
            }
        }
        if(result) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}