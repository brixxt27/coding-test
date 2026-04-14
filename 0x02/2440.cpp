#include <iostream>
using namespace std;

int main(void) {
	// N입력 N(1 ≤ N ≤ 100)
	int N;
	cin >> N;

	// N만큼 반복하면서 줄바꿈
		// N - i 씩 반복하면서 출력
	for (int i = 0; i < N; i++) {
		for (int j = N - i; j > 0; j--) {
			cout << "*";
		}
		cout << "\n";
	}
}