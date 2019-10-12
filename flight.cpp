// hackerearth flight plan bfs
#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool vis[1005];
int parent[1005];

void bfs(int x, int end) {
  queue<int> q;
  q.push(x);
  vis[x] = 1;

  while (!q.empty()) {
    int p = q.front();
    q.pop();

    for (int i = 0; i < v[p].size(); i++) {
      if (!vis[v[p][i]]) {
        parent[v[p][i]] = p;
        if (v[p][i] == end) return;
        q.push(v[p][i]);
        vis[v[p][i]] = 1;
      }
    }
  }
}

int main() {
  int n, m, c, t, a, b, x, y, count = 1;
  cin >> n >> m >> t >> c;

  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
  }

  cin >> x >> y;

  for (int i = 0; i < n; i++) {
    sort(v[i].begin(), v[i].end());
  }

  bfs(x, y);
  int z = parent[y];
  vector<int> ans;
  ans.push_back(y);

  while (z != x) {
    ans.push_back(z);
    z = parent[z];
    count++;
  }
  ans.push_back(x);
  count++;

  cout << count << endl;
  for (int i = ans.size() - 1; i >= 0; i--) {
    cout << ans[i] << " ";
  }
  cout << endl;

  return 0;
}
