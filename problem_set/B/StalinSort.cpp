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
        ll n;
        cin >> n;
        ll arr[n];
        int ans = n;
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n; i++)
        {
            int cnt = i;
            for (int j = 0; j < n; j++)
            {
                if (arr[j] > arr[i])
                {
                    cnt++;
                }
            }
            ans = min(ans, cnt);

        }

        cout << ans << "\n";
    }

    return 0;
}