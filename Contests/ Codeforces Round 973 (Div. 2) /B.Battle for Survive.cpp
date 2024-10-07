#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        ll n;
        cin>>n;
        int arr[n];
        for(ll i = 0 ; i< n ; i++){
            cin>>arr[i];
        }

        ll sum =0;
        for(ll i = 0 ; i<n-2; i++){
            sum+=arr[i];
        }

        cout<<arr[n-1]-(arr[n-2] -sum)<<"\n";
        
    }


    return 0;
}