#include <iostream>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
    for (int j = 1; j <= 2 * N - 1 - i; j++) {
      if (i < j)
        cout << "*";
      else
        cout << " ";
    }
    cout << "\n";
  }
}