#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;
        vector<vector<int>> adj(n+1);
        for (int i = 1; i <= n; ++i) {
            int k; cin >> k;
            for (int j = 0; j < k; ++j) {
                int v; cin >> v;
                adj[i].push_back(v);
            }
        }

        // Kahn topological sort
        vector<int> indeg(n+1, 0);
        for (int u = 1; u <= n; ++u)
            for (int v : adj[u])
                ++indeg[v];

        queue<int> q;
        for (int i = 1; i <= n; ++i)
            if (indeg[i] == 0) q.push(i);

        vector<int> topo;
        topo.reserve(n);
        while (!q.empty()) {
            int u = q.front(); q.pop();
            topo.push_back(u);
            for (int v : adj[u]) {
                if (--indeg[v] == 0) q.push(v);
            }
        }

        // DP in reverse topo to find longest path starting at each node
        vector<int> dp(n+1, 1), nxt(n+1, -1);
        for (int i = (int)topo.size() - 1; i >= 0; --i) {
            int u = topo[i];
            for (int v : adj[u]) {
                if (dp[v] + 1 > dp[u]) {
                    dp[u] = dp[v] + 1;
                    nxt[u] = v;
                }
            }
        }

        // find best start
        int start = 1;
        for (int i = 1; i <= n; ++i)
            if (dp[i] > dp[start]) start = i;

        // reconstruct path
        vector<int> path;
        for (int cur = start; cur != -1; cur = nxt[cur])
            path.push_back(cur);

        // print in the same style as interactive final answer
        cout << "! " << path.size();
        for (int v : path) cout << ' ' << v;
        cout << '\n';
    }
    return 0;
}
