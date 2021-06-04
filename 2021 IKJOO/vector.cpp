#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector <int> v;
    int x;
    for(int i=0; i<5; i++){
        cin >> x;
        v.push_back(x);
    }
    cout<<v[0];
    vector<int>::iterator it =  v.begin();
    while(it!=v.end()){
        cout << *it <<" ";
        it++;
    }

}
