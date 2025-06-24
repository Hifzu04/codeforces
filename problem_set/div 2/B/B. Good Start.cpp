#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    ll h,w;
    cin >> h >> w;
    array<int,2> dim, first, second;
    cin >> dim[0] >> dim[1] >> first[0] >> first[1] >> second[0] >> second[1];
 
    for(int i= 0 ;i<2 ; i++){
        if(max(first[i], second[i]) <= min(first[i], second[i]) + dim[i] - 1) {
            if(abs(first[1-i] - second[1-i]) % dim[1-i]) {
               cout<<"NO"<<"\n";
                return;
            }
        }
    }
 
    if(abs(first[0] - second[0]) % dim[0] && abs(first[1] - second[1]) % dim[1]) {
        cout<<"NO"<<"\n";
        return;
    }
 
    cout<<"YES"<<"\n";




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