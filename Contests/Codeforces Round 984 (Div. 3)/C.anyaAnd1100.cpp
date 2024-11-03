#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll q;
        cin >> q;
        ll i, v;
        for (ll j = 0; j < q; j++)
        {
            cin >> i >> v;
            i--;

            s[i] = v + '0';
            string substr = "1100";
            ll pos = s.find(substr);

            if (pos != string::npos)
            {
                cout << "YES" << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
        }
    }

    return 0;
}