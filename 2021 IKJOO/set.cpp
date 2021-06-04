#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    set<int>s;
    int x;
    for(int i=0; i<5; i++){
        cin >> x;
        s.insert(x);
    }
    auto it = s.begin();
    while(it!=s.end()){
        cout<<*it<<" ";
        it++;
    }
    if(s.find(6)==s.end()) cout<<"\nNot Found";
    else cout<<"\nFound";
}
