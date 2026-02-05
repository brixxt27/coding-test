#include <iostream>

using namespace std;

/**
 * int N을 인자로 받아 N을 포함한 작은 수 중 가장 큰 제곱수를 반환하는 함수
 */
int func(int N) {
  // N을 넘지 않을 때까지 2의 제곱을 반복합니다.
  int num = 1;
  while (num * 2 <= N) {
    num *= 2;
  }
  return num;
}

int main() {
  // 10억 이하의 N
  int N;
  cin >> N;
  cout << func(N) << endl;
}