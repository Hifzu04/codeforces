#include <bits/stdc++.h>
#define ll long long
#define loop(n) for(ll i=0;i<n;i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t; 
    while(t--){  
        ll n ; cin>>n;
        ll monoarr[n];
        ll scararr[n];
        loop(n){
            cin>>monoarr[i];
        }
        loop(n){
            cin>>scararr[i];
        }
        ll monosum = monoarr[n-1];
        ll scarsum =0;
        for(ll i=0 ; i<n-1;i++){
            if(monoarr[i]>=scararr[i+1]){
                monosum+=monoarr[i];
                scarsum+=scararr[i+1];
               
            }
           
        } 
        cout<<monosum-scarsum<<"\n" ;
    


}
    return 0;
}