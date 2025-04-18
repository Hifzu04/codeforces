#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    int n ,m, l,r;
    cin>>n>>m>>l>>r;

    if(l+m>=0){
        cout<<l<<" "<<l+m<<"\n";

    }else{
        cout<<-m<<" "<<0<<"\n";
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