#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	// 영식 30초마다 10원 Y
	// 민식 60초마다 15원 M
	// 요금은 1초라도 사용하면 바로 부과하며 시작
	// 첫 줄 통화의 개수 N 입력(N은 20보다 작거나 같은 자연수)
	// N 만큼의 사용 시간 입력(10,000보다 작거나 같은 자연수)
	// 만약 두 요금제의 가격이 같다면 영식 먼저 작성, 예를 들어 Y M 30
	// 더 저렴한 요금제의 이름과 더 저렴한 요금을 출력한다.

	// 요금 다 받는다.
	// 모든 시간에 대해 Y, M 요금으로 계산으로 하여 비교한다.
	// Y가 크면 Y 출력
	// M이 크면 M 출력
	// Y, M이 같으면 Y M 출력
	// Y M 30 개행 없이 요금제 출력
	int N;
	cin >> N;
	int times[20];
	for (int i = 0; i < N; i++) {
		cin >> times[i];
	}

	// N만큼 돌면서 각각 Y, M 요금제 총합을 구한다.
	int yTotal = 0, mTotal = 0;
	for (int i = 0; i < N; i++) {
		yTotal += (times[i] / 30 + 1) * 10;
		mTotal += (times[i] / 60 + 1) * 15;
	}
	// y가 크면 Y yTotal 출력
	// m가 크면 M mTotal 출력
	// 같으면 Y M yTotal 출력
	if (yTotal > mTotal) {
		cout << "M " << mTotal << "\n";
	} else if (yTotal < mTotal) {
		cout << "Y " << yTotal << "\n";
	} else {
		cout << "Y M " << mTotal << "\n";
	}
}