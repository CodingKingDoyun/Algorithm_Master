#include <iostream>
using namespace std;

int main() {
  int time, min, max, work, rest, cnt = 0;
  cin >> time >> min >> max >> work >> rest;
  int pulse = min;

  // 최초 맥박에서 운동시 최대 맥박 초과할 경우, 조기 종료
  if (min + work > max) {
    cout << -1 << endl;
    return 0;
  }

  int workcnt = 0;
  while (workcnt < time) {
    // 맥박이 최대 맥박보다 크거나 같을 때, 운동할 시 최대 맥박을 넘을 때
    if (pulse >= max || pulse + work > max) {
      if (pulse - rest < min) {  // 휴식할 경우, 최소 맥박보다 낮을 때
        pulse = min;
        cnt++;
      } else {
        pulse -= rest;
        cnt++;
      }
    } else {
      pulse += work;
      cnt++, workcnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}