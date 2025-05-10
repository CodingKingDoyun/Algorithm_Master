// Dynamic Programming
// Greedy Algorithm

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> arr;
  if (n % 3 == 0) {
    arr.push_back(n / 3);
  } else {
    arr.push_back(5001);
  }

  for (int i = 1; i <= n / 5; i++) {
    if (((n - 5 * i) % 3) == 0) {
      arr.push_back(i + ((n - 5 * i) / 3));
    } else {
      arr.push_back(5001);
    }
  }

  int min = 5001;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] < min) min = arr[i];
  }
  if (min == 5001) min = -1;

  cout << min << endl;

  return 0;
}