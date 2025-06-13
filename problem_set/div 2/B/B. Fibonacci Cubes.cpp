#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;
ll f(ll n){
    if (n==1 ) return 1;
    else if (n==2) return 2;

    return f(n-1)+f(n-2);
}

void solve() {
    ll n,m;cin>>n>>m;
    ll largestCube = f(n);
    ll secondlargestCube = f(n-1);
    bool flag = 0 ; 
    for(ll i = 0 ; i<m  ;i++){
        ll maxmx= 0;
        ll minxx = INT16_MAX;
      
        for(int j =0; j<3 ; j++){
             ll x; cin>>x;
             maxmx = max(maxmx,x);
             minxx = min(minxx , x);
             

        }
        if (minxx >=largestCube && maxmx>=largestCube+secondlargestCube){
            cout<<1;

        }else cout<<0;
      
       
    }
    cout<<"\n";
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