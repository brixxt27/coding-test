#include <algorithm>
#include <iostream>
using namespace std;

/**
 * N이 제곱수이면 1 반환, 아니면 0 반환
 * N은 10억 이하
 * integer의 제곱이 N이 되어야 하므로 10억 이하인 N입니다.
 * integer는 int 자료형으로도 충분하다.
 */
int func3(int N) {
  double origin = sqrt(N);
  int integer = origin;
  double target = integer;
  if (origin == target) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int N;
  cin >> N;
  cout << func3(N) << endl;
}