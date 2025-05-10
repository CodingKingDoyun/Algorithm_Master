#include <iostream>
#include <string>
using namespace std;

int main() {
  int num;
  cin >> num;

  int temp = 0, cnt = 0;
  while (num != cnt) {
    temp++;
    string str = to_string(temp);  // "666" 을 찾기 위해 문자열로 변환

    // find 함수로 "666" 찾고 cnt 증가
    // npos는 -1을 가지는 상수 (찾으려는 문자열이 없을때 반환)
    if (str.find("666") != string::npos) cnt++;
  }
  cout << temp << '\n';

  return 0;
}