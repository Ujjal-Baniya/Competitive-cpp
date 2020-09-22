#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    
	    long long int sum = 0, count = 0;
	    for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                sum += (1+count);
                count++;
            }
        }
	    cout<< sum << "\n";
	}
	return 0;
}
