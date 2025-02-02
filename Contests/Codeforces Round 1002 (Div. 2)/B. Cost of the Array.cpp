#include <bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t; 
    while(t--){    
    ll n,k ;
    cin>>n>>k;
    map<ll,ll>mpp;
    vector<ll>vec(n);
    loop{
         cin>>vec[i];
         mpp[vec[i]]++;


    }

    if(n==k) cout<<vec[n-1]+1<<"\n";
    else{
        if(n-k+1 < mpp[1]){
            cout<<2<<"\n";
        }
        else{
            cout<<1<<"\n";
        }
    }


}
    return 0;
}