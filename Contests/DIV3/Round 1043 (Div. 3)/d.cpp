#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

string i128_to_string(__int128 x) {
    if (x == 0) return "0";
    bool neg = x < 0;
    if (neg) x = -x;
    string s;
    while (x > 0) {
        int d = (int)(x % 10);
        s.push_back('0' + d);
        x /= 10;
    }
    if (neg) s.push_back('-');
    reverse(s.begin(), s.end());
    return s;
}

void solve() {
    ll n; ll k;
    cin >> n >> k;
    vector<__int128> pow3(60);
    pow3[0] = 1;
    for (int i = 1; i < 60; ++i) pow3[i] = pow3[i-1] * 3;
    vector<ll> cnt(60, 0);
    ll tmp = n;
    int maxi = 0;
    while (tmp > 0) {
        cnt[maxi] = tmp % 3;
        tmp /= 3;
        maxi++;
    }
    if (maxi == 0) maxi = 1;
    ll minimal_deals = 0;
    for (int i = 0; i < maxi; ++i) minimal_deals += cnt[i];
    ll target = min(k, n);
    if (((target - minimal_deals) & 1)) target--;
    if (target < minimal_deals) {
        cout << "-1\n";
        return;
    }
    __int128 cost = 0;
    for (int i = 0; i < maxi; ++i) {
        if (cnt[i] == 0) continue;
        if (i == 0) cost += (__int128)cnt[i] * 3;
        else cost += (__int128)cnt[i] * (pow3[i+1] + (__int128)i * pow3[i-1]);
    }
    ll curr_deals = minimal_deals;
    for (int i = maxi - 1; i >= 1 && curr_deals < target; --i) {
        if (cnt[i] == 0) continue;
        ll remPairs = (target - curr_deals) / 2;
        ll doSplits = min(cnt[i], remPairs);
        if (doSplits == 0) continue;
        cnt[i] -= doSplits;
        cnt[i-1] += 3 * doSplits;
        cost -= (__int128)pow3[i-1] * doSplits;
        curr_deals += 2 * doSplits;
    }
    if (curr_deals < target) {
        cout << "-1\n";
        return;
    }
    cout << i128_to_string(cost) << '\n';
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
