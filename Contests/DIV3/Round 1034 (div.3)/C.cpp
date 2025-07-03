#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
    ll n ; cin>>n ; 
    vector<ll>vec(n);
    ll smallest = LLONG_MAX;
    ll largest = LLONG_MIN;
    f(i,n){
        cin>>vec[i];
        smallest =min(smallest,vec[i]);
        largest = max(largest,vec[i]);
    }
    vector<ll>ans(n);
    ans[0] = 1;
    ans[n-1] = 1;
    
    vector<ll>csmall(n);
    vector<ll>clarge(n);
    csmall[0] = vec[0];
    clarge[n-1] = vec[n-1];
    for(ll i =1 ; i<n ; i++){
        if(vec[i]<csmall[i-1])
        csmall[i] = vec[i];

        
        else {
            csmall[i] = csmall[i-1];
        }
    }
    for(ll i =n-2 ; i>=0; i--){
         clarge[i] = max(clarge[i+1], vec[i]);
    }

    for(ll i =1 ; i<n-1 ; i++){
        if(vec[i]==smallest || vec[i]==largest) {
            ans[i] = 1;
        }
        else if(csmall[i] <vec[i] && clarge[i]>vec[i]){
            ans[i] = 0; 
        }
        else {
            ans[i] = 1 ;
        }
    }
    f(i,n){
        cout<<ans[i];
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