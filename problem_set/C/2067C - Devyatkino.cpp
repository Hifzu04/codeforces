#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

bool isSeven(ll k)
{
    while(k>0){
        if(k%10==7){
            return true;
        }
        k/=10;

    }
    return false;
}

void solve()
{
    ll cnt;
    ll n;
    cin >> n;
    ll ans= 10;
    for (ll i = 9; i < 10000000000; i = i * 10 + 9)
    {
        cnt = 0;
        ll k = n;
        while (!isSeven(k)){
            cnt++;
            k+=i;
        }
        ans = min(ans,cnt);
    }
    cout<<ans<<'\n';
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