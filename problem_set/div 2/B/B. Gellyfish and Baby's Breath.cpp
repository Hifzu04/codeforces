#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"


#define  MOD (998244353)


     ll po2[100001];


void solve() {
    ll n ; cin>>n ;
    vector<ll>p(n);
    vector<ll>q(n);
    f(i,n) cin>>p[i];
    f(i,n) cin>>q[i];
    vector<ll>posa(n+1);
    vector<ll>posb(n+1);
    f(i,n){
      posa[p[i]] = i;
      posb[q[i]] = i;
    }
    vector<ll>ans;

    ll pp = p[0]; ll pq= q[0];
    f(i, n){
        pp = max(pp,p[i]);
        pq = max(pq , q[i]);
        pair<ll, ll> p1 = make_pair(pp , q[i - posa[pp]]);
        pair<ll, ll> p2 = make_pair(pq , p[i - posb[pq]]);
        pair<ll,ll>ansp = max(p1,p2);
        ans.push_back((po2[ansp.first]+ po2[ansp.second]) % MOD);

    } 

    for(int i = 0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    po2[0] =1 ; 
  
    for(int i= 1 ; i<=100000 ; i++){
        po2[i] = (2*po2[i-1]) % MOD;
    }
   
    int t = 1; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}