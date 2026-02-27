#include <iostream>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int N;
  cin >> N;
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= 2 * N - 1; j++) {
      if (j >= N - (i - 1) && j <= N + (i - 1)) cout << "*";
      if (j < N - (i - 1)) cout << " ";
    }
    cout << "\n";
  }
}