#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
    ll n ; cin>>n;
    ll arr[n] ; 
    f(i,n) cin>>arr[i];

    ll maxPrefix[n];
    maxPrefix[0] = arr[0];
    for(ll i = 1 ; i<n ; i++){
        maxPrefix[i] = max(arr[i],maxPrefix[i-1]);
    }
    ll preSum[n] = {0};
    preSum[n-1] = arr[n-1];
    for(ll i = n-2 ; i>=0 ; i--){
        preSum[i] = preSum[i+1]+arr[i]; 
    }
    
    for(int i = n-1 ; i>=0; i--){
       if(arr[i] < maxPrefix[i]){
        cout<<preSum[i]-arr[i]+maxPrefix[i]<<" ";
       }
       else cout<<preSum[i]<<" ";
    }
    cout<<"\n";

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