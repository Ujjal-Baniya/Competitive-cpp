#include<bits/stdc++.h>
using namespace std;
//Recurssive fibonnaci
int fib(int n){
    if(n==0 || n==1) return 1;
    return fib(n-1)+fib(n-2);
}

// recurrise with dp

int fibdp(int n, int* arr){
    if(n==0 || n==1) return 1;
    if(arr[n]>0) return arr[n];
    int output = fibdp(n-1, arr) + fibdp(n-2, arr);
    arr[n] = output;
    return output;
}

int fibit(int n){
    int* arr = new int[n+1];
    arr[0] = 1;
    arr[1] = 1;
    for(int i=2; i<=n; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    return arr[n];
}


int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    cout << "Factorial of given number is: " << fib(n)<<endl;

    int* arr = new int[n+1];
    for(int i=0; i<n; i++){
        arr[i]=0;
    }
    cout << "Factorial of given number is: " << fibit(n);
    return 0;
}
