#include <iostream>
using namespace std;

int arr[10];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int A, B, C;
	int x; // 최대값 10^6
	cin >> A >> B >> C;
	x = A * B * C;

	while (x != 0) {
		arr[x % 10]++;
		x = x / 10;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}
}