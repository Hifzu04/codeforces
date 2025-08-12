#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;

    if (n == 2) {
        cout << -1 << " " << 2 << "\n";
        return;
    }

    for (ll i = 0; i < n; i++) {
        if (i % 2 == 0) { 
            // odd index in 1-based terms → negative
            cout << -1 << " ";
        } else {
            
            if (i + 1 < n && (i + 1) % 2 == 0) {
                
                cout << 3 << " ";
            } else {
                
                cout << 2 << " ";
            }
        }
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
