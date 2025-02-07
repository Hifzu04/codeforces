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
    ll k=0;

    for (auto it : mpp)
    {
        if (it.second == 1)
        {
            numberofunique++;
        }
        else{
            k++;
        }
    }

   cout<<(numberofunique+1)/2 *2+k<<"\n";\
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