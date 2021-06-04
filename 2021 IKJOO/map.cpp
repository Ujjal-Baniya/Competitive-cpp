#include<iostream>
#include<map>

using namespace std;

int main(){
    map <int, int> m;
    int arr[] ={1,2,3,1,2,1,3,4,5};
    for(int i=0; i<9; i++){
        m[arr[i]]++;
    }
    map<int,int>::iterator it = m.begin();
    while(it!=m.end()){
        cout<<it->first<<"-->"<<it->second<<"\n";
        it++;
    }

    map<char, int> mc;
    int n;
    char c;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> c;
        mc[c]++;
    }
    map<char, int>::iterator it1 = mc.begin();
    while(it1!=mc.end()){
        cout<<it1->first<<"-->"<<it1->second<<"\n";
        it1++;
    }
}
