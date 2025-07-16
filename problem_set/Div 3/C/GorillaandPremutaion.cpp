#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
      int n, m, k; cin >> n >> m >> k;
    
    for (int i = n; i >= k; i--){
        cout << i << " ";
    }
    for (int i = m + 1; i < k; i++){
        cout << i << " ";
    }
    for (int i = 1; i <= m; i++){
        cout << i << " ";
    }
    cout << "\n";
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