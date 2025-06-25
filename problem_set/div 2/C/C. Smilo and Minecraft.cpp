#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
    int n, m , k ; 
    cin>>n>>m>>k;
    string str[n];
    f(i,n){
        cin>>str[i];    
    }
    ll prefix[n+1][m+1];

    f(i,n){
        f(j,m){
        prefix[i+1][j+1] = prefix[i+1][j]+prefix[i][j+1] - prefix[i][j] + (str[i][j]=='g');

        }
    }

    ll totgold = 0; 
    f(i,n) {
        totgold+= count(str[i].begin(), str[i].end() , 'g');        

    }

    ll wasted = LLONG_MAX;
    auto clamp = [&](ll p ,ll q){
        if(p<0) p = 0;
        if(p>n) p=n;
        if(q<0) q=0;
        if (q>m) q= m;
        return make_pair(p,q);
    };

    f(i,n){
        f(j,m){
            if(str[i][j]!= '.') continue;
            auto [x1,y1] = clamp(i-k+1 , j-k+1);
            auto [x2, y2] = clamp(i+k , j+k);
            wasted = min(wasted , prefix[x2][y2]-prefix[x1][y2]-prefix[x2][y1] + prefix[x1][y1]);
        }
    }
    cout<<totgold-wasted<<"\n";
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