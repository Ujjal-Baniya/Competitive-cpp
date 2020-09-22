#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        bool visited[1002],counted[1002],r=true;
        for(int i=0; i<1002;i++){
            visited[i]=false;
            counted[i]=false;
        }
        int count = 0, prev = -1;
        // visited[0]=true;
        // prev = visited[0];
        for(int i = 0; i < n; i++){
            if(!visited[arr[i]]){
                if(counted[count]){
                    r = false;
                    break;
                }
                visited[arr[i]]= true;
                counted[count] = true;
                count = 1;
                prev = arr[i];
            }
            else if(visited[arr[i]] and arr[i] == prev) {
                count++;
            }
            else{
                r = false;
                break;
                
            }
        }
        if(counted[count]){
           r = false; 
        } 

        if(r) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}