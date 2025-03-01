#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

bool isPerfect(ll k)
{
    ll j = sqrtl(k * (k + 1) / 2);
    return (j * j != k * (k + 1) / 2);
}

void solve()
{
    ll n;
    cin >> n;
    if (!isPerfect(n))
    {
        cout << "-1\n";
        return;
    }
    vector<ll>vec(n+1);

    for(ll i =1 ; i<=n ; i++) vec[i] = i;

      ll j=0;
    for (ll i = 1; i <= n; i++) {
        while (j * j < i * (i + 1) / 2) j++;
        if (j * j == i * (i + 1) / 2) {
            swap(vec[i], vec[i + 1]);
        }
        cout << vec[i] << " ";
    }
    cout<<"\n";
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