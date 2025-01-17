#include <bits/stdc++.h>
#define ll long long
#define loop(n) for (ll i = 0; i < n; i++)
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
        vector<ll> ihave(n);
        vector<ll> required(n);
        loop(n)
        {
            cin >> ihave[i];
        }
        loop(n)
        {
            cin >> required[i];
            ihave[i] -= required[i];
        }

        sort(ihave.begin(), ihave.end());
        if (ihave[0] + ihave[1] >= 0)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}