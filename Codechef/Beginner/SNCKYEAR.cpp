#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> arr;
    arr ={ 2010, 2015, 2016, 2017 , 2019 };
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>> n;
        auto it = find(arr.begin(), arr.end(), n);
        if(it!=arr.end()) cout<<"HOSTED"<<endl;
        else cout<<"NOT HOSTED"<<endl;
    }
}    
