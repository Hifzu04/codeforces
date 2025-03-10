#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

void solve()
{
    ll a, b, m;
    cin >> a >> b >> m;
    ll ans = m / a + m / b;
    // if (m % a != 0) ans++;
    // if(m%b != 0) ans++;


    cout<<ans+2<<"\n";
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