#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main(){
    unordered_map <int, int> m;
    int arr[] ={1,2,3,1,2,1,3,4,5};
    for(int i=0; i<9; i++){
        m[arr[i]]++;
    }
    unordered_map<int,int>::iterator it = m.begin();
    while(it!=m.end()){
        cout<<it->first<<"-->"<<it->second<<"\n";
        it++;
    }

    string s;
    cout << "Enter a string: ";
    cin >> s;
    unordered_map <char, int> mc;
    for(int i=0; i<s.length(); i++){
        mc[s[i]]++;
    }
    unordered_map<char,int>::iterator it1 = mc.begin();
    while(it1!=mc.end()){
        cout<<it1->first<<"-->"<<it1->second<<"\n";
        it1++;
    }
}
