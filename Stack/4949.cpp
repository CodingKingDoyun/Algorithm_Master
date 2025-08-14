#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
  string tmp;
  while (true) {
    getline(cin, tmp);
    if (tmp == ".") break;

    stack<char> bracket;
    bool isBalanced = true;

    for (int i = 0; i < tmp.length(); i++) {
      if (tmp[i] == '(') bracket.push('(');
      if (tmp[i] == '[') bracket.push('[');
      if (tmp[i] == ')') {
        if (bracket.empty() || bracket.top() != '(') {
          isBalanced = false;
        } else if (bracket.top() == '(')
          bracket.pop();
      }
      if (tmp[i] == ']') {
        if (bracket.empty() || bracket.top() != '[') {
          isBalanced = false;
        } else if (bracket.top() == '[')
          bracket.pop();
      }
    }
    if (!bracket.empty()) isBalanced = false;

    cout << (isBalanced ? "yes" : "no") << '\n';
  }
  return 0;
}