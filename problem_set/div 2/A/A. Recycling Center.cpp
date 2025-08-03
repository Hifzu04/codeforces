#include <bits/stdc++.h>
using ll = long long;
#define f(i, n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    ll n, c;
    cin >> n >> c;
    vector<ll> vec(n);
    ll free = 0;
    f(i, n)
    {
        cin >> vec[i];
    }
    ll idx = 0 ;
    sort(vec.begin() ,vec.end(), greater<ll>());
    
    ll j = 0 ; 
    ll ans = 0;
    f(i,n){
        if((vec[i]*(1<<j))<=c){
             ans++;
             j++;
        }
    }
    cout << n-ans << "\n";
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