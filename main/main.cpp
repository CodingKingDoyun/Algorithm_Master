#include <iostream>
#include <string>
#include <vector>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::string s;
  std::cin >> s;

  std::vector<int> list(26);
  for (int i = 0; i < s.length(); i++) list[s[i] - 97]++;

  for (int i = 0; i < list.size(); i++)
    std::cout << list[i] << (i != list.size() - 1 ? ' ' : '\n');

  return 0;
}