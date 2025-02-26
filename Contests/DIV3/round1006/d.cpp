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

    ll left =1;
    ll right=1 ;
    ll ans = 0  ; 

    for(int i = 0   ; i< n ; i++){
        int invcnt = 0;
        for(int j= i+1 ; j< n ; j++){
           if(arr[i]>arr[j]){
            invcnt++;
           }
           if(arr[i]<arr[j]){
            invcnt--;
           }

           if(invcnt>ans){
            ans = invcnt;
            left = i+1;
            right= j+1;
           }
        }
    }

    cout<<left<<" "<<right<<"\n";

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