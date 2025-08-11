#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int bit = 0;
  int testcase;
  std::cin >> testcase;
  while (testcase--) {
    std::string tmp;
    std::cin >> tmp;

    int n;
    if (tmp == "add") {
      std::cin >> n;
      bit |= (1 << n);
    } else if (tmp == "remove") {
      std::cin >> n;
      bit &= ~(1 << n);
    } else if (tmp == "check") {
      std::cin >> n;
      std::cout << ((bit & (1 << n)) ? 1 : 0) << '\n';
    } else if (tmp == "toggle") {
      std::cin >> n;
      bit ^= (1 << n);
    } else if (tmp == "all") {
      bit = (1 << 21) - 1;
    } else if (tmp == "empty") {
      bit = 0;
    }
  }
  return 0;
}