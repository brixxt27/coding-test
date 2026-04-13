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
unsigned long long getCounts(int N, int num) {
  unsigned long long cnt = 0;
  for (unsigned long long i = num; i <= N; i *= num) {
    unsigned long long div = N / i;
    if (div == 0) {
      break;
    }
    cnt += div;
  }
  return cnt;
}

unsigned long long getTotalCnt(int n, int m) {
  unsigned long long twoCounts =
      getCounts(n, 2) - getCounts(m, 2) - getCounts(n - m, 2);
  unsigned long long fiveCounts =
      getCounts(n, 5) - getCounts(m, 5) - getCounts(n - m, 5);

  if (twoCounts > fiveCounts) {
    return fiveCounts;
  }
  return twoCounts;
}

/**
 * nCm = n! / m! * (n - m)!
 */
int main() {
  int n, m;
  cin >> n >> m;
  cout << getTotalCnt(n, m) << endl;
}