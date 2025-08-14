#include <bits/stdc++.h>
using ll = long long;
#define f(i, n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    ll n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    set<ll>idx;
    f(i, m){
        ll x ;cin>>x;
        idx.insert(x-1);

    }

 
    string c;
    cin >> c;
    sort(c.begin(), c.end());

    vector<ll> positions(idx.begin(), idx.end()); 
  
    for(ll i = 0 ; i<positions.size() ; i++){
         s[positions[i]] = c[i];
    }
    cout << s << "\n";
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