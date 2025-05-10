#include <iostream>
using namespace std;

int euclidean(long long a, long long b) {
  if (b == 0) return a;
  return euclidean(b, a % b);
}

int main() {
  long long a, b;
  cin >> a >> b;

  long long res = (a * b) / euclidean(a, b);
  cout << res << endl;
  return 0;
}