#include <iostream>
#include <vector>

std::vector<std::vector<int>> node;
std::vector<bool> visited;
void DFS(int n);
int count = 0;

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int computer, edge;
  std::cin >> computer >> edge;
  visited = std::vector<bool>(computer + 1, false);
  node.resize(computer + 1);

  for (int i = 0; i < edge; i++) {
    int a, b;
    std::cin >> a >> b;
    node[a].push_back(b);
    node[b].push_back(a);
  }

  DFS(1);
  std::cout << count << '\n';
  return 0;
}

void DFS(int n) {
  if (visited[n]) return;

  visited[n] = true;
  for (auto v : node[n]) {
    if (visited[v] == false) {
      count++;
      DFS(v);
    }
  }
}