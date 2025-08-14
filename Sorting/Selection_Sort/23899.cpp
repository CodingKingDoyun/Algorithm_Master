#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void inputArray(vector<int>& arr, size_t size) {
  arr.resize(size);  // size에 맞게 벡터 크기 재할당
  for (size_t i = 0; i < size; i++) cin >> arr[i];
}

int selectionSort(vector<int>& arr1, vector<int>& arr2, size_t size) {
  if (arr1 == arr2) return 1;  // 처음부터 같으면 1 반환

  size_t index = size - 1;
  for (size_t i = 0; i < size; i++) {
    size_t big = 0;  // 가장 큰 값의 인덱스

    // 벡터 내 가장 큰 값을 찾는 과정
    for (size_t j = 1; j <= index; j++) {
      if (arr1[big] < arr1[j]) big = j;
    }

    // 값을 바꾸는 과정
    if (big != index) {
      int temp = arr1[index];
      arr1[index] = arr1[big];
      arr1[big] = temp;
    }

    // 정렬 중인 배열이 요구하는 배열과 같은지 비교
    if (arr1 == arr2) return 1;

    index--;
  }
  return 0;
}

int main() {
  size_t size;
  vector<int> arr1, arr2;

  cin >> size;
  inputArray(arr1, size);
  inputArray(arr2, size);

  int isSame = selectionSort(arr1, arr2, size);
  cout << isSame << '\n';

  return 0;
}