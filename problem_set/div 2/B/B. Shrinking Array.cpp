#include <bits/stdc++.h>
using ll = long long;
#define f(i, n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    f(i, n) cin >> a[i];

    bool flag = false;

    // already beautiful

    int ans = -1;
    for (int i = 2; i < n; i++)
    {
        if (min(a[i - 1], a[i - 2]) <= a[i] && a[i] <= max(a[i - 1], a[i - 2]))
            ans = 1;
    }
    for (int i = 0; i < n - 2; i++)
    {
        if (min(a[i + 1], a[i + 2]) <= a[i] && a[i] <= max(a[i + 1], a[i + 2]))
            ans = 1;
    }
    for (int i = 1; i < n; i++)
    {
        if (abs(a[i - 1] - a[i]) <= 1)
            ans = 0;
    }
    cout<<ans<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}