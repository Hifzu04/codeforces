#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<int, int> mpp;
    loop
    {
        int t;
        cin >> t;
        mpp[t]++;
    }
    ll numberofunique = 0;
    ll half = 1;

    for (auto it : mpp)
    {
        if (it.second == 1)
        {
            numberofunique++;
        }
    }

    if (n and 1)
    {
        half = n / 2 + 1;
    }
    else
    {
        half = n / 2;
    }


    if (numberofunique >= half)
    {

        cout << 2 * half << "\n";
    }
    else{
         cout<<2*numberofunique+(half-numberofunique)<<"\n";
    }
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