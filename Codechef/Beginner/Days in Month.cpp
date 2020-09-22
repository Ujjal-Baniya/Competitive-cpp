#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007
vector<string> v={"mon","tues","wed","thurs","fri","sat","sun"};
map<string,int> f;
int main()
{
    int x=0;
    for(auto i:v){
        f[i]=x++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int k;
        string p;
        cin>>k>>p;
        int cnt[7]={0};
        int id=f[p];
        for(int i=1;i<=k;i++){
            cnt[id]++;
            id++;
            if(id==7){
                id=0;
            }
        }
        for(int i=0;i<7;i++){
            cout<<cnt[i]<<" ";
        }
        cout<<endl;
    }
}