#include <iostream>
using namespace std;

int main() {
	int n , t;
	cin>> t;
	while(t--){
	    cin>>n;
	    int sum = 0;
	    for(int i = 1; i <=n; i+=2){
	        sum += (n-i+1)*(n-i+1);
	    }
	    std::cout << sum << std::endl;
	}
	return 0;
}
