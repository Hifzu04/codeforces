#include <bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t; 
    while(t--){    
    int n ; cin>>n;
    ll arr[n];
    ll nubmer_of_even = 0  ; 
    ll number_of_odd =0;
    ll ans =0;
    loop{
        cin>>arr[i];
        if(arr[i]&1) number_of_odd++;
        else nubmer_of_even++;

    }

    if(nubmer_of_even>0) {
        ans++;
    }
    else {
        ans--;
    }

    cout<<ans+number_of_odd<<"\n";




}
    return 0;
}