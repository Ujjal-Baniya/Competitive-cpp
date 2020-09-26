#include<iostream> 
using namespace std; 

void getZarr(string str, int Z[]); 

void search(string text, string pattern) 
{ 
	string concat = pattern + "$" + text; 
	int l = concat.length(); 

	int Z[l]; 
	getZarr(concat, Z); 

	for (int i = 0; i < l; ++i) 
	{ 
		if (Z[i] == pattern.length()) 
			cout << "Pattern found at index "
				<< i - pattern.length() -1 << endl; 
	} 
} 

void getZarr(string str, int Z[]) 
{ 
	int left = 0, right = 0, i, n, k;
    n = str.length();
    for(int i = 1; i < n; i++){
        if(i>right){
            left = right = i;
            while(right < n and str[right-left]==str[right]) right++;
            Z[i] = right - left;
            right--;
        }
        else{
            k = i-left;
            if(Z[k] < right-i+1) Z[i] = Z[k];
            else{
                left = i;
                while(right < n and str[right-left]==str[right]) right++;
                Z[i] = right - left;
                right--;
            }
        }
    }
} 

int main() 
{ 
	string text, pattern;
    cin >> text >> pattern;
	search(text, pattern); 
	return 0; 
} 
