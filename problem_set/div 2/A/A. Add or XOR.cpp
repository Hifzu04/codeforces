#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    
    if (a == b) {
        cout << 0 << "\n";
        return;
    }
    // Case 1: a > b
    if (a > b) {
        // only possible if exactly b = a-1 and a is odd
        if ((a - b) == 1 && (a & 1)) {
            cout << y << "\n";
        } else {
            cout << -1 << "\n";
        }
        return;
    }
    
    // Case 2: a < b
    ll d = b - a;
    ll ans = 0;
    
    if (y >= x) {
        // always cheaper to do +1
        ans = d * x;
    } else {
        // use XOR when possible
        if (a & 1) {
            // make a even first
            ans += x;
            d--;
        }
        // now a is even
        ll pairs = d / 2;
        ans += pairs * (x + y);
        if (d % 2 == 1) {
            // one leftover +1 via XOR on even
            ans += y;
        }
    }
    
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
