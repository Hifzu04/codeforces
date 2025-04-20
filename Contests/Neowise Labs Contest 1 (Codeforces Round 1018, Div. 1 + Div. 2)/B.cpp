#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    ll n ,k ;
    cin>>n>>k;

    vector<ll>l(n);
    vector<ll>r(n);

    loop{
        cin>>l[i];
    }
    loop
    {
        cin>>r[i];
    }
    vector<ll>minvec(n);
    loop{
        minvec[i]=min(l[i],r[i]);
    }

    sort(minvec.begin(),minvec.end());

    ll ans= accumulate(l.begin(), l.begin()+n, 0LL)-accumulate(minvec.begin(),minvec.begin()+(n-k)+1,0LL) +accumulate(r.begin(), r.begin()+n, 0LL) +1;
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