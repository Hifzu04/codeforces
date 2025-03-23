#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    ll n ; cin>>n ; 
    string str ; cin>>str;
    ll root = sqrt(n);
    if(root*root != n){
        cout<<"NO"<<"\n";
        
    }else {
        string mystr ="";

        for(int i=0 ; i<root ; i++){
            for (int j = 0 ; j< root; j++){
                if(i ==0 or i== root-1 or j==0 or j==root-1){
                        mystr+='1';
                }else {
                    mystr+='0';
                }

                
            }
        }

        ///cout<<str<<"--"<<mystr<<"\n";
        if(str==mystr) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
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