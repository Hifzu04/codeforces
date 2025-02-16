#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    int n  ;cin>>n;
    string s  ; cin>>s;
    int ans = 0 ; 
    char curr = '0';
    for(int i =0 ;  i<s.size(); i++ ){
            if(s[i]!= curr){
                ans++;
                if (curr == '0') curr='1';
               else  curr= '0';
            }
    }
    cout<<ans<<"\n";

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