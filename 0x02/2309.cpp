#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// 입력을 숫자 9개 받기
	vector<int> v;
	for (int i = 0; i < 9; i++) {
		int n;
		cin >> n;
		v.push_back(n);
	}
	for (int i = 0; i < 9; i++) {
		for (int j = 1; j < 9; j++) {
		}
	}
	// 더해보면서 합이 100인 수를 찾기, 100이 안 되는 경우는 없다
	// 7개 숫자의 합이 100인 수를 찾으면 이를 오름차 순으로 정렬하여 출력하기
}