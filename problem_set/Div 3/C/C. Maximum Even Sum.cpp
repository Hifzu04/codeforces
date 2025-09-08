// #include <bits/stdc++.h>
// using ll = long long;
// #define f(i,n) for (ll i = 0; (i) < (n); (i)++)
// using namespace std;
// #define yes cout << "YES\n"
// #define no  cout << "NO\n"

// void solve() {
//      ll a , b; 
//      cin>>a>>b;
//      if(a%2==0 && b%2==1) {cout<<-1<<"\n"; return;}
//      vector<ll>facb;
//      for (ll i = 1 ; i*i<=b ; i++){
//           if(b%i ==0 ){
//             facb.push_back(i);
//             //cout<<i<<" ";
//              if(i*i != b){
//             facb.push_back(b/i);
//            // cout<<b/i<<" ";
//           }
//           }
         
//      }
//      ll ans = -1;
//      ll n = facb.size();
//      for(ll i = 0 ; i<n ; i++){
//         ll k = facb[i];
//        // cout<<facb[i]<<" ";
//         ll x = (a*k) + (b/k);
//       //  cout<<x<<" ";
//         if(x %2 ==0) {
//             ans = max(ans , x);
//         }
//      }
//      cout<<ans<<"\n";

// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t = 1; cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
    ll a , b ; cin>>a>>b;
    ll ans = -1 ;
    bool aodd = (a%2);
    bool bodd = (b%2);

    if(!aodd and !bodd){
        ans = (a*b)/2 +2;
    }
    else if(aodd && bodd){
        ans = a*b+1;
    }
    else if(!aodd and bodd) ans = -1 ; 
    else {
        ans = a*(b/2) +2;
        if(ans &1) ans =-1 ;
    }

    cout<<ans<<"\n";

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