#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    ll n ; cin>>n;
    if(!(n & 1)) {
        cout<<-1<<"\n"; 
    } 
    else {
        loop{
            cout<<n-i<<" ";
        }
        cout<<"\n";
    }

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