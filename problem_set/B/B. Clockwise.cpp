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
    ll n ; cin>>n;
    ll arr[n];
    for(int i= 0 ;  i < n ; i++){
        cin>>arr[i];

    }
    bool flag =1;
    loop{
        if(arr[i]<=2*(n-i-1) || arr[i] <= 2*i){
            
            flag=0;
            break;
        } 
    }

    if(flag) cout<<"YES";
    else cout<<"NO";

    cout<<"\n";



}
    return 0;
}