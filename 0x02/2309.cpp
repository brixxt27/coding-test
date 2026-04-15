#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// 입력을 숫자 9개 받기
	// 9개 중에서 7개를 더했을 때 100인 경우 찾기
	// 합이 100인 7개의 수를 오름차순으로 정렬해서 출력하기, 
		// 100이 되는 조합이 있다면 그중 아무 거나 출력, 100이 되지 않는 경우는 없다.
	// 9개의 수를 모두 더한 다음, 
		// 두 개의 수를 뺐을 때 100인 수를 찾기
	int n[9];
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> n[i];
		sum += n[i];
	}
	sort(n, n + 9);

	// sum에 9개의 수 모두 더한다
	// 두 개의 수를 조합하여 sum에서 뺀다.
	// 100이라면 sum에서 뺀 두 개를 제외한 나머지 수를 출력한다.
	// 100이 아니라면 기존 sum에서 다른 수를 조합하여 다시 뺀다. 이를 반복한다.
	int result;
	for (int a = 0; a < 8; a++) {
		for (int b = a + 1; b < 9; b++) {
			result = sum;

			result -= (n[a] + n[b]);
			if (result == 100) {
				for (int c = 0; c < 9; c++) {
					if (c != a && c!= b)
						cout << n[c] << "\n";
				}
				return 0;
			}
		}
	}
}