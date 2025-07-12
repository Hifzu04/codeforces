#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
    ll n ; cin>>n;
    ll arr[n] ;
    ll maxm[n] ={0};
    ll sum[n] ={0} ;
   
    f(i,n){
        cin>>arr[i];
      
    }
    sum[0] =arr[0];
    ll maxi =-1; 

    for(ll i=1 ; i<n ; i++){
      sum[i] = sum[i-1]+arr[i];  
  
    }

    f(i,n){
        maxi= max(maxi,arr[i]);
        maxm[i] = maxi;
    }


    

 ll cnt = 0 ; 
    f(i,n){
        if(sum[i]-maxm[i] ==maxm[i]){
            cnt++;
        }
    }
    cout<<cnt<<"\n";
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