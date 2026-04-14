#include <iostream>

using namespace std;

int main() {
	// N 입력(1과 100 사이)
		// * 1 2 3 4 5
		// 공백 8 6 4 2 0
		// * 1 2 3 4 5
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i + 1; j++)
			cout << "*";
		for (int j = 0; j < 2 * (N - 1 - i); j++)
			cout << " ";
		for (int j = 0; j < i + 1; j++)
			cout << "*";
		cout << "\n";
	}
	// N - 1 줄바꿈 반복
		// * 4 3 2 1
		// 공백 2 4 6 8(1234)
		// * 4 3 2 1
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - 1 - i; j++)
			cout << "*";
		for (int j = 0; j < 2 * (i + 1); j++)
			cout << " ";
		for (int j = 0; j < N - 1 - i; j++)
			cout << "*";
		cout << "\n";
	}
}