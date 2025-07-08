#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
    ll n ; cin>>n;
    ll arr[n];
    f(i,n) cin>>arr[i];
    map<ll,ll>mp;
    for(auto it:arr){
        mp[it]++;
    }
    vector<vector<ll>>ranges;
    ll mex =-1;
    for(ll m =0 ; m<=n; m++){
        if(m==mex+1){
            ll left = mp[m];
            ll right = n-(mex+1);
            if(mp[m]) mex++;
            ranges.push_back({left,right});

        }
        else break;
    }

    vector<ll>prefix(n+2 , 0);
    for(auto r:ranges){
        prefix[r[0]]++;
        prefix[r[1]+1]--;
    }

    for(ll i = 1 ; i<=n ; i++){
          prefix[i]+= prefix[i-1];
    }
    for(ll it =0 ; it<=n; it++){
        cout<<prefix[it]<<" ";
    }cout<<"\n";
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