#include <iostream>
#include <map>
using namespace std;

int num[500000];

int main() {
  map<int, int, greater<int>> max;

  int size, trade;
  cin >> size >> trade;

  for (int i = 0; i < size; i++) {
    cin >> num[i];
    max[num[i]] = i;
  }

  for (auto p : max) {
    for (int i = p.first - 1; i > 0; i--) {
      if (p.first != num[i]) {
        int temp = num[i];
        num[i] = p.first;
        num[p.second] = temp;
        break;
      } else
        break;
    }
  }

  for (int i = 0; i < size; i++) {
    cout << num[i] << ' ';
  }
  return 0;

  /*
  for (int i = size - 1; i > 0; i--) {
    for (int j = i; j > 0; j--) {
      if (i + 1 != num[j]) {
        int temp = num[j];
        num[j] = i + 1;
        num[max[i]] = temp;
        break;
      }
    }
  }
  */
}