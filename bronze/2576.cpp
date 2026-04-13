#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	/**
	 * 7개 자연수 주어짐
	 * 홀수만 가져오기
	 * 이들의  합 구하기
	 * 가장 작은 수 구하기
	 * 홀수가 존재하지 않으면 -1 출력
	 */
	int n = 7, t, sum = 0;
	priority_queue<int, vector<int>, greater<int>> pq;
	while (n--) {
		cin >> t;
		if (t % 2 == 1) {
			pq.push(t);
			sum += t;
		}
	}
	if (pq.size() == 0) cout << "-1\n";
	else {
		cout << sum << "\n";
		cout << pq.top() << "\n";
	}
}