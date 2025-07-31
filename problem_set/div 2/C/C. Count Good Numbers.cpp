#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
    ll l , r ; cin>>l>>r;
    ll result =r; ll ans  = l-1;
    int arr[15] = {2,3,5,7,-6,-10,-14,-15,-21,-35,30,105,42,70,-210};
    l--;
    for(int i =0 ; i<15 ; i++){
        ll p = arr[i];
        result-= (r/p);
        ans-= (l/p); 
      }
      cout<<result-ans<<"\n";
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