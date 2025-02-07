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
   
    int ans =1;
 
    for(int i =1 ; i<n ; i=(2*i+2)){
        ans++;
       
    }
  

    cout<<ans<<"\n";


}
    return 0;
}