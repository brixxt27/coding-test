#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// 숫자 5개 받음
	// 평균 계산 후 개행 출력
	// 중앙값 계산 후 개행 출력, 중앙값은 순서대로 나열했을 때 가운데에 오는 수
	// 우선 순위 큐
	// 배열에 일단 받고 sort하는 방법
	const int NUM = 5;
	priority_queue<int> q;
	int sum = 0;
	for (int i = 0; i < NUM; i++) {
		int n;
		cin >> n;
		sum += n;
		q.push(n);
	}
	cout << sum / NUM << "\n";
	q.pop();
	q.pop();
	cout << q.top() << "\n";
}