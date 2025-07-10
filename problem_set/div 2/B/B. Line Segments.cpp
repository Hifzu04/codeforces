#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
    ll n ; cin>>n;
    ll px, py,qx,qy; cin>>px>>py>>qx>>qy;

     float dist = sqrt((px-qx)*(px-qx) + (py-qy)*(py-qy));
    float maxmside = dist;
   float sum =dist;
    float arr[n]; f(i,n) { cin>>arr[i];
       float p =arr[i];
         maxmside = max(maxmside,p );
         sum+=arr[i];

    }
   // sum+=maxmside;
    if(maxmside>sum-maxmside) {
        no ; return ;
    }
    yes;


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