#include <iostream>
using namespace std;

void func1(int N) {
  long long sum = 0;
  /**
   * for문에서 N만큼 반복하니 시간 복잡도는 O(N)이다.
   */
  for (int i = 1; i <= N; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }
  cout << sum;
}

int main(void) {
  /**
   * N 이하 자연수 3, 5 배수
   * N은 10만 이하 자연수
   */
  int N;
  cin >> N;
  func1(N);
}