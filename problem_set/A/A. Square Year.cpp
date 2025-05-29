#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    int n  ; cin>>n;
    bool found = 0;
    for (int i = 0;i<=100; i++ ){
       if (i*i==n){
        cout<<0<<" "<<i<<'\n';
        found =1 ;
        break;
       }
    }

    if(found==0 ){
        cout<<-1<<"\n";
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