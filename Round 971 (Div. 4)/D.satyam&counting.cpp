#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; 
    cin>>t;
    while(t--){
        ll n , answer = 0 ; 
        cin>>n ; 
        map<pair<ll,ll>,ll>m;
        vector<ll>cnt(2);
        for(ll i = 0 ;  i<n ; i ++){
            ll x , y ;
            cin>>x>>y;
            m[{x, y}]++;
            cnt[y]++;    
        }
        for(auto &[i,j] : m){
            auto [x,y] = i;
            if(m.count({x, 1-y})){
                answer+= cnt[y]-1;
            }
            if(m.count({x+1 , 1-y}) && m.count({x-1 , 1-y})) answer++;

        }
        cout<<answer<<"\n";
    }


    return 0;
}