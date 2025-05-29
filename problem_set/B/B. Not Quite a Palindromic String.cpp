#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    ll n , k ; 
    cin>>n >>k;
    string s ; 
    cin>>s;
    ll cntzero =0;
    ll cntone =0;
    loop{
        if(s[i]=='0') cntzero++;
        else cntone++;
    }
    int minGoodPair = abs((cntone-cntzero)/2);
    int maxGoodPair = (cntone+cntzero)/2;

    if(k>=minGoodPair and k<=maxGoodPair and (k-minGoodPair)%2==0) cout<<"YES"<<"\n";
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