#include <iostream>
using namespace std;

/**
  i를 2로 계속 나눠서 2 미만의 나머지가 나올 떄까지 반복
  0이면 2의 제곱수
  나눈 값이랑 나머지
 */
bool split_num(int target) {
  int value = target;
  // cout << "target: " << target << endl;
  int remain;
  while (value > 2) {
    remain = value % 2;
    value = value / 2;
    // cout << "value: " << value << endl;
    // cout << "remain: " << remain << "\n\n";
    if (remain == 1) {
      return false;
    }
  }
  return true;
}

int func4(int N) {
  int num = 1;
  for (int i = N; i > 0; i--) {
    if (split_num(i) == true) {
      num = i;
      break;
    }
  }
  return num;
}

int main() {
  int N;
  cin >> N;
  cout << func4(N) << endl;
}