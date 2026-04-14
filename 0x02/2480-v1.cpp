#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c;
	cin >> a >> b >> c;
	// 같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다.
	if (a == b && b == c) cout << 10000 + a * 1000;
	// 같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다.
	else if (a == b || b == c) cout << 1000 + b * 100;
	else if (a == c) cout << 1000 + a * 100;
	// 모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.
	else cout << max({a, b, c}) * 100;
}