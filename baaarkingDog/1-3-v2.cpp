#include <iostream>
using namespace std;

/**
 * N이 제곱수이면 1 반환, 아니면 0 반환
 *
 * O(N^1/2)
 */
int func3(int N) {
  for (int i = 0; i * i <= N; i++) {
    if (N == i * i) {
      return 1;
    }
  }
  return 0;
}

int main() {
  int N;
  cin >> N;
  cout << func3(N) << endl;
}