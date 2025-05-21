#include <iostream>
#include <map>
using namespace std;

int arr[500000];
map<int, int> m;
int selectionsort(int size, int swap) {
  int cnt = 0;
  int idx = size - 1;
  for (auto i = m.rbegin(); i != m.rend(); i++) {
    int big = i->second;

    if (idx != big) {
      int tmp = arr[idx];
      arr[idx] = i->first;
      arr[big] = tmp;

      i->second = idx;
      auto mfind = m.find(tmp);
      mfind->second = big;
      cnt++;
    }

    if (cnt == swap) {
      cout << arr[big] << ' ' << arr[idx] << '\n';
      return 0;
    }
    idx--;
  }
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
  return 0;
}