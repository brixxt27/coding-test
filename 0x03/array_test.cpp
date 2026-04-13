#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 
 * 
 * @param idx 어느 순서에 넣을 것이다.
 * @param num 어떤 숫자를 넣을 것이다.
 * @param arr 이 배열에 추가할 것이다.
 * @param len 배열의 길이는 이것이다.
 */
void insert(int idx, int num, int arr[], int& len){
	if (len < idx || idx < 0) return;

	/**
	 * idx가 0보다 작을 때 또는 len 보다 클 때 종료
	 * 배열의 총 길이는 10으로 여기에서 별도로 할당 받고 해제하는 것을 고려하지 않는 것으로 보임
	 */
}

void erase(int idx, int arr[], int& len){
  
}

void printArr(int arr[], int& len){
  for(int i = 0; i < len; i++) cout << arr[i] << ' ';
  cout << "\n\n";
}

void insert_test(){
  cout << "***** insert_test *****\n";
  int arr[10] = {10, 20, 30};
  int len = 3;
  insert(3, 40, arr, len); // 10 20 30 40
  printArr(arr, len);
  insert(1, 50, arr, len); // 10 50 20 30 40
  printArr(arr, len);
  insert(0, 15, arr, len); // 15 10 50 20 30 40
  printArr(arr, len);
}

void erase_test(){
  cout << "***** erase_test *****\n";
  int arr[10] = {10, 50, 40, 30, 70, 20};
  int len = 6;
  erase(4, arr, len); // 10 50 40 30 20
  printArr(arr, len);
  erase(1, arr, len); // 10 40 30 20
  printArr(arr, len);
  erase(3, arr, len); // 10 40 30
  printArr(arr, len);
}

int main(void) {
  insert_test();
  erase_test();
}