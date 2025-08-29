#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
    int a , b, c , d;
    cin>>a>>b>>c>>d;

    if((max(a,b) <= 2*(min(a,b)+1)) && ( max((c-a) , (d-b)) <= 2*((min((c-a),(d-b)))+1))){
        yes;
    }
    else no;
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