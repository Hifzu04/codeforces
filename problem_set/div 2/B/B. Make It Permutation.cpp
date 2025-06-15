#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    int n ; cin>>n;
    cout<<2*n-3<<"\n";
    for(int i =1 ; i<n ; i++){
        cout<<i<<" "<<i<<" "<<n<<"\n";
    }
    for(int i =3 ; i<=n ; i++){
        cout<<i<<" "<<1<<" "<<i-1<<"\n";
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