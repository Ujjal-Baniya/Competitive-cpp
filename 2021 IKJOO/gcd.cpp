#include<iostream>
using namespace std;
class Triplet{
public:
    int x;
    int y;
    int gcd;
};

Triplet extendedEuclid(int a,int b){
    if(b==0){
        Triplet myAns;
        myAns.gcd = a;
        myAns.x = 1;
        myAns.y = 0;
        return myAns;
    }
    Triplet smallAns = extendedEuclid(b, a%b);

    Triplet myAns;
    myAns.gcd = smallAns.gcd;
    myAns.x = smallAns.y;
    myAns.y = (smallAns.x -((a/b)*(smallAns.y)));
    return myAns;

}
int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int main(){
    int a,b;
    cin >> a >> b;
    if(a>b) cout << gcd(a, b);
    else cout << gcd(b, a);
    Triplet ans;
    ans = extendedEuclid(a, b);
    cout <<"GCD : "<< ans.gcd;
    cout <<"\nX : "<< ans.x;
    cout <<"\nY : "<< ans.y;
    return 0;
}
