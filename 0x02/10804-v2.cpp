#include <iostream>
using namespace std;

int num[21];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 1; i < 21; i++) {
		num[i] = i;
	}

	for (int i = 0; i < 10; i++) {
		int a, b;
		cin >> a >> b;
		reverse(num + a, num + b + 1);
	}

	for (int& n : num) {
		cout << n << " ";
	}
}