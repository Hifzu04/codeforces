#include <bits/stdc++.h>
#define ll long long
#define loop(n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll z = 0, cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                if (z > 0)
                    cnt++;
                z = 0;
            }
            else
                z++;
        }
        if (z > 0)
            cnt++;
        if (cnt == 0)
        {
            cout << 0 << endl;
        }
        else if (cnt == 1)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}