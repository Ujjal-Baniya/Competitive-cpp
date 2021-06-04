#include<iostream>
#include<set>
#include<vector>


using namespace std;

vector<int> removeDuplicates(vector<int> v){
    set<int>s;
    vector<int>r;
    for(auto each: v){
        if(s.find(each)==s.end()){
            s.insert(each);
            r.push_back(each);
        }
    }
    return r;
}

int main(){
    vector<int>v,ans;
    for(int i=0; i<5; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    ans = removeDuplicates(v);
    for(auto each: ans){
        cout << each <<" ";
    }
}
