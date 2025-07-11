#include <bits/stdc++.h>
using ll = long long;
#define f(i, n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    string a;
    string b;
    cin >> a >> b;
    string ansa ="";
    string ansb ="";
    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            ansa += (b[0]);
                ansb += (a[0]);
        }else {
            ansa+=a[i];
            ansb+=b[i];
        }
    }
    cout<<ansa<<" "<<ansb<<"\n";
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