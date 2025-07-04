#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
    ll n ; ll k ; cin>>n>>k;
       string vec;
       cin>>vec;
    ll cnt1 =0;
    f(i,n){
        
        if(vec[i] =='1'){
              cnt1++;
        }
    }
    if(2*k>n ){
        cout<<"Alice"<<"\n";
        
    }
    else {
        if(cnt1 >k ) cout<<"Bob"<<"\n";
        else   cout<<"Alice"<<"\n"; 
    }
   

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