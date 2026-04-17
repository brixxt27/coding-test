#include <iostream>
using namespace std;

int arr[10];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	while (n > 0) {
		if (n % 10 == 6) {
			arr[9]++;
		} else {
			arr[n % 10]++;
		}
		n /= 10;
	}

	int max = 0;
	for (int i = 0 ; i < 10; i++) {
		if (i == 6) {
			continue;
		}

		if (i == 9) {
			int res = arr[i] / 2 + arr[i] % 2;
			if (res > max) {
				max = res;
			}
		} else {
			if (arr[i] > max) {
				max = arr[i];
			}
		}
	}
	cout << max << "\n";
}