#include <iostream>
#include <vector>
using namespace std;

int a[2000001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, x, cnt = 0;
	cin >> n;

	vector<int> nums;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		nums.push_back(num);
		a[num] = 1;
	}
	
	cin >> x;
	for (int i = 0; i < n; i++) {
		if (x < nums[i]) {
			continue;
		}
		if (a[x - nums[i]]) {
			cnt++;
		}
	}
	cout << cnt / 2 << "\n";
}