#include<bits/stdc++.h>

using namespace std;
int modRecurrsive(int a, int b, int c){
    if(b==0) return 1;

    if(b%2==0) return modRecurrsive((a*a)%c, b/2, c);
    else return (a%c * (modRecurrsive((a*a)%c, b/2, c))%c)%c;

}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << modRecurrsive(a, b, c);
}
