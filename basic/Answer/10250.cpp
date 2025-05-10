#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int test;
  cin >> test;
  while (test--) {
    int h, w, n;
    cin >> h >> w >> n;
    int W = (n % h) ? n / h + 1 : n / h;
    int H = (n % h) ? n % h : h;
    cout << H << setfill('0') << setw(2) << W << endl;
  }
  return 0;
}