#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
  
         int n;
        cin >> n;
        vector<long long> g(n);
        for (int i = 0; i < n; i++) {
            cin >> g[i];
        }
        sort(g.begin(), g.end());
        long long ans = 0;
        int k = (n + 1) / 2;
        for (int i = 0; i < k; i++) {
            ans += g[n - 1 - 2 * i];
        }
        cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}