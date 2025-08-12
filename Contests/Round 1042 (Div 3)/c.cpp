#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
    ll n  , k ; cin>>n>>k;
    vector<ll>a(n);
    vector<ll>b(n);

    f(i,n){ cin>>a[i] ; a[i] = min(a[i]%k , k-a[i]%k); } 
    f(i,n) {cin>>b[i]; b[i] = min( b[i]%k , k-b[i]%k);}
    sort(a.begin() , a.end());
    sort(b.begin(), b.end());
     
    f(i,n){
        if(a[i]!=b[i] ){
            no ; return;
        }
    }
    yes;

    

    // // unordered_map<ll,ll>fa,fb;

    // // f(i,n){
    // //     fa[a[i]]++;
    // //     fb[b[i]]++;
    // // }
     
    // //  for(auto x : fa){
    // //     if(fb.find(x.first) != fb.end()){
    // //         fa[x.first] -= fb[x.first];
    // //         fb[x.first] =0;
    // //         if( fa[x.first]<0){
    // //             fb[x.first] -= fa[x.first];
    // //             fa[x.first] = 0; 
    // //         }
    // //     }
    // //     if(fb.find(k-x.first) != fb.end()){
    // //          fa[x.first] -= fb[k-x.first];
    // //          fb[k-x.first] = 0 ; 
    // //          if(fa[x.first] < 0){
    // //             fb[k-x.first] -= fa[x.first];
    // //             fa[x.first] =0;
    // //          }
    // //     }
    // //  }
    // //  for(auto it : fa){
    // //     if(it.second >0) {
    // //         no ; return;
    // //     }
    // //  }
    // //  for(auto it : fb){
    // //     if(it.second>0) {
    // //         no ; return ; 
    // //     }
    // //  }
    // //  yes ;
    


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}