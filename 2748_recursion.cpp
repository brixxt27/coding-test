#include <iostream>
using namespace std;

unsigned long long fibonacci(int n, unsigned long long small,
                             unsigned long long big) {
  // 재귀 종료 조건
  if (n < 2) return big;
  return fibonacci(n - 1, big, small + big);
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

  cout << fibonacci(n, 0, 1) << endl;
}