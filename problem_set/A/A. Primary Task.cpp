#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

void solve()
{
    int a;
    cin >> a;
    string mystr = to_string(a);

    if (mystr[0] == '1' && mystr[1] == '0')
    {

        if ((mystr[2] - '0' )>= 2 || (mystr[2] =='1' and  mystr.length()>3))
            cout << "YES" << "\n";
        else
        {
            cout << "NO" << "\n";
        }
    }
    else
        cout << "NO" << "\n";
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