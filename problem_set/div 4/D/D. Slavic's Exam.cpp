#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
    string s ,ss;
    cin>>s>>ss;
     ll N = s.size();
     ll n = ss.size();

     ll i = 0 ; ll j =0;
     while(i<N){
        if(ss[j]==s[i]){
            i++ ;j++;
        }else{
            if(s[i]=='?'){
                 s[i] = ss[j];
                i++; j++;
               
            }
            else{
                i++;
            }
        }
        if(j==n) break;
     }
     if(j==n){ yes;
     for(ll i = 0;i<N ; i++){
        if(s[i]=='?') s[i]='a';
     }
     cout<<s<<"\n";
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