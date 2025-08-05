#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

bool compare(string a, string b) {
  if (a.length() != b.length()) {
    return a.length() < b.length();
  } else {
    return a < b;
  }
}

int main() {
  int n;
  cin >> n;
  set<string> word;
  for (int i = 0; i < n; i++) {
    string tmp;
    cin >> tmp;
    word.insert(tmp);
  }
  vector<string> result;
  for (auto str : word) {
    result.push_back(str);
  }
  sort(result.begin(), result.end(), compare);
  for (auto str : result) {
    cout << str << '\n';
  }
  return 0;
}