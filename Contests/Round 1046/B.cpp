#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
    ll n , k ; 
    string s ; 
    cin>>n>>k>>s;
    int cnt =0;
    for(int  i=0 ; i< n ; i++){
        if(s[i]=='1'){
            cnt++;
            if(cnt>=k){
                no;
               return;
            }
        }else cnt=0;
    }
     vector<int> p(n, 0);
        int curVal = n;
  
        for (int i = 0; i < n; ++i) {
            if (s[i] == '0') {
                p[i] = curVal--;
            }
        }
      
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                p[i] = curVal--;
            }
        }

        cout << "YES\n";
        for (int i = 0; i < n; ++i) {
           cout<<p[i]<<" ";
        }
        cout << '\n';


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