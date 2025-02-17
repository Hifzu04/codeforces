#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    ll n ; cin>>n;
    ll arr[n];
    loop{
        cin>>arr[i];
    }
    vector<ll>posvec(n,0) ;
    vector<ll>negvec(n,0) ; 
    ll possum =0; 
    ll negsum = 0; 

    loop{
        if(arr[i]>0) possum+=arr[i];
        if(arr[i]<0) negsum-=arr[i];

        posvec[i] = possum;
        negvec[i] = negsum;
    }

    ll ans = max(negsum, possum);

    loop{
        ans = max(ans, (posvec[i]+(negsum-negvec[i])));
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