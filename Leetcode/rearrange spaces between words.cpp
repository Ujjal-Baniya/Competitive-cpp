#include<bits/stdc++.h>
class Solution {
public:
    string reorderSpaces(string text) {
        string arr[100];
        bool yee = false;
        string txt = text;
        text +=" ";
        string word = "";
        int cnt = 0, i = 0;
        for(auto x: text){
            if(x == ' ') {
                cnt++;
                if(yee) {
                    arr[i]=word;
                    i++;
                    yee = false;
                    word = "";
                }
            }
            else{
                word += x;
                yee = true;
            }
        }
        cnt--;
        string ans = "";
        if(cnt==0 || i==1){
            if(cnt==0) ans += txt;
            else{
                string stuf(cnt, ' ');
                ans += (arr[0] + stuf);
            }
        }
        else{
            int x = (int) cnt/(i-1);
            for(int j = 0; j<i; j++){
                string stuf(x, ' ');
                if(j==i-1){
                    string stuff(cnt-(i-1)*x, ' ');
                    ans += (arr[j]+stuff);
                }
                else 
                {
                    ans += (arr[j]+stuf);
                }
            }
        }
            return ans;
    }
};