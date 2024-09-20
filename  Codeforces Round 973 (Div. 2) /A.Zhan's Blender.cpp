#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t ; 
     cin>>t;
     while(t--){
        ll n ;
        cin>>n;
        ll x , y;
        cin>>x>>y;
        ll limit = min(x,y);
        if (n%limit == 0)  cout<<n/limit<<"\n";
        else cout<<n/limit +1 <<"\n";
      

     }


    return 0;
}