#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v;
	v.reserve(20);
	for (int i = 1; i <= 20; i++) {
		v.push_back(i);
	}

	for (int i = 0; i < 10; i++) {
		int a, b;
		cin >> a >> b;
		while (a < b) {
			swap(v[a - 1], v[b - 1]);
			a++;
			b--;
		}
	}
	for (auto target : v) {
		cout << target << " ";
	}
}