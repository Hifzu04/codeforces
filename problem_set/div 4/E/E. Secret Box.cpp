#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
    ll x,y,z,k;
    cin>>x>>y>>z>>k;
    ll ans=0;
    ll vol = x*y*z;
    for(ll i =1 ; i<=x ; i++){
        for(ll j=1 ; j<=y ; j++){
            if(k%(i*j)) continue;
            
            ll p = k/(i*j);

            if(p>z) continue;

            ll a = x-i+1 , b= y-j+1 ,c = z-p+1 ;
            ans = max(ans , a*b*c);

        }
    }
    cout<<ans<<"\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}