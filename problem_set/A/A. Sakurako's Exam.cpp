#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a%2)
    {

        cout << "NO" << "\n";
    }
    else
    {
        if (b % 2 == 0)
        {
            cout << "YES" << "\n";
        }
        else
        {
            if (a == 0)
            {
                cout << "NO" << "\n";
            }
            else
            {
                cout << "YES" << "\n";
            }
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