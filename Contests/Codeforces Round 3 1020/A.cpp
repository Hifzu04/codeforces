#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    int n  ; cin>>n;
    string s;
    cin>>s;
    int cnt1 = 0;
    int cnt0 = 0;
    for(int i = 0 ;  i<s.size() ; i++){
        if(s[i]=='1'){
            cnt1++;
        }  
        else cnt0++;
    }
   cout<<n+(cnt1*(n-2))<<"\n";
    

     

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