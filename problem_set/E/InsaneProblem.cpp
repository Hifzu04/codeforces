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
    ll k,l1,r1,l2,r2;
    cin>>k>>l1>>r1>>l2>>r2;

    ll ans =0 ; 
    ll exp =1;

    while(exp<=1e9){
        ans+= max( min(r2/exp,r1)-  max((l2+exp-1)/exp,l1)+1 , 0LL);
        exp*=k;

    }
    cout<<ans<<"\n";


}
    return 0;
}