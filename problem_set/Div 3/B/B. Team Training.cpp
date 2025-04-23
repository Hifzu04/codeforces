#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    ll n , x ; 
    cin>>n>>x;
    vector<ll>v(n);
    loop{
        cin>>v[i];
    }

    ll ans = 0 ;
    ll teamlen = 0;
    sort(v.rbegin() ,v.rend());
    loop{
        teamlen++;
      if(v[i]*teamlen >= x){
        ans++;
        teamlen=0;
      }
    }
    cout<<ans<<"\n";

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