#include<bits/stdc++.h>
#define ll long long int
using namespace std;

#define MAXN 100000
int arr[MAXN+10];
int B[MAXN+10];
int main()
{
    int t;  
    cin>>t;
    while(t--)
    {
        ll sum = 0,t = 0,i=0,j=0;
        int n;
        cin>>n;

        for(i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i = 0;i<n;i++) B[i] = 1;
        for(i = 0;i < n ;i++)
        {
            if(i != 0)
            {
            if(arr[i] >= arr[i-1]) B[i] = B[i] + B[i-1];
            }
        sum = sum + B[i];
        }
        cout<<sum<<endl;
    }
return(0);
}