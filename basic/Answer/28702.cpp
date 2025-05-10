#include <iostream>
#include <string>  // stoi 를 사용하기 위함
#include <vector>
using namespace std;

int fizzBuzz(const string& str) {
  if (str == "Fizz") return 3;
  if (str == "Buzz") return 5;
  if (str == "FizzBuzz") return 15;
  return stoi(str);
}

int main() {
  string a, b, c;
  vector<int> arr;
  int anw;

  // 입력 받기
  cin >> a >> b >> c;

  // fizzBuzz 결과 저장
  arr = {fizzBuzz(a), fizzBuzz(b), fizzBuzz(c)};

  // 조건에 따라 anw 계산
  for (int i = 0; i < 3; i++) {
    if (arr[i] != 3 && arr[i] != 5 && arr[i] != 15) {
      anw = arr[i] + (3 - i);
      break;
    }
  }

  // 결과 출력
  if (anw % 15 == 0) {
    cout << "FizzBuzz";
  } else if (anw % 5 == 0) {
    cout << "Buzz";
  } else if (anw % 3 == 0) {
    cout << "Fizz";
  } else {
    cout << anw;
  }

  return 0;
}