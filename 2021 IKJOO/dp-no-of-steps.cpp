#include<bits/stdc++.h>
using namespace std;

int countSteps(int n) {
    int* output = new int[n+1];
    for(int i=0; i <= n; i++){
        output[i] = 0;
    }
    output[0] = 1;
    output[1] = 1;
    output[2] = 2;

    for(int i=3; i<=n; i++) {
        output[i] = output[i-1] + output[i-2] + output[i-3];
    }
    cout<<endl;
    int ans = output[n];
    delete []output;
    return ans;
}

int main(){
    int n;
    cin >> n;
    int ans = countSteps(n);
    cout << "Number of possible ways to get "<<n<<" steps is: "<<ans;
}
