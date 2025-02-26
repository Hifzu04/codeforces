#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    ll n,k,p;
    cin>>n>>k>>p;
    ll ans = ((k/p));
    if(ans<0) ans *= -1;
    if(k%p!=0) ans ++;

    if(ans <= n) cout << ans << "\n";
    else cout << -1 << "\n";
    


}
int main()
{
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1; cin>>t; 
    while(t--){    
    solve();

}
    return 0;
}