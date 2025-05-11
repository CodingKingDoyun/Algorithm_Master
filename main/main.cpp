#include <iostream>
#include <map>
using namespace std;

int num[500000];

int main() {
  map<int, int, greater<int>> max;

  int size, trade, cnt = 0;
  cin >> size >> trade;

  for (int i = 0; i < size; i++) {
    cin >> num[i];
    max[num[i]] = i;
  }

  for (auto it = max.begin(); it != max.end(); it++) {
    auto curr_it = *it;

    for (int i = curr_it.first - 1; i > 0; i--) {
      if (curr_it.first != num[i]) {
        auto targ_it = max.find(i);

        int temp = num[i];
        num[i] = curr_it.first;
        num[curr_it.second] = temp;

        cnt++;
        if (trade == cnt) {
          cout << temp << ' ' << num[i];
          return 0;
        }

        temp = curr_it.second;
        curr_it.second = targ_it->second;
        targ_it->second = temp;
        break;
      } else
        break;
    }
  }
  cout << -1 << '\n';
  return 0;
}