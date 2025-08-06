#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<string> chess(n);
  for (int i = 0; i < n; i++) cin >> chess[i];

  int result = 64;
  for (int i = 0; i <= n - 8; i++) {
    for (int j = 0; j <= m - 8; j++) {
      int white = 0, black = 0;

      for (int y = 0; y < 8; y++) {
        for (int x = 0; x < 8; x++) {
          char cur = chess[y + i][x + j];
          if ((y + x) % 2 == 0) {
            if (cur != 'W') white++;
            if (cur != 'B') black++;
          } else {
            if (cur != 'B') white++;
            if (cur != 'W') black++;
          }
        }
      }
      result = min(result, min(white, black));
    }
  }
  cout << result << '\n';
  return 0;
}