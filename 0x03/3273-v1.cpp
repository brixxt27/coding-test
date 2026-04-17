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
		// complement는 보수의 의미로 x가 되기 위해 nums[i]에 더하는 값을 의미한다.
		int complement = x - nums[i];
		if (complement < 0) {
			continue;
		}
		if (complement > nums[i] && a[complement]) {
			// complement > nums[i]은 nums[j]가 더 클 때는 연산을 하지 않기 위한 조건이다. 왜냐하면 의미 상 중복이기 때문!
			cnt++;
		}
	}
	cout << cnt << "\n";
}