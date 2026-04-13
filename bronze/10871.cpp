#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, X;
	cin >> N >> X;

	while (N--) {
		int target;
		cin >> target;
		if (target < X) {
			cout << target << " ";
		}
	}
}