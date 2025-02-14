#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long maxm = 0;
    for (long long i = 0; i < n; i += 2) {
        if (max(maxm, a[i]) != max(maxm, a[i + 1])) {
            cout << "No\n";
            return;
        }
        maxm = max(maxm, a[i]) + 1;
    }
    cout << "Yes\n";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
}