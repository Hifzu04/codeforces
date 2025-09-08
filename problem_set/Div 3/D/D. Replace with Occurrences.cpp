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
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<int> freq(n + 1, 0);
    vector<vector<int>> ind(n + 1);
    int x = 0;
    f(i, n)
    {
        freq[b[i]]++;
        ind[b[i]].push_back(i);
    }
    vector<int> a(n);
    for (int i = 1; i <= n; i++)
    {
        if (freq[i] == 0)
            continue;
        if (freq[i] % i)
        {
            cout << -1 << "\n";
            return;
        }
        for (int j = 0; j < freq[i]; j++)
        {
            if (j % i == 0)
                x++;
            a[ind[i][j]] = x;
        }
    }
    for (auto i : a)
    {
        cout << i << " ";
    }
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