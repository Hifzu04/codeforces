#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    ll n ,k ; cin>>n>>k;
    string s ; 
    ll cnt =1;
    for(ll i = 0 ; i< n; i++){
          if(cnt <= k){
              s+='1';
              cnt++;
          }else s+='0';
    }

    cout<<s<<"\n";

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