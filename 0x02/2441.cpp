#include <iostream>
using namespace std;

int main(void) {
	// N(1 ≤ N ≤ 100)
	// N 입력
	int N;
	cin >> N;
	// N 반복하며 줄 바꿈
	for (int i = 0; i < N; i++) {
		// 0~N-1 까지 공백 출력
		for (int j = 0; j < i; j++)
			cout << " ";
		// N ~ 1 * 출력
		for (int j = N - i; j > 0; j--)
			cout << "*";
		cout << "\n";
	}
}
