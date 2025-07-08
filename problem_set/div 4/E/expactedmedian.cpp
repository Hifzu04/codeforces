#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = 1000000007;
const int MAXN = 2000005;  // = 2e6 + 5

// Fast exponentiation modulo
ll mod_pow(ll a, ll e = MOD-2) {
    ll res = 1;
    while (e > 0) {
        if (e & 1) res = res * a % MOD;
        a = a * a % MOD;
        e >>= 1;
    }
    return res;
}

// Precompute factorials and inverse factorials up to MAXN
ll fac[MAXN+1], invfac[MAXN+1];

void init_combinatorics() {
    fac[0] = 1;
    for (int i = 1; i <= MAXN; i++) {
        fac[i] = fac[i-1] * i % MOD;
    }
    invfac[MAXN] = mod_pow(fac[MAXN]);  // inverse of fac[MAXN]
    for (int i = MAXN; i > 0; i--) {
        invfac[i-1] = invfac[i] * i % MOD;
    }
}

// Compute n choose r modulo MOD
ll nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fac[n] * invfac[r] % MOD * invfac[n-r] % MOD;
}

void solve() {
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (ll &x : a) {
        cin >> x;
    }

    
    ll cnt0 = 0, cnt1 = 0;
    for (ll x : a) {
        if (x == 0) cnt0++;
        else          cnt1++;
    }
    ll mid = (k + 1) / 2;

    ll answer = 0;
    
    for (ll z = 0; z <= k; z++) {
        ll o = k - z;  // ones
        if (z > cnt0 || o > cnt1) continue;

        
        ll ways0 = nCr(cnt0, z);
        ll ways1 = nCr(cnt1, o);
        ll ways  = ways0 * ways1 % MOD;

        
        if (z < mid) {
            answer = (answer + ways) % MOD;
        }
    }

    cout << answer << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    init_combinatorics();

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
