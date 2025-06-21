#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    int n, k ; cin>>n>>k;
    vector<vector<char>>vec(n , vector<char>(n, 0));
    loop{
        for(int j=0 ; j<n ; j++){
        
            cin>>vec[i][j] ;
        }
    }

    for(int i = 0 ; i<n ; i+=k){
        for(int j = 0 ; j<n ; j+=k){
            cout<<vec[i][j];
        }
        cout<<"\n";
    }

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