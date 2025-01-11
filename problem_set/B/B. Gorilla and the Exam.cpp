#include <bits/stdc++.h>
#define ll long long
#define loop(n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t; 
    while(t--){    
    ll n,k,temp;
    cin>>n>>k;
    map<ll,ll>mp;
    for(ll i = 0 ; i <n;i++){
        cin>>temp;
        mp[temp]++;
    }
    vector<int>v;
    for(auto x:mp){
        v.push_back(x.second);
    }

    sort(v.begin(), v.end());

    int ans = v.size();

    for(ll i =0 ; i < v.size() ; i++){
        k-=v[i];
        if(k<0){
            break;
        }
        ans--;
    }


     cout<<max(ans,1)<<endl;


   



}
    return 0;
}