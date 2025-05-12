#include <iostream>
#include <map>
using namespace std;


int arr[500001];
map<int, int> big_map;

int selectionsort(int size, int swap) {
  int cnt = 0;
  int idx = size - 1;

  for (auto it = big_map.rbegin(); it != big_map.rend(); it++) {
    int big = it->second;

    if (big != idx) {
      auto temp = arr[idx];
      arr[idx] = it->first;
      arr[big] = temp;

      it->second = idx;
      auto find = big_map.find(temp);
      find->second = big;

      cnt++;

      if (cnt == swap) {
        cout << arr[big] << ' ' << arr[idx] << '\n';
        return 0;
      }

      idx--;
    }
  }
  cout << -1 << '\n';
  return 0;
}

int main() {
  int size, swap;
  cin >> size >> swap;
  for (int i = 0; i < size; i++) {
    int num;
    cin >> num;
    arr[i] = num;
    big_map[num] = i;
  }

  selectionsort(size,swap);

  return 0;
}