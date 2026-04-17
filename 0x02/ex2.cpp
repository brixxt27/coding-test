#include <iostream>
#include <algorithm>
using namespace std;


int func2(int arr[], int N) {
	int nums[101];
	fill(nums, nums + 101, 0);

	for (int i = 0; i < N; i++) {
		if (nums[100 - arr[i]] > 0) 
			return 1;
		++nums[arr[i]];
	}
	return 0;
}

int main() {
	int arr1[] = {1, 52, 48};
	cout << "func2: " << func2(arr1, 3) << endl;
	int arr2[] = {50, 42};
	cout << "func2: " << func2(arr2, 2) << endl;
	int arr3[] = {4, 13, 63, 87};
	cout << "func2: " << func2(arr3, 4) << endl;
}