#include <bits/stdc++.h>
using namespace std;
int P[111111];
int C[111111];
int main() {
    int T;
    cin >> T;
    while(T--) {
        int X, Y, K, N;
        cin >> X >> Y >> K >> N;
        bool found = false;
        for (int i = 0; i < N; i++) {
            cin >> P[i] >> C[i];
        }
        for (int i = 0; i < N; i++) {
            if (P[i] >= X - Y && C[i] <= K) {
                found = true;
                break;
            }
        }
        cout << (found ? "LuckyChef" : "UnluckyChef") << '\n';
    }
    
}