#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n ; ll m;
        cin>>n>>m;
       string arr[n];
        for(ll i = 0 ; i<n ; i++){
            cin>>arr[i];
        }
        ll sum=arr[0].size();
        ll cnt=0;
       // string s="hifz";
       // cout<<s.size();

        for(ll i=0; i<n;i++){
            if(sum<=m){
            sum += (arr[i+1].size());
            cnt++;
           }
        }
      //  if(sum==m)
        cout<<cnt<<"\n";
        ///else
       // cout<<cnt-1<<"\n";
    }


    return 0;
}