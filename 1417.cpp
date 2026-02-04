#include <iostream>
#include <queue>
using namespace std;

int main(void) {
  /**
   * 수 n 입력
   * n만큼 후보들이 받은 득표수 입력
   * 구하기
   * 최소 매수해야 하는 인원 수 target 출력
   */
  int n;
  cin >> n;

  int dasom = 0;
  cin >> dasom;

  priority_queue<int> list;
  for (int i = 0; i < n - 1; i++) {
    int num;
    cin >> num;
    list.push(num);
  }
  while (!list.empty()) {
    cout << list.top() << endl;
    list.pop();
  }
}