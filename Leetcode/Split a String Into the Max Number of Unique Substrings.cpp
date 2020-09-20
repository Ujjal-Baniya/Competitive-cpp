#include<bits/stdc++.h>
using namespace std;

void maxUniqueSplit(string s){
        set <string> se;
        string word="";
        int n = s.length();
        for (int len = 1; len <= n; len++)  
        {     
            for (int i = 0; i <= n - len; i++)  
            {   
                int j = i + len - 1;             
                for (int k = i; k <= j; k++)  
                    word += s[k];
                se.insert(word);
                word="";
            } 
        }
        for(auto each:se) cout <<each<<" ";
        // return s.size();
    }

int main(){
    string s = "ababccc";
    maxUniqueSplit(s);
}