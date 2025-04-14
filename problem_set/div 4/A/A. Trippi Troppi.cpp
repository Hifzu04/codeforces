#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

void solve()
{
    string ans = "";
    for (int i = 0; i < 3; i++)
    {
        string s;
        cin >> s;
        
        ans += s[0];
       
    }
    cout<<ans<<"\n";
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