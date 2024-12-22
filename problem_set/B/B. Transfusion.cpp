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
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll evenSum = 0;
        ll evencnt = 0;
        ll oddcnt = 0;
        ll oddSum = 0;
        for (ll i = 0; i < n; i++)
        {
            if (i%2 == 0)
            {
                evenSum += arr[i];
                evencnt++;
            }

            else
            {
                oddSum += arr[i];
                oddcnt++;
            }
        }

        if ((evenSum % evencnt == 0) and (oddSum % oddcnt == 0) and (evenSum / evencnt == oddSum / oddcnt))
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    return 0;
}