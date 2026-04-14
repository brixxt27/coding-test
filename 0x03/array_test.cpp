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
  // arr를 idx부터 len + 1만큼 뒤로 미루기
  // for (int i = 0; i < len - idx; i++) {
  //   arr[len - i] = arr[len - i - 1];
  // }
  for (int i = len; i > idx; i--)
    arr[i] = arr[i - 1];
  // arr idx에 num 넣기
  arr[idx] = num;
  // 길이 높여주기
  len++;
}

void erase(int idx, int arr[], int& len){
  // idx + i에 idx + i + 1 대입
  for (int i = 0; i < len - idx - 1; i++) {
    arr[idx + i] = arr[idx + i + 1];
  }
  // len 감소
  len--;
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