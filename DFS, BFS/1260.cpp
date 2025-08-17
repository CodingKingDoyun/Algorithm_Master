#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

std::vector<bool> dfsVisited;
std::vector<bool> bfsVisited;
std::vector<std::vector<int>> list;
std::vector<int> dfsResult;
std::vector<int> bfsResult;

int node, edge, v;
void DFS(int n);
void BFS(int n);

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  std::cin >> node >> edge >> v;
  dfsVisited.assign(node + 1, false);
  bfsVisited.assign(node + 1, false);

  list.resize(node + 1);
  for (int i = 1; i <= edge; i++) {
    int a, b;
    std::cin >> a >> b;
    list[a].push_back(b);
    list[b].push_back(a);
  }
  for (int i = 1; i <= node; i++) {
    sort(list[i].begin(), list[i].end());
  }

  DFS(v);
  BFS(v);

  for (size_t i = 0; i < dfsResult.size(); i++)
    std::cout << dfsResult[i] << ' ';
  std::cout << '\n';
  for (size_t i = 0; i < bfsResult.size(); i++)
    std::cout << bfsResult[i] << ' ';
  std::cout << '\n';
  return 0;
}

void DFS(int n) {
  if (dfsVisited[n]) {
    return;
  }

  dfsVisited[n] = true;
  dfsResult.push_back(n);

  for (auto p : list[n]) {
    if (!dfsVisited[p]) DFS(p);
  }
}

void BFS(int n) {
  std::queue<int> q;
  bfsVisited[n] = true;
  q.push(n);

  while (!q.empty()) {
    int cur = q.front();
    q.pop();
    bfsResult.push_back(cur);

    for (auto nxt : list[cur]) {
      if (!bfsVisited[nxt]) {
        bfsVisited[nxt] = true;
        q.push(nxt);
      }
    }
  }
}