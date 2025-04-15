#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    int n , x ;
    cin>>n>>x;
    int a[n];
    int sum = 0;
    loop{
        cin>>a[i];
        sum+=a[i];
    }
    if (sum/n==x && sum%n==0) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";

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