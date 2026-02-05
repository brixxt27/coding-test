#include "iostream"
using namespace std;

/**
 * 서로 다른 위치의 요소의 합이 100이면 1을 아니면 0을 출력하는 함수
 * 각 요소는 0 이상 100이하, N은 1000 이하의 자연수
 */
void func2(int arr[], int N) {
  int flag = 0;
  // O(N^2)
  for (int i = 0; i < N - 1; i++) {
    for (int j = i + 1; j < N; j++) {
      if (arr[i] + arr[j] == 100) {
        flag = 1;
        break;
      }
    }
  }
  if (flag == 1)
    cout << 1 << endl;
  else
    cout << 0 << endl;
}

int main(void) {
  int N;
  cin >> N;
  int arr[N];

  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }

  func2(arr, N);
}