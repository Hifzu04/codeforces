#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    int n ; cin>>n;
    if(n==2) cout<<"NO"<<"\n";
  else if(n&1) cout<<"NO"<<"\n";
    else cout<<"YES"<<"\n";

}
int main()
{
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1; 
    while(t--){    
    solve();

}
    return 0;
}