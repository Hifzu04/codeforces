#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    ll n ; cin>>n;
    vector<ll>vec(n);
    loop{
        cin>>vec[i];
    }
    unordered_set<ll>prev, total;
    ll ans =0;
    for(ll i =0 ; i<n ; i++){
        total.insert(vec[i]);
        if(prev.count(vec[i])){
            prev.erase(vec[i]);
        }

        if(prev.size() ==0){
            ans++;

            prev= total;
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