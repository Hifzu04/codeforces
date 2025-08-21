#include <bits/stdc++.h>
using ll = long long;
#define f(i, n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    int n, m;
    string a, b, c;
    cin >> n >> a;
    cin >> m >> b >> c;
    deque<char> dq(a.begin(), a.end());
    for (int i = 0; i < m; i++)
    {
        if (c[i] == 'V')
        {
            dq.push_front(b[i]);
        }
        else
        {
            dq.push_back(b[i]);
        }
    }
        string result(dq.begin(), dq.end());
        cout << result << "\n";
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

