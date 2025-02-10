#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;

        ll ans = 0;
        ll cnt = 0; 
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                cnt++;

                if (cnt == m)
                {
                    ans++;
                    cnt = 0;

                    i += (k - 1);
                }
            }
            else
            {
                cnt = 0;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
