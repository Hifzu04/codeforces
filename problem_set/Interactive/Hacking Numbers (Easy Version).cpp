#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

ll add(ll y){
    cout<<"add "<<y<<endl;
    ll r ; cin>>r ;
    return r ; 
}
ll done(){
    cout<<"!"<<endl;
    ll r ; cin>>r ;
    if (r== -1 ) exit(0);
    return r ;  
}


ll dig() {
    cout<<"digit"<<endl;  
    ll r ; cin>>r; 
    return r;
}

void solve() {
    ll n ; cin>>n;
    dig(); dig(); add(-8); add(-4); add(-2); add(-1);
    add(n-1);
    done();
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