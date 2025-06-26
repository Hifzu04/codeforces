#include <bits/stdc++.h>
#define ll long long

#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
      ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll ans =0 ;
    for(ll i = 0 ;  i<n-2 ; i++){
          for(ll j = i+1 ; j<n-1 ; j++){
               auto it = lower_bound(a.begin()+j+1 , a.end() , a[i]+a[j]);
               ll end = it - (a.begin()+j+1);


               it = upper_bound(a.begin()+j+1 , a.begin()+j+end+1 , a[n-1]-a[i]-a[j]);
               ans += (a.begin()+j+1+end) - it;

          }
    }
    cout<<ans<<"\n";
}

int main() {
  //  ios_base::sync_with_stdio(false);
    //cin.tie(nulltptr);
    ll t = 1; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}