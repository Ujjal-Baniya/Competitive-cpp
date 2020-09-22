#include <iostream>
using namespace std;

int main() {
	int n;
	std::cin >> n;
	if(n%4==0) n++;
	else n--;
	std::cout << n << std::endl;
	return 0;
}
