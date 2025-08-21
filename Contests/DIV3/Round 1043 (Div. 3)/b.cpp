#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

void solve() {
    ull n;
    cin >> n;
    vector<ull> ans;

    
    ull pow10 = 10;
    while (true) {
        ull denom = 1 + pow10; 
        if (denom > n) break;
        if (n % denom == 0) ans.push_back(n / denom);
        
        if (pow10 > n / 10) break;
        pow10 *= 10;
    }

    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());

    if (ans.empty()) {
        cout << 0 << '\n';
    } else {
        cout << ans.size() << '\n';
        for (size_t i = 0; i < ans.size(); ++i) {
            if (i) cout << ' ';
            cout << ans[i];
        }
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
