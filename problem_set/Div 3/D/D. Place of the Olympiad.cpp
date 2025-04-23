#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll eachrowgreen =  (k+n-1)/n ;    //note p+(z-1)/z == ceil (p/z) 
    ll emptyineachrow = m-eachrowgreen+1;
    cout<<(eachrowgreen+emptyineachrow-1)/emptyineachrow<<"\n";
    
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