/**
 * nCm
 */
#include <iostream>

using namespace std;

/**
 * 5의 배수를 돌면서 몇 개의 5로 이루어져 있는지 확인하기
 * 5 배수의 개수
 * 5^2 배수의 개수
 * ...
 * 5^n 배수의 개수
 */
int getFiveCounts(int N) {
  int cnt = 0;
  for (int i = 5; i <= N; i *= 5) {
    unsigned long long div = N / i;
    if (div == 0) {
      break;
    }
    cnt += div;
  }
  return cnt;
}

int main() {
  int N;
  cin >> N;
  cout << getFiveCounts(N) << endl;
}