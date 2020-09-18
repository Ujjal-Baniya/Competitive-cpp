#include<bits/stdc++.h>
using namespace std;
vector <int> inp(){
    vector <int> v;
    int x;
    for(int i=0;i<3;i++)
    {
        cin >> x;
        v.push_back(x);
    }
    return v;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        bool result = false;
        vector <int> a=inp(), b=inp(), c = inp();
        if((a[0]==b[0] and a[1]==b[1] and a[2]==b[2]) || (c[0]==b[0] and c[1]==b[1] and c[2]==b[2]) || (c[0]==a[0] and c[1]==a[1] and a[2]==a[2])) result = false;
        else if((a[0]>=b[0] and a[1]>=b[1] and a[2]>=b[2])|| (a[0]<=b[0] and a[1]<=b[1] and a[2]<=b[2]) )
        {
            // cout<<"a>b or a<b"<<endl;
            if((a[0]>=c[0] and a[1]>=c[1] and a[2]>=c[2] || a[0]<=c[0] and a[1]<=c[1] and a[2]<=c[2]) and (b[0]>=c[0] and b[1]>=c[1] and b[2]>=c[2] || b[0]<=c[0] and b[1]<=c[1] and b[2]<=c[2]) ){
                // cout<<"a>c or a<b and c>b or c<b"<<endl;
                result = true;
            }
        }
        else if((c[0]>=b[0] and c[1]>=b[1] and c[2]>=b[2]) || (c[0]<=b[0] and c[1]<=b[1] and c[2]<=b[2]))
        {
            if((c[0]>=a[0] and c[1]>=a[1] and c[2]>=a[2] || c[0]<=a[0] and c[1]<=a[1] and c[2]<=a[2]) and (b[0]>=a[0] and b[1]>=a[1] and b[2]>=a[2] || b[0]<=a[0] and b[1]<=a[1] and b[2]<=a[2]) ){
                result = true;
            }
        }
        else if((c[0]>=a[0] and c[1]>=a[1] and c[2]>=a[2]) || (c[0]<=a[0] and c[1]<=a[1] and c[2]<=a[2]))
        {
            if((c[0]>=b[0] and c[1]>=b[1] and c[2]>=b[2] || c[0]<=b[0] and c[1]<=b[1] and c[2]<=b[2]) and (b[0]>=a[0] and b[1]>=a[1] and b[2]>=a[2] || b[0]<=a[0] and b[1]<=a[1] and b[2]<=a[2]) ){
                result = true;
            }
        }
        if(result) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}