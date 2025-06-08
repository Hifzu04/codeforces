#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll gfchance = min(a, c);
    ll fchance = min(b, d);
    if(gfchance>=fchance){
        cout << "Gellyfish";
    }
    else{
        cout << "Flower";
    }
        cout << "\n";
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