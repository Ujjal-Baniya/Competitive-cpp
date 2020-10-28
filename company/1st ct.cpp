#include<bits/stdc++.h>
using namespace std;

int main()
{
 map<char,int> m;
 set<char> se = {'a','e','i','o','u'};
 string s;
 getline(cin,s);
 string ans = "";
 for(char c: s)
 {
  if(se.find(c) != se.end() )
   m[c]++;
  else ans+=c;
 }
 for(char c: se)
  cout<<c<<":"<<m[c]<<endl;
 cout<<ans;
 return 0;
}