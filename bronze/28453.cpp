#include <iostream>
#include <vector>

using namespace std;

int main() {
  // 레벨의 개수 N 입력
  // N은 최소값 1, 최대값 100
  // M은 최소값 1, 최대값 300
  // N, M은 int 자료형으로 충분하다.
  // int 자료형 범위 -2^31 ~ 2^31 - 1
  int N, M;
  cin >> N;
  // N개의 레벨 M이 공백으로 구분되어 입력
  // 구분자로 구분 되어 입력 받음
  // cin은 공백을 기준으로 입력을 받나?
  vector<int> levels(N);
  for (int i = 0; i < N; i++) {
    cin >> levels[i];
  }
  // 각 레벨이 속한 구간의 번호를 공백으로 구분하여 출력
  /**
   * 만렙 300 구간1
   *  구간2
   * 구만렙 275
   *  구간3
   * 뀨만렙 250
   *  구간4
   */
  for (int i = 0; i < N; i++) {
    if (levels[i] == 300) {
      cout << "1 ";
    } else if (levels[i] >= 275 && 300 > levels[i]) {
      cout << "2 ";
    } else if (levels[i] >= 250 && 275 > levels[i]) {
      cout << "3 ";
    } else {
      cout << "4 ";
    }
  }
}