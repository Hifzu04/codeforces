#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    ll l ,r ; 
    cin>>l>>r;

    ll cnt =0; 
    ll i = 1;

    while(l<=r){
        l+=i;
        cnt++;
        i++;

    }

    cout<<cnt<<"\n";

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