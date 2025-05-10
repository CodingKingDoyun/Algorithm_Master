#include <algorithm>  // reverse를 사용하기 위함
#include <iostream>
#include <string>  // string 클래스 사용
using namespace std;

int main() {
  string num;
  while (true) {
    cin >> num;
    if (num == "0") break;  // "0" 입력시 종료

    // 문자열 뒤집기 및 비교
    string rev = num;
    reverse(rev.begin(), rev.end());

    // 삼항 연산자 사용하여 간소화
    cout << (num == rev ? "yes" : "no") << endl;
  }
  return 0;
}