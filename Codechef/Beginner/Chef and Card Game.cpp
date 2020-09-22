#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        
        int n;
        long long chef = 0,morty = 0;
        cin >> n;
        string a , b;
        
        for(int i = 0; i<n; i++){
            long long int A = 0, B = 0;
            cin >> a >> b;

            for(char x: a) A += x -'0';
            for(char x: b) B += x -'0';
            
            if(A>B) chef += 1;
            else if(B>A) morty += 1;
            else{
                chef +=1;
                morty +=1;
            }
        }


        if(chef>morty) cout<<"0 "<<chef<<endl;
        else if(chef<morty) cout<<"1 "<<morty<<endl;
        else cout<<"2 " <<chef<<endl;
    }
}