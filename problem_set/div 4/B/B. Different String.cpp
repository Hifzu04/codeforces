#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
    string s ; cin>>s;
    bool flag = 0;
    for(int i =1 ; i<s.size() ; i++){
         if(s[i]!=s[i-1]) {
            yes;
            flag =1 ;
            char p = s[i];
            s[i]=s[i-1];
            s[i-1] = p;
             break;
         }
        
    }
    if(flag)
    cout<<s<<"\n";
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