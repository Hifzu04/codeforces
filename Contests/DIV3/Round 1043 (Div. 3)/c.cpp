#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
     vector<ll> pow3;
     vector<ll> dealCost;
    if (pow3.empty()) {
        pow3.push_back(1);
        while (pow3.back() <= (ll)1e18 / 3 && pow3.size() <= 60) pow3.push_back(pow3.back() * 3);
        int maxIdx = (int)pow3.size() - 1;
        dealCost.assign(maxIdx + 1, 0);
        for (int x = 0; x <= maxIdx; ++x) {
            ll term1 = (x + 1 <= maxIdx) ? pow3[x + 1] : pow3.back() * 3;
            ll term2 = (x >= 1) ? (ll)x * pow3[x - 1] : 0;
            dealCost[x] = term1 + term2;
        }
    }
    ll n;
    if (!(cin >> n)) return;
    int pos = 0;
    ll ans = 0;
    while (n > 0) {
        int d = n % 3;
        if (d) ans += (ll)d * dealCost[pos];
        n /= 3;
        pos++;
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
