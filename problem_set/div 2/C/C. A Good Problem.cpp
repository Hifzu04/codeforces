#include <bits/stdc++.h>
using ll = long long;
#define f(i, n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    ll n, l, r, k;
    cin >> n >> l >> r >> k;
    if (n & 1)
    {
        cout << l << "\n";
    }
    else
    {
        if (n == 2)
        {
            cout << -1;
        }
        else
        {

            ll power = floor(log2(l));
            power++;
            ll ans = pow(2, power);
            if (r < ans)
            {
                cout << -1;
            }
            else
            {
                if (k <= n - 2)
                {
                    cout << l;
                }
                else
                    cout << ans;
            }
        }
         cout << "\n";
}
    }
   

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}