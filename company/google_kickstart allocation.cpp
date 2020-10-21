#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,j=0;
    cin >> t;
    while(t--)
    {
      int n,c;
      int cnt=0, sum=0;
      cin >> n >> c;
      int v[100000];
      for(int i=0; i<n; i++) 
      {
          cin >>v[i];
      }
      sort(v,v+n);
        for(int i=0; i<n; i++) {
		if(c>=v[i]) {
			c-=v[i];
			cnt++;
		}
	}
        j++;
        cout <<"Case #"<<j <<": " <<cnt << endl;
    }
    return 0;
}