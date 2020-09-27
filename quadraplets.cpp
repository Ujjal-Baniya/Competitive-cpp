/*
given an array and a number, find a quadruplet that adds up to the given number.
quadruplet --> set of 4 numbers

6 --> n
2 6 4 5 8 10 --> arr
23 --> num
--> (2,5,6,10)

*/
#include <bits/stdc++.h>
using namespace std;

// map --> nextArr -> the indices it's made up of
vector<int> findQuad(vector<int> a,int s)
{
    int n =a.size();
  map<int,pair<int,int>> m;
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      m[a[i]+a[j]]=make_pair(i,j);
    }
  }
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      int complement = s-a[i]+a[j];
      if(m.find(complement)!=m.end())
      {
        if(m[complement].first!=i && m[complement].second!=i && m[complement].first!=j && m[complement].second!=j)// check all 4, check if not overlapping, indices k lotulul
          return {a[i],a[j],a[m[complement].first],a[m[complement].second]};
      }
    }
  }
  return {};
}

int main()
{
    int n,num; 
    vector <int> v;
    cin >> n;
    for(int i=0; i<n; i++){
      cin >> v[i];
    }
   cin >> num;
   vector <int> quad;
    quad = findQuad(v,n);
   for(int each: quad){
       cout<< each << " ";
   }
}
