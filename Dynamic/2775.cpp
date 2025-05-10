#include <iostream>
#include <vector>
using namespace std;

int main() {
  int test;
  vector<int> under;
  vector<int> now;
  cin >> test;

  while (test != 0) {
    now.clear();
    under.clear();
    test--;
    int k, n;
    cin >> k >> n;

    int num = 1;
    while (true) {
      if (num > n) break;
      under.push_back(num++);
    }

    for (int i = 0; i < k; i++) {
      int sum = 0;
      for (int j = 0; j < n; j++) {
        sum += under[j];
        now.push_back(sum);
      }
      under = now;
      vector<int>().swap(now);
    }
    cout << under[n - 1] << endl;
    vector<int>().swap(under);
  }
}