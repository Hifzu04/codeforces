#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string ans = "";
    int rem = n % 5;

    for (int i = 5; i <= n; i += 5)
    {
        ans += "aeiou";
    }

    if (rem == 1)
        ans += "a";
    else if (rem == 2)
        ans += "ae";
    else if (rem == 3)
        ans += "aei";
    else if (rem == 4)
        ans += "aeio";

    

  sort(ans.begin() , ans.end());
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