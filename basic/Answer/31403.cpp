#include <iostream>
#include <string>  // stoi 함수를 사용하기 위함
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  string str = to_string(a) + to_string(b);  // to_string: 정수를 문자열로 변환
  cout << a + b - c << endl;
  cout << stoi(str) - c << endl;  // stoi: 문자열을 정수로 변환
}