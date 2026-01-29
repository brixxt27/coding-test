#include <iostream>
#include <vector>
using namespace std;

int main() {
  /**
   * 피보나치 수는 0, 1로 시작
   * Fn = Fn-1 + Fn-2 (n ≥ 2)
   * n = 17일 때
   * 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597
   */

  // n 입력, n은 90보다 작거나 같은 자연수
  unsigned long long n;
  cin >> n;

  // 입력 받은 수
  vector<unsigned long long> fibonacci(n + 1);
  fibonacci[0] = 0;
  fibonacci[1] = 1;

  for (int i = 0; i < n - 1; i++) {
    fibonacci[i + 2] = fibonacci[i + 1] + fibonacci[i];
  }

  // print all
  // for (auto n : fibonacci) {
  //   cout << n << endl;
  // }
  cout << fibonacci[n] << endl;
}