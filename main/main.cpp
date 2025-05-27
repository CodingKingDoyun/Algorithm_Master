#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
  unordered_map<int, int> myMap;
  vector<int> arr(10);
  for (int i = 0; i < 5; i++) {
    cin >> arr[i];
    myMap[arr[i]] = i;
  }

  for (auto i = myMap.begin(); i != myMap.end(); i++) {
    cout << i->first << ' ' << i->second << '\n';
  }
  return 0;
}