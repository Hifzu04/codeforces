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
    ll n , k;
    cin>>n>>k;
    vector<int>vec(n);
    for(int i = 0 ; i < n ; i++){
        cin>>vec[i];
    }
    sort(vec.begin() , vec.end());
    ll i = 0 ; ll j= n-1;
    ll ans =0;
    while(i<j){
        if(vec[i] +vec[j] < k){
            i++;
        }
        else if(vec[i]+vec[j] ==k){
            ans++;
            i++; j--;
        }
        else {
            j--;
        }
    }
    cout<<ans<<"\n";



}
    return 0;
}