#include <bits/stdc++.h>
using ll = long long;
#define loop for(ll i = 0; i < n; i++)
using namespace std;

void solve() {
    ll n, m;
    cin >> n >> m;
    
    vector<ll> vec(n);
    loop {
        cin >> vec[i]; 
    }

    ll b;
    cin >> b;  

    ll l, h;
    ll curr = LLONG_MIN; 
    bool flag = true;  

    for (ll i = 0; i < n; i++) {
        l = b - vec[i];
        h = vec[i];
        ll low = min(l, h);
        ll high = max(l, h);

        if (low >= curr)
            curr = low;
        else if (high >= curr)
            curr = high;
        else {
            flag = false;
            break;
        }
    }

    cout << (flag ? "YES\n" : "NO\n");
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {    
        solve();
    }
    
    return 0;
}
