#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll cntup = 0;
    ll cntdown = 0;
    if (n < 3)
    {
        cout << 0 << "\n";
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '-')
                cntup++;
            else
                cntdown++;
        }

        if (cntup % 2 != 0)
        {
            cout << cntdown * (cntup / 2) * (cntup / 2 + 1) << "\n";
        }
        else
        {
            cout << cntdown * (cntup / 2) * (cntup / 2) << "\n";
        }
    
    }
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