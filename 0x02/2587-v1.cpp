#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	const int NUM = 5;
	int arr[NUM];
	int sum = 0;
	for (int i = 0; i < NUM; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr, arr + NUM);
	cout << sum / NUM << "\n";
	cout << arr[2] << "\n";
}