#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

void solve()
{
    ll n , m ;
    cin >> n >> m;

    vector<pair<ll , ll>>ans;
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        ll sumofeach = 0, totalsumofeach = 0;
        ll k = m + 1;
        for (ll j = 1; j <= m; j++)
        {
            cin >> x;
         sumofeach += x;
            totalsumofeach += (x * (--k));
        }
        ans.push_back({ sumofeach, totalsumofeach});
    }
    sort(ans.begin(), ans.end());
    ll res = 0;
    for (ll i = 1; i <= n; i++)
    {
        res += (ans[i - 1].first * (i - 1) * m + ans[i - 1].second);
    }
    cout << res << "\n";
}
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}