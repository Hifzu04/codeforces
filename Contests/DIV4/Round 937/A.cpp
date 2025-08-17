#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
    int a , b , c;
     cin>>a>>b>>c;
     if(a<b && b<c){
        cout<<"STAIR";
     }
     else if(a<b && b>c){
        cout<<"PEAK";

     }else cout<<"NONE";
     cout<<"\n"
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