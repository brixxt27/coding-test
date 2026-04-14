#include <iostream>
using namespace std;

int main() {
	// 세 개의 숫자 abc를 받는다.
	int a, b, c;
	cin >> a >> b >> c;

	// 같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다.
	if (a == b && b == c) {
		cout << 10000 + a * 1000 << "\n";
		return 0;
	}
	// 같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다.
	int num;
	if (a == b && b != c && a != c)  {
		cout << 1000 + a * 100 << "\n";
		return 0;
	}
	if (b == c && a != b && a != c)  {
		cout << 1000 + b * 100 << "\n";
		return 0;
	}
	if (a == c && a != b && b != c) {
		cout << 1000 + a * 100 << "\n";
		return 0;
	}
	// 모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다
	if (a != b && b != c && a != c) {
		int max = a;
		if (max < b) max = b;
		if (max < c) max = c;

		cout << max * 100 << "\n";
		return 0;
	}
}