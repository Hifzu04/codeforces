#include <bits/stdc++.h>
using ll = long long;
#define f(i, n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    f(i, n)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int ans = 0;
    sort(arr ,arr+n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            break;
        }
        else
            ans++;
    }
    cout << sum + ans;

    cout << "\n";
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