#include <iostream>
#include <vector>
using namespace std;

int main() {
  int m, n;
  cin >> m >> n;

  vector<bool> prime(n + 1, true);
  prime[0] = prime[1] = false;

  for (int i = 2; i * i <= n; i++) {
    if (prime[i]) {
      for (int j = i * i; j <= n; j += i) {
        prime[j] = false;
      }
    }
  }
  for (int i = m; i <= n; i++) {
    if (prime[i]) cout << i << endl;
  }
}