#include <iostream>
using namespace std;

// 유클리드 호제법 재귀함수
int euclidean(int a, int b) {
  if (b == 0) return a;
  return euclidean(b, a % b);
}

int main() {
  int a, b;
  cin >> a >> b;

  int gcd = (a > b) ? euclidean(a, b) : euclidean(b, a);
  int lcm = (a * b) / gcd;

  cout << gcd << endl << lcm;
  return 0;
}