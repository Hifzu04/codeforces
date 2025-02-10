#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

void solve()
{
    string s;
    cin >> s;
    bool flag = 0;
    for (int i = 0; i < s.size()-1; i++)
    {
        if (s[i] == s[i + 1])
        {
            flag = 1;
            break;
        }
    }

    if(flag) cout<<1<<"\n";
    else cout<<s.size()<<"\n";
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