#include <iostream>
using namespace std;
typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// 두 양의 정수가 주어진다.
	// 첫 줄에는 두 정수 사이의 수의 개수를 출력한다
	// 두 번째 줄에는 두 수 사이에 있는 모든 수를 오름차 순으로 공백을 구분자로 출력한다.
	// A, B가 같을 때
	// A > B일 때
	ll A, B;
	cin >> A >> B;
	if (A > B) swap(A, B);
	if (A == B) {
		cout << 0 << "\n";
		return 0;
	}
	cout << B - A - 1 << "\n";
	for (ll i = A + 1; i < B; i++) {
		cout << i << " ";
	}
}