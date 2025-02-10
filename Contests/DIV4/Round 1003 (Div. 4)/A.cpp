#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s.size() == 2)
    {
        s.clear();
    }
    else
        s.erase(s.size() - 2, s.size() - 1);

    cout << s + 'i' << "\n";
}
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}