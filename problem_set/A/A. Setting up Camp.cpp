#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

void solve()
{
    ll i, e, u;
    cin >> i >> e >> u;
    ll rem = (e + u) % 3;
    ll ans = i;
    if (((e % 3) == 1 and u <2) or ((e % 3 == 2) and u <1))
        
    {
        cout << -1 << "\n";
        return;
    }
    else
    {
        if ((e + u) % 3 == 0)
        {
            ans += (e + u) / 3;
        }
        else
        {
            ans += ((e + u) / 3 + 1);
        }
    }
    cout << ans << "\n";
}
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}