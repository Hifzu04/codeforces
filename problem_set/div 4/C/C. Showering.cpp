#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
    ll n,s,m;
    cin>>n>>s>>m;
    n*=2;
    vector<int>vec(n);
    for(ll i =0 ; i<n ; i++){
          cin>>vec[i];
    }
    ll sec = m;
    if(vec[0] >=s) {
        yes; return;
    }
    for(ll i= n-1 ; i>=0; i-=2){
        ll first = vec[i];
        ll diff = sec-first;
      // cout<<diff<<" ";
        if(diff>=s){
            yes;
            return ;
        }
        sec= vec[i-1];

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