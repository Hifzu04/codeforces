#include <bits/stdc++.h>
using ll = long long;
#define f(i, n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    f(i, n)
    {
        cin >> arr[i];
    }
    int start = 0;
    int ans = 0;
    f(i, n)
    {

         if (arr[i] != 0)
            start = 0;
        else
        {
            start++;
            if (start == k)
            {
                ans++;
                i++;
                start = 0;
            }
        }
    }
    cout << ans << "\n";
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