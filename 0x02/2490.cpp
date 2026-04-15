#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	// 0이 배, 1이 등
	// 도는 A, 개는 B, 걸은 C, 윷은 D, 모는 E
	int n;
	// 입력을 세 번째 줄까지 받음
		// 총 네 개의 숫자를 받아 판단
	for (int i = 0; i < 3; i++) {
		int cnt = 0;
		for (int j = 0; j < 4; j++) {
			cin >> n;
			if (n == 0) cnt++;
		}

		// 도(배 한 개, 등 세 개), 
		// 개(배 두 개, 등 두 개), 
		// 걸(배 세 개, 등 한 개), 
		// 윷(배 네 개), 
		// 모(등 네 개) 
		// if (cnt == 1) cout << "A\n";
		// else if (cnt == 2) cout << "B\n";
		// else if (cnt == 3) cout << "C\n";
		// else if (cnt == 4) cout << "D\n";
		// else cout << "E\n";
		string result[] = {"E", "A", "B", "C", "D"};
		cout << result[cnt] + "\n";
	}
}