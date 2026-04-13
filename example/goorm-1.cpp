#include <iostream>

using namespace std;

void getFactorial(int N) {
  unsigned long long sum = 1;
  unsigned long long tens = 10;
  unsigned long long remain = 0;
  int cnt = 0;
  for (int i = 1; i <= N; i++) {
    sum = sum * i;
    remain = sum % 10;

    while (remain == 0) {
      cnt++;
      sum = sum / 10;
      remain = sum % 10;
    }
    cout << "i: " << i << endl;
    cout << "sum: " << sum << endl;
    cout << "remain: " << remain << endl;
    cout << "cnt: " << cnt << "\n\n";
  }
  cout << cnt << endl;
}

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
  /**
    N 입력 받음.
    N이 20만 되어도 243경을 넘을 정도로 빨리 커진다는 것은 이것을 sum에 담을 수
    없다는 뜻
    cnt 가 0의 개수
  */
  cout << getFiveCounts(N) << endl;
}