#include <iostream>
using namespace std;
int main() {
	float r1, r2, r3, n, ans;
	cin >> r1 >> r2>> r3 >> n;
	ans = (r1/r3)*n;
	cout << int(ans) << endl;
	return 0;
}