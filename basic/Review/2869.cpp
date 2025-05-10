#include <cmath>
#include <iostream>  // ceil 사용 하기 위함
using namespace std;

int main() {
  int a, b, v;
  cin >> a >> b >> v;
  int cnt = ceil((double)(v - b) / (a - b));  // ceil : 올림 처리 함수
  cout << cnt << endl;
}