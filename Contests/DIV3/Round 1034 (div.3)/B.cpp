#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
    ll n , j , k ;cin>>n>>j>>k;
    ll arr[n];
    f(i,n) cin>>arr[i];

     if (k>1) {
        yes; return ;
     }
     ll mx = 0 ; 
     ll tgt = arr[j-1];
     f(i,n){
        mx = max(mx, arr[i]);
     }
     if(mx==tgt){
      yes ; return;
     } 
     no;
    



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