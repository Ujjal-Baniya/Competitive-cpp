#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n,k,sum,i,j;
    cin >> n >> k;
    
	long long int a[1000001];
	for(j=0;j<k;j++)
        a[j]=1;
    for(j=k;j<n;j++){
        sum=0;
        for(i=j-k;i<j;i++){
            sum+=a[i];
        }
        a[j]=sum;
        a[j]%=1000000007;
       }
	cout<< a[n-1] <<endl;
	return 0;
}
