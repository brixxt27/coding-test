#include <iostream>
using namespace std;

int arr[10];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	while (n > 0) {
		arr[n % 10]++;
		n /= 10;
	}

	int ans = 0;
	for (int i = 0 ; i < 10; i++) {
		if (i == 6 || i == 9) {
			continue;
		}
		ans = max(ans, arr[i]);
	}

	ans = max(ans, (arr[6] + arr[9] + 1) / 2);
	cout << ans << "\n";
}