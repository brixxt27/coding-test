#include <iostream>
using namespace std;

unsigned long long fibonacci(unsigned long long small, unsigned long long big,
                             int n, int i) {
  // 재귀 종료 조건
  if (i > n - 2) {
    return big;
  }
  unsigned long long target = small + big;
  return fibonacci(big, target, n, i + 1);
}

int main(void) {
  // 재귀 함수를 이용한 피보나치 수열
  /**
   * F(n) = F(n-1) + F(n-2)
   */
  // n을 입력 받음
  // 피보나치 수를 구함
  // 마지막 수를 출력함
  int n;
  cin >> n;
  unsigned long long f0 = 0;
  unsigned long long f1 = 1;
  unsigned long long target = fibonacci(0, 1, n, 0);
  cout << target << endl;
}