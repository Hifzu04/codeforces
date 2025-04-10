#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

void solve()
{
    string s ;cin>>s;

    ll cnt_bwzero =0;
    ll cnt_leadingzero = 0 ; 

    for(ll i=0 ; i<s.size() ; i++){
       if(s[i]=='0') cnt_bwzero++;
    }
    for(ll i = s.size()-1 ; i>=0 ; i--){
       if (s[i] =='0') cnt_leadingzero++;
       else break;
    }

    cout<<s.size()-1-cnt_bwzero+cnt_leadingzero<<"\n";
}
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}