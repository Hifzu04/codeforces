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
    int n ; cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++ ) cin>>arr[i];


    ll sum =0;
    int ans=1;
    int csum=1;
    int k =1;

    for(int i =0 ; i<n ; i++){
    
        while(sum>csum){
            csum = k*k;
            k++;
        }   
        if(sum==csum  and csum%2!=0) ans++;

        sum+=arr[i];
    }

    cout<<ans<<"\n";


}
    return 0;
}