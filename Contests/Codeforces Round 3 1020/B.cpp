#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

void solve()
{
    ll n, x;
    
    cin >> n >> x;

    vector<ll> vec(n);

    loop
    {
        vec[i] = i;
    }

    if (n != x)
    {
        ll temp = vec[n-1];
        vec[n-1] = x;
        vec[x] = temp;
    }
    loop{
        cout<<vec[i]<<" ";  
    }
    cout<<"\n";
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