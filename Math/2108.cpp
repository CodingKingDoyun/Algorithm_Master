#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int n;
  std::cin >> n;

  std::vector<int> list(n);
  std::vector<int> counting(8001);
  double sum = 0;
  for (int i = 0; i < n; i++) {
    std::cin >> list[i];
    sum += list[i];              // 산술평균을 위한 총합 계산
    counting[list[i] + 4000]++;  // 카운팅 정렬
  }
  std::sort(list.begin(), list.end());  // 풀이를 위해 오름차순 정렬

  int arithmeticMean = round(sum / n);  // 산술평균 계산
  int medianValue = list[n / 2];        // 중앙값 계산
  // 최빈값 계산
  std::vector<int> maxList;
  int modeValue = *std::max_element(counting.begin(), counting.end());
  for (int i = 0; i < 8001; i++) {
    if (counting[i] == modeValue) maxList.push_back(i - 4000);
  }
  if (maxList.size() == 1) {  // 최빈값이 하나 일 경우
    modeValue = maxList[0];
  } else {  // 최빈값이 하나 이상일 경우
    modeValue = maxList[1];
  }
  int rangeValue = list.back() - list.front();  // 범위 계산

  std::cout << arithmeticMean << '\n'
            << medianValue << '\n'
            << modeValue << '\n'
            << rangeValue << '\n';
  return 0;
}