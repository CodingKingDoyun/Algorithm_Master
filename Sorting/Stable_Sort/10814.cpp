#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct person {
  int age;
  string name;
  int order;
};

int main() {
  int n;
  cin >> n;

  vector<person> date(n);
  for (int i = 0; i < n; i++) {
    cin >> date[i].age >> date[i].name;
    date[i].order = i;
  }

  sort(date.begin(), date.end(), [](person a, person b) {
    if (a.age == b.age) {
      return a.order < b.order;
    } else {
      return a.age < b.age;
    }
  });

  for (int i = 0; i < n; i++) {
    cout << date[i].age << ' ' << date[i].name << '\n';
  }
  return 0;
}