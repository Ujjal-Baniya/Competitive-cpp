#include<iostream>
#include<map>
#include<string>

using namespace std;

char nonRepeating(string s){
    map <char, int> m;
    for(auto each: s){
        m[each]++;
    }
    map <char, int>::iterator it = m.begin();
    while(it != m.end()){
        if(it->second==1) return it->first;
        it++;
    }
    return s[0];
}

int main(){
    string s;
    cin >> s;

    cout << nonRepeating(s);
}
