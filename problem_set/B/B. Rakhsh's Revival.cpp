#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    ll n , m , k ; 
    cin>>n>>m>>k;
    vector<ll>vec(n);

    loop{
        cin>>vec[i];
    }

    ll cnt = 0 ; 
    ll ans = 0 ; 
    for(ll i =0 ; i<n ; i++){
        if(vec[i]==0){
            cnt++;
            if(cnt==m  ){
                  fill(vec.begin() + i, vec.begin() + i+k, 1);
                  ans++;

            }
           
        }
         cnt = 0;
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