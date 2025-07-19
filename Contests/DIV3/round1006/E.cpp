#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
    ll n ; cin>>n ;
    ll p[n] ; 
    ll s[n];
    f(i, n ) cin>>p[i];
    f(i,n) cin>>s[i];

    ll ogarr[n] ; 
    f(i, n ){
        ogarr[i] = (p[i]*s[i]) /__gcd(p[i],s[i]);

    }
    ll pre = 0;
    int ans = 0;
    ll suff = 0;
    f(i,n){

        pre= __gcd(pre,ogarr[i]);
        if(p[i]!=pre){
            ans = 1; 
            break;
        }

        suff = __gcd(suff,ogarr[n-i-1]);

        if(suff!= s[n-i-1]){
            ans =1 ; 
            break;
        }
    }

    if(ans==1) no;
    else yes;
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