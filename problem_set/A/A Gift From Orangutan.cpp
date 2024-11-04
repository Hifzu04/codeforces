#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n ; 
        cin>>n;
        int arr[n];
        int maxm = 0;    int minm =2000;
        for(int i =  0 ; i< n ; i++) {
            cin>>arr[i];
            minm = min(arr[i] , minm );
            maxm = max(arr[i] , maxm);
            
        }  
        cout<<(maxm-minm)*(n-1)<<"\n";

        
    }


    return 0;
}