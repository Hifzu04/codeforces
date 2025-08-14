#include <bits/stdc++.h>
using ll = long long;
#define f(i, n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll arr[n][m];
    f(i, n)
    {
        f(j, m)
        {
            cin >> arr[i][j];
        }
    }

    f(i, n)
    {
        f(j, m)
        {
           ll val = 0;
            if (i  > 0)
            {
                if (arr[i - 1][j] < arr[i][j])
                    val = max(val, arr[i - 1][j]);
                else
                    continue;
            }
            if (j > 0)
            {
                if (arr[i][j - 1] < arr[i][j])
                {
                    val = max(val, arr[i][j - 1]);
                }

                else
                    continue;
            }
            if (i + 1 < n)
            {
                if (arr[i + 1][j] < arr[i][j])
                {
                    val = max(val, arr[i + 1][j]);
                }
                else
                    continue;
            }
            if (j + 1 < m)
            {
                if (arr[i][j + 1] < arr[i][j])
                {
                    val = max(val, arr[i][j + 1]);
                }
                else
                    continue;
            }
            arr[i][j] = val;
        }
    }

    f(i, n)
    {
        f(j, m)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}