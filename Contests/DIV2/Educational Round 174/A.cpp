//A. Was there an Array?

#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    int n ; cin>>n;
    int arr[n-2];

    for(int i = 0 ; i<n-2 ; i++){
        cin>>arr[i];
    }
    bool flag = 1;

    for(int i=0 ; i<n-4 ; i++){
        if(arr[i]==1 && arr[i+1]==0 && arr[i+2]==1){
        flag =0 ;
        break;
        }
    }
    if(flag) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";


}
int main()
{
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1; cin>>t; 
    while(t--){    
    solve();

}
    return 0;
}