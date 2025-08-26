#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
     int n ; cin>>n;
     vector<ll>vec(n);
     f(i,n) cin>>vec[i];

     ll gd=0 ;
     for(ll p : vec) gd+=p;

     gd-=(n-1);

     ll a = 0; ll b = 0;

     f(i,n){
        ll w = min<ll>((ll)i , vec[i]) -2;
        if(w<0) w= 0;
        ll c= max(b, a+w);
        a=b ; 
        b=c;

     }
     cout<<gd-b<<"\n";
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