#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    ll n ;cin>>n;   
    ll arr[n];
    loop{
        cin>>arr[i];
    }
    ll key=  arr[0];
    ll ans =1;
    for(ll i = 1; i<n ; i++){
        if(arr[i]==key){
        ans++;
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