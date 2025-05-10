#include <iostream>
#include <vector>
using namespace std;

void sieveOfEratosthenes(int n) {
  vector<bool> isPrime(n + 1, true);  // 소수 여부를 저장하는 배열
  isPrime[0] = isPrime[1] = false;    // 0과 1은 소수가 아님

  for (int i = 2; i * i <= n; i++) {  // i의 제곱이 n 이하일 때까지 반복
    if (isPrime[i]) {                 // i가 소수라면
      for (int j = i * i; j <= n; j += i) {
        isPrime[j] = false;  // i의 배수들을 소수가 아니라고 표시
      }
    }
  }

  // 소수 출력
  for (int i = 2; i <= n; i++) {
    if (isPrime[i]) {
      cout << i << " ";
    }
  }
  cout << endl;
}

int main() {
  int n;
  cout << "Enter the range (n): ";
  cin >> n;
  sieveOfEratosthenes(n);
  return 0;
}
