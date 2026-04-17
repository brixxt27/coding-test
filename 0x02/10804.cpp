#include <iostream>
#include <vector>
using namespace std;

/**
 * 1부터 20까지의 숫자를 갖은 카드가 일렬로 놓임
 * 구간 [a, b] (단, 1 ≤ a ≤ b ≤ 20)
 */
// 20개의 숫자 가진 자료구조 생성
// 총 10의 줄에 걸쳐 10개 구간 주어짐
// 10개 구간에 대해 swap 연산 진행함.
// 두 개의 숫자를 주어지면 a는 1씩 증가하고, b는 1씩 감소해서 a == b가 될 때까지 해당 요소를 변경하는 함수
// 총 20개의 숫자를 공백을 구분자로 하여 출력
void swapNum(vector<int>& v, int a, int b) {
	int tmp;
	tmp = v[a];
	v[a] = v[b];
	v[b] = tmp;
}

void printVector(vector<int>& v) {
	cout << "\n\n 출력!\n";
	for (int i = 1; i < 21; i++) {
		cout << i << " ";
	}
	cout << endl;
	for (auto target : v) {
		cout << target << " ";
	}
	cout << endl;
}

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
		int cnt = b - a;
		// case3에서 마지막인 (10, 11)을 실행하지 않음
		// cnt 조건을 다른 것으로 해야 할듯!
		for (int j = 0; j < cnt; j++) {
			// cout << "a: " << a << endl;
			// cout << "b: " << b << endl;
			// 문제에서 주어지는 것은 1부터 시작하는 카드의 위치, 해당 함수에서 사용하는 것은 배열의 인덱스이므로 1을 빼준다.
			swapNum(v, a - 1, b - 1);
			a++;
			b--;
			if (a >= b) break;
		}
		// printVector(v);
	}
	for (auto target : v) {
		cout << target << " ";
	}
}