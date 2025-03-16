#include <bits/stdc++.h>
using ll = long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;
const ll mod = 1000000007;

// Fast modular exponentiation
ll modExp(ll base, ll exp, ll mod) {
    ll result = 1;
    base %= mod;
    while(exp > 0) {
        if(exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

void solve() {
    ll s;
    cin >> s;
    vector<ll> arrN(s), arrK(s);

    for(ll i = 0; i < s; i++) {
        cin >> arrN[i];
    }
    for(ll i = 0; i < s; i++) {
        cin >> arrK[i];
    }

    for(ll i = 0; i < s; i++) {
        cout << modExp(2, arrK[i], mod) << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    t=1; 
    while(t--) {    
        solve();
    }

    return 0;
}
