#include <cctype>
#include <iostream>
#include <string>
#include <unordered_map>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int n, m;
  std::cin >> n >> m;
  std::unordered_map<std::string, int> nameList;    // name -> index
  std::unordered_map<int, std::string> numberList;  // index -> name

  std::string tmp;
  for (int i = 1; i <= n; ++i) {
    std::cin >> tmp;
    nameList[tmp] = i;
    numberList[i] = tmp;
  }

  for (int i = 0; i < m; ++i) {
    std::cin >> tmp;
    if (isdigit(static_cast<unsigned char>(
            tmp[0]))) {  // check if the first character of tmp is a digit
      int index = std::stoi(tmp);
      std::cout << numberList[index] << '\n';
    } else {
      std::cout << nameList[tmp] << '\n';
    }
  }

  return 0;
}