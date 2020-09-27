#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int n,a,melted;
	cin>>n;
	vector<long long int> temp;
	vector<long long int> soup;
	
	for(int i=0;i<n;i++){
	    cin>>a;
	    soup.push_back(a);
	}
	
	for(int i=0;i<n;i++){
	    cin>>a;
	    temp.push_back(a);
	}
	for(int i=0;i<n;i++){
	    long long int temperature=temp[i];
	    melted=0;
	    for(int j=0;j<=i;j++){
	        long long int litre=soup[j];
	        if(litre>0 && temperature>litre){
	            melted+=litre;
	            soup[j]=litre-temperature;
	        }
	        else if(litre>0 &&litre>temperature){
	            melted+=temperature;
	            soup[j]=litre-temperature;
	        }
	    }
	    cout<<melted<<" ";
	}
	
	return 0;
}