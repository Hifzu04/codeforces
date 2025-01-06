#include <bits/stdc++.h>
#define ll long long
#define loop(n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t; 
    while(t--){    
    ll n, k;
    cin>>n>>k;
    ll var=1;
    ll j=0;


    for(ll i = 0 ; i <n ; i++){
         if((i+1)%k==0){
            cout<<var<<" ";
            var++;
         }else{
               cout<<n-j<<" ";
               j++;
         }
    }
    cout<<"\n";


}
    return 0;
}