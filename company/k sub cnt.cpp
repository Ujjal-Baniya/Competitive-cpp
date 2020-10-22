#include <iostream>
using namespace std;

int main() {
	int n,k;
	cin >> n >> k;
	int a[n];
	for(int i=0; i<n; i++) cin >> a[i];
	int j = 0, sm, temp;
    while(j<n){
        sm = a[j];
        for(int i=j+1; i<=j+k; i++){
            if(a[i]<sm){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        cout <<a[j] << "\n";
        j++;
    }
	return 0;
}
