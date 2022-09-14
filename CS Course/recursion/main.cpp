#include <iostream>

using namespace std;

int sum(int n) {
	if (n < 10)
		return n;
	return n % 10 + sum(n / 10);
}

int fact(int n) {
	if (n == 0 || n == 1)
		return 1;
	return n * fact(n - 1);
}

int main() {
	int x = 12356;
	cout << sum(x) << endl;
	int y = 5;
	cout << fact(y) << endl;
}
