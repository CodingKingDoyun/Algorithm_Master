#include <iostream>
#include <vector>
using namespace std;

void InsertionSort(vector<int>& arr) {
  int size = arr.size();
  // 삽입 정렬 구현
  for (int Cur_Idx = 1; Cur_Idx < size; Cur_Idx++) {
    int temp = arr[Cur_Idx];       // 현재 인덱스의 값을 temp에 임시 저장
    int Before_Idx = Cur_Idx - 1;  // 비교하기 위한 인덱스 Before_Idx

    // while: 0보다 크거나 같을 때, temp값이 비교하는 인덱스의 값보다 작을 때
    while (Before_Idx >= 0 && arr[Before_Idx] > temp) {
      // Before_Idx의 값을 현재 인덱스(Before_Idx + 1)의 값에 복사함
      arr[Before_Idx + 1] = arr[Before_Idx];
      Before_Idx--;  // while를 종료하기 위함 and 탐색을 진행하기 위함
    }
    // (탐색이 끝난 인덱스) + 1 값에 temp값을 복사함
    arr[Before_Idx + 1] = temp;
  }
}

int main() {
  int test, num;
  vector<int> arr;
  cin >> test;
  for (int i = 0; i < test; i++) {
    cin >> num;
    arr.push_back(num);
  }

  InsertionSort(arr);

  for (int val : arr) {
    cout << val << endl;
  }
  return 0;
}