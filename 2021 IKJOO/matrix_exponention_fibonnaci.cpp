#include<bits/stdc++.h>

using namespace std;

void multiply(int A[2][2], int M[2][2]){
    int fst = A[0][0]*M[0][0] + A[0][1]*M[1][0];
    int scnd = A[0][0]*M[0][1] + A[0][1]*M[1][1];
    int trd = A[1][0]*M[0][0] + A[1][1]*M[1][0];
    int frth = A[1][0]*M[0][1] + A[1][1]*M[1][1];
    A[0][0] = fst;
    A[0][1] = scnd;
    A[1][0] = trd;
    A[1][1] = frth;
}

void power(int A[2][2], int n){
    if(n==0 || n==1) return;

    power(A, n/2);
    multiply(A, A);

    if((n%2) != 0){
        int M[2][2] = {{1, 1}, {1, 0}};
        multiply(A, M);
    }
}

int fib(int n){
    int A[2][2] ={{1, 1}, {1, 0}};
    if(n==0) return 1;

    power(A, n-1);
    return A[0][0];
}
int main(){
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Fib of given number is: "<< fib(n);
}
