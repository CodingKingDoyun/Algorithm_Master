#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int minBags = -1;  // 최소 봉지 개수 (-1은 불가능한 경우)

  for (int i = 0; i <= n / 5; i++) {  // 5kg 봉지 개수 i
    if ((n - 5 * i) % 3 == 0) {       // 남은 무게가 3의 배수인지 확인
      int j = (n - 5 * i) / 3;        // 3kg 봉지 개수
      int totalBags = i + j;          // 총 봉지 개수
      if (minBags == -1 || totalBags < minBags) {
        minBags = totalBags;  // 최소 봉지 개수 갱신
      }
    }
  }

  cout << minBags << endl;
  return 0;
}