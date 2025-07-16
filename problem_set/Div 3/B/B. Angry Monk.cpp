#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
    ll n , k ; cin>>n>>k;
    vector<ll>vec(k);
    f(i,k){
        cin>>vec[i];
    }
    sort(vec.begin() , vec.end());
    ll sum =0 ;
    f(i , k-1){
        sum+=(2*vec[i]-1);
    }
    cout<<sum<<"\n";
    
    
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