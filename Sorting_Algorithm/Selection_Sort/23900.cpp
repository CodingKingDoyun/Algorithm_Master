#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

void inputArray(vector<int>& arr, size_t size, map<int, int>& myMap, bool map) {
  arr.resize(size);  // size에 맞게 벡터 크기 재할당
  if (map) {
    for (int i = 0; i < size; i++) {
      cin >> arr[i];
      myMap[arr[i]] = i;
    }
  } else {
    for (size_t i = 0; i < size; i++) cin >> arr[i];
  }
}

int selectionSort(vector<int>& arr1, vector<int>& arr2, size_t size,
                  map<int, int> myMap) {
  if (arr1 == arr2) return 1;
  size_t index = size - 1;

  for (auto i = myMap.rbegin(); i != myMap.rend(); i++) {
    size_t big = i->second;

    if (big != index) {
      int temp = arr1[index];
      arr1[index] = i->first;
      arr1[big] = temp;

      i->second = index;
      auto find = myMap.find(temp);
      find->second = big;
    }

    if (arr1 == arr2) return 1;
    index--;
  }
  return 0;
}

int main() {
  vector<int> arr1, arr2;
  map<int, int> myMap;
  size_t size;
  cin >> size;

  inputArray(arr1, size, myMap, true);
  inputArray(arr2, size, myMap, false);

  int isSame = selectionSort(arr1, arr2, size, myMap);
  cout << isSame << '\n';
  return 0;
}