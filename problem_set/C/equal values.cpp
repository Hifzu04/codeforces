#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
    ll n  ; cin>>n ;
    ll arr[n];
    ll ans = LLONG_MAX;
    f(i,n) cin>>arr[i];
     
     ll i = 0 ; ll j=0;
     while(i<n){
        while(j<n && arr[i]==arr[j]){
            j++;
            ans = min(ans , i*arr[i] + (n-(j-1) -1 )*arr[j-1]);
        }
        i=j;
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