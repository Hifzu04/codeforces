#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    int x , y;
    cin>>x>>y;
    if((y-x==1) || (x>=y && (x-y+1)%9 ==0 && (x - y + 1) > 0)){
        cout<<"YES\n";
    }else cout<<"NO\n";

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

