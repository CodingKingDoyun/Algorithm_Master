#include <iostream>
using namespace std;

void selectionsort(int arr[], int size, int cnt) {
  int num = 0;  // 교환 횟수를 확인 하는 변수
  for (int i = size - 1; i > 0; i--) {
    int max = 0, maxidx = 0;  // 큰 수를 찾기 위한 변수와 인덱스 변수 선언

    // 정렬이 되지않은 배열 중 가장 큰 수 찾기
    for (int j = 0; j <= i; j++) {
      if (arr[j] > max) {
        max = arr[j];
        maxidx = j;
      }
    }

    // 큰 수를 오름차순으로 뒤에서 부터 정렬
    int temp = arr[i];
    arr[i] = arr[maxidx];
    arr[maxidx] = temp;
    if (arr[i] != arr[maxidx]) num++;

    // 요구하는 교환 횟수에 달하면 교환한 두 정수를 출력 후 리턴
    if (num == cnt) {
      cout << arr[maxidx] << ' ' << arr[i] << '\n';
      return;
    }
  }
  // 요구하는 교환 횟수에 달하지 못 할 경우 -1 출력
  cout << -1 << '\n';
  return;
}

int arr[10000];  // 크기가 크기 때문에 전역 변수로 선언해 초기화
int main() {
  int size, cnt;
  cin >> size >> cnt;

  // size 만큼 수를 입력 받음
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  selectionsort(arr, size, cnt);

  return 0;
}