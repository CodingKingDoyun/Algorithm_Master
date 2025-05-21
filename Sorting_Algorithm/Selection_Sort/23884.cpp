#include <iostream>
#include <map>
using namespace std;

// 전역변수 선언
int arr[500000];
map<int, int> m;

int selectionsort(int size, int swap) {
  int cnt = 0;         // 교환 횟수를 확인하는 변수
  int idx = size - 1;  // 비교하려는 인덱스의 변수

  // map은 오름차순으로 정렬되기 때문에 내림차순으로 바꾸어 반복문 진행
  for (auto i = m.rbegin(); i != m.rend(); i++) {
    int big = i->second;  // 가장 큰 값의 인덱스를 저장

    if (idx != big) {  // 가장 큰 값의 인덱스가 배열 중 제일 우측에 있는지 비교
      // 가장 큰 값과 아닌 값을 바꾸는 과정
      int tmp = arr[idx];
      arr[idx] = i->first;
      arr[big] = tmp;

      // 가장 큰 값과 아닌 값의 인덱스를 바꾸어 map에 저장
      // key(가장 큰 값), value(값의 인덱스)
      i->second = idx;
      auto mfind = m.find(tmp);
      mfind->second = big;

      cnt++;  // 교환 발생시 카운트 증가
    }

    // 교환 횟수가 요구하는 수에 달하면 출력 후 종료
    if (cnt == swap) {
      for (int j = 0; j < size; j++) {
        cout << arr[j] << ' ';
      }
      return 0;
    }

    idx--;  // 제일 우측부터 정렬이 이루어지기에 인덱스 값을 1씩 감소
  }

  // 교환 횟수에 달하지 못하면 출력 후 종료
  cout << -1 << '\n';
  return 0;
}

int main() {
  int size, swap;
  cin >> size >> swap;

  for (int i = 0; i < size; i++) {
    cin >> arr[i];
    m[arr[i]] = i;
  }

  selectionsort(size, swap);
  // selectionsort 함수에서 return이 이루어지기에 작성할 필요없음
}